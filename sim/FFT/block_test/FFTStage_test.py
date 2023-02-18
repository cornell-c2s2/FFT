#=========================================================================
# IntMulFixedLatRTL_test
#=========================================================================

import pytest
import random

random.seed(0xdeadbeef)

from pymtl3 import *
from pymtl3.stdlib import stream
from pymtl3.stdlib.test_utils import mk_test_case_table, run_sim
from FFT.FFTStageTestHarnessRTL import FFTStageTestHarnessVRTL
from .FixedPt_FFT import cooley_tukey_fft
from fxpmath import Fxp


#-------------------------------------------------------------------------
# TestHarness
#-------------------------------------------------------------------------


class TestHarness( Component ):

  def construct( s, fft, BIT_WIDTH = 32, DECIMAL_PT = 16, N_SAMPLES = 8, STAGE_FFT = 0):

    # Instantiate models

    s.src  = stream.SourceRTL( mk_bits(2 * BIT_WIDTH * N_SAMPLES) )
    s.sink = stream.SinkRTL  ( mk_bits(2 * BIT_WIDTH * N_SAMPLES) )
    s.fft = fft

    # Connect

    s.src.send  //= s.fft.recv
    s.fft.send //= s.sink.recv

  def done( s ):
    return s.src.done() and s.sink.done()

  def line_trace( s ):
    return s.src.line_trace() + " > " + s.fft.line_trace() + " > " + s.sink.line_trace()

def packed_msg(array, bitwidth, fft_size): #Array of ints
  input = Bits(1)
  bit_convert = mk_bits(bitwidth)
  output = input
  for i in range(len(array)):

    output = concat( bit_convert(array[i]), output )
  
  output = output[1:bitwidth * fft_size + 1]
  
  return output
  

"""Creates a singular FFT call and resposne """
def fft_stage_call_response(array_of_sample_integers, bitwidth, fft_size, stage):
  array = []
  output_array_unpacked = cooley_tukey_fft(array_of_sample_integers, fft_size)
  input_array  = []
  output_array = []
  for n in range(fft_size):
    input_array.append( int(Fxp(array_of_sample_integers[n],n_word = bitwidth, n_frac = 16).base_repr(10)))
    output_array.append(int(Fxp(output_array_unpacked[n],n_word = bitwidth, n_frac = 16).base_repr(10)))
  
  array.append(packed_msg(input_array, bitwidth, fft_size))
  array.append(packed_msg(output_array, bitwidth, fft_size))
  
  return array


#----------------------------------------------------------------------
# Test Case: small positive * positive
#----------------------------------------------------------------------

def two_point_dc(bits, fft_size, frac_bits):
  return [
  0x00010000_00010000_00000000_00000000, 0x00000000_00020000_00000000_00000000
  ]

def eight_point_dc(bits, fft_size, frac_bits):
  return [
  0x00010000_00010000_00010000_00010000_00010000_00010000_00010000_00010000_00000000_00000000_00000000_00000000_00000000_00000000_00000000_00000000, 
  0x00000000_00020000_00000000_00020000_00000000_00020000_00000000_00020000_00000000_00000000_00000000_00000000_00000000_00000000_00000000_00000000
  ] 

def eight_point_dc_two(bits, fft_size, frac_bits):
  return [
  0x00000000_00020000_00000000_00020000_00000000_00020000_00000000_00020000_00000000_00000000_00000000_00000000_00000000_00000000_00000000_00000000,
  0x00000000_00000000_00000000_00040000_00000000_00000000_00000000_00040000_00000000_00000000_00000000_00000000_00000000_00000000_00000000_00000000
  ]

def eight_point_dc_three(bits, fft_size, frac_bits):
  return [
  0x00000000_00000000_00000000_00040000_00000000_00000000_00000000_00040000_00000000_00000000_00000000_00000000_00000000_00000000_00000000_00000000,
  0x00000000_00000000_00000000_00000000_00000000_00000000_00000000_00040000_00000000_00000000_00000000_00000000_00000000_00000000_00000000_00080000,
  ]



def random_signal(bits, fft_size, frac_bits):
  signal = []
  for i in range(fft_size):
    signal.append(Fxp( random.uniform(-20,20), signed = True, n_word = bits, n_frac = frac_bits ))

  print(fft_stage_call_response( signal, bits, fft_size))

  return fft_stage_call_response( signal, bits, fft_size)



#----------------------------------------------------------------------
# Test Case Table
#----------------------------------------------------------------------



test_case_table = mk_test_case_table([
  (                                   "msgs                                       src_delay sink_delay BIT_WIDTH DECIMAL_PT N_SAMPLES  STAGE_FFT"),
  [ "two_point_dc",                    two_point_dc,                              0,        0,         32,        16,       2 ,        0         ],
  [ "eight_point_dc",                  eight_point_dc,                            0,        0,         32,        16,       8 ,        0         ],
  [ "eight_point_dc_two",              eight_point_dc_two,                        0,        0,         32,        16,       8 ,        1         ],
  [ "eight_point_offset_sine",         eight_point_dc_three,                      0,        0,         32,        16,       8 ,        1         ],
  
])

#-------------------------------------------------------------------------
# TestHarness
#-------------------------------------------------------------------------

@pytest.mark.parametrize( **test_case_table )
def test( test_params, cmdline_opts ):

  th = TestHarness( FFTStageTestHarnessVRTL(test_params.BIT_WIDTH, test_params.DECIMAL_PT,test_params.N_SAMPLES,test_params.STAGE_FFT), test_params.BIT_WIDTH, test_params.DECIMAL_PT, test_params.N_SAMPLES, test_params.STAGE_FFT )

  msgs = test_params.msgs(test_params.BIT_WIDTH, test_params.N_SAMPLES, test_params.DECIMAL_PT)

  th.set_param("top.src.construct",
    msgs=msgs[::2],
    initial_delay=test_params.src_delay+3,
    interval_delay=test_params.src_delay )

  th.set_param("top.sink.construct",
    msgs=msgs[1::2],
    initial_delay=test_params.sink_delay+3,
    interval_delay=test_params.sink_delay )

  run_sim( th, cmdline_opts, duts=['fft'] )
