#=========================================================================
# IntMulFixedLatRTL_test
#=========================================================================

import pytest
import random

random.seed(0xdeadbeef)

from pymtl3 import *
from pymtl3.stdlib import stream
from pymtl3.stdlib.test_utils import mk_test_case_table, run_sim
from FFT.FFTTestHarnessRTL import FFTTestHarnessVRTL
from .FixedPt_FFT import cooley_tukey_fft

#-------------------------------------------------------------------------
# TestHarness
#-------------------------------------------------------------------------


class TestHarness( Component ):

  def construct( s, fft, BIT_WIDTH = 32, DECIMAL_PT = 16, N_SAMPLES = 8):

    # Instantiate models

    s.src  = stream.SourceRTL( mk_bits(BIT_WIDTH * N_SAMPLES) )
    s.sink = stream.SinkRTL  ( mk_bits(BIT_WIDTH * N_SAMPLES) )
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
  
  output = output[0:bitwidth * fft_size]
  
  return output
    
def fft_call_response(array_of_sample_integers, bitwidth, fft_size):
  array = []
  array.append(packed_msg(array_of_sample_integers, bitwidth, fft_size))
  array.append(packed_msg(cooley_tukey_fft(array_of_sample_integers, fft_size), bitwidth, fft_size))

  return array


#----------------------------------------------------------------------
# Test Case: small positive * positive
#----------------------------------------------------------------------

def two_point_dc(bits, fft_size):
  return [
  0x00010000_00010000, 0x00000000_00020000
  ]

def two_point_dc_generated(bits, fft_size):

  return fft_call_response([1 << 16, 1 << 16], bits, fft_size)

def eight_point_dc(bits, fft_size):
  return [
  0x00010000_00010000_00010000_00010000_00010000_00010000_00010000_00010000, 0x00000000_00000000_00000000_00000000_00000000_00000000_00000000_00080000
  ] 

def eight_point_offset_sine(bits, fft_size):
  return [
  0x00010000_00000000_00010000_00000000_00010000_00000000_00010000_00000000, 0x00000000_00000000_00000000_fffc0000_00000000_00000000_00000000_00040000
  ]

def two_point_two_samples(bits, fft_size):
  return [
  0x00010000_00010000, 0x00000000_00020000,
  0x00000000_00010000, 0x00010000_FFFF0000
  ]

def eight_point_two_samples(bits, fft_size):
  return [
  0x00010000_00000000_00010000_00000000_00010000_00000000_00010000_00000000, 0x00000000_00000000_00000000_fffc0000_00000000_00000000_00000000_00040000,
  0x00010000_00010000_00010000_00010000_00010000_00010000_00010000_00010000, 0x00000000_00000000_00000000_00000000_00000000_00000000_00000000_00080000
  ] 

def two_point_dc_random(bits, fft_size):

  return fft_call_response([1 << 16, 1 << 16], bits, fft_size)



#----------------------------------------------------------------------
# Test Case Table
#----------------------------------------------------------------------


test_case_table = mk_test_case_table([
  (                           "msgs                     src_delay sink_delay BIT_WIDTH DECIMAL_PT N_SAMPLES"),
  [ "two_point_dc",            two_point_dc,            0,        0,         32,        16,       2         ],
  [ "two_point_dc_generated",  two_point_dc_generated,  0,        0,         32,        16,       2         ],
  [ "eight_point_dc",          eight_point_dc,          0,        0,         32,        16,       8         ],
  [ "eight_point_offset_sine", eight_point_offset_sine, 0,        0,         32,        16,       8         ],
  [ "two_point_two_samples",   two_point_two_samples,   0,        0,         32,        16,       2         ],
  [ "eight_point_two_ops",     eight_point_two_samples, 0,        0,         32,        16,       8         ],

])
#-------------------------------------------------------------------------
# TestHarness
#-------------------------------------------------------------------------

@pytest.mark.parametrize( **test_case_table )
def test( test_params, cmdline_opts ):

  th = TestHarness( FFTTestHarnessVRTL(test_params.BIT_WIDTH, test_params.DECIMAL_PT,test_params.N_SAMPLES), test_params.BIT_WIDTH, test_params.DECIMAL_PT, test_params.N_SAMPLES )

  th.set_param("top.src.construct",
    msgs=test_params.msgs(test_params.BIT_WIDTH, test_params.N_SAMPLES)[::2],
    initial_delay=test_params.src_delay+3,
    interval_delay=test_params.src_delay )

  th.set_param("top.sink.construct",
    msgs=test_params.msgs(test_params.BIT_WIDTH, test_params.N_SAMPLES)[1::2],
    initial_delay=test_params.sink_delay+3,
    interval_delay=test_params.sink_delay )

  run_sim( th, cmdline_opts, duts=['fft'] )
