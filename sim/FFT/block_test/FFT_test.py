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
from .FixedPt_FFT import fixed_point_fft
from .FixedPt_FFT import cooley_tukey_fft_recursive
from fxpmath import Fxp
import numpy as np


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
  
  output = output[1:bitwidth * fft_size + 1]
  
  return output
  

"""Creates a singular FFT call and resposne """
def fft_call_response(array_of_sample_integers, bitwidth, fft_size):
  array = []

  
  output_array_unpacked = np.fft.fft(array_of_sample_integers)
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
  0x00010000_00010000, 0x00000000_00020000
  ]

def two_point_dc_generated(bits, fft_size, frac_bits):
  print("here")
  print([Fxp( 1, signed = True, n_word = bits, n_frac = frac_bits ),Fxp( 1, signed = True, n_word = bits, n_frac = frac_bits )])
  return fft_call_response([Fxp( 1, signed = True, n_word = bits, n_frac = frac_bits ),Fxp( 1, signed = True, n_word = bits, n_frac = frac_bits )], bits, fft_size)


def two_point_dc_generated_negative(bits, fft_size, frac_bits):

  return fft_call_response([Fxp( -1, signed = True, n_word = bits, n_frac = frac_bits ),Fxp( -1, signed = True, n_word = bits, n_frac = frac_bits )], bits, fft_size)


def eight_point_dc(bits, fft_size, frac_bits):
  return [
  0x00010000_00010000_00010000_00010000_00010000_00010000_00010000_00010000, 0x00000000_00000000_00000000_00000000_00000000_00000000_00000000_00080000
  ] 

def eight_point_offset_sine(bits, fft_size, frac_bits):
  return [
  0x00010000_00000000_00010000_00000000_00010000_00000000_00010000_00000000, 0x00000000_00000000_00000000_fffc0000_00000000_00000000_00000000_00040000
  ]


##################################################################################################################################################################
def eight_point_ones_alt_twos(bits, fft_size, frac_bits):
  return [
  0x00010000_00020000_00010000_00020000_00010000_00020000_00010000_00020000, 0x00000000_00000000_00000000_00040000_00000000_00000000_00000000_000C0000
  ]

def eight_point_one_to_eight(bits, fft_size, frac_bits):
  return [
  0x00080000_00070000_00060000_00050000_00040000_00030000_00020000_00010000, 0xfffc0000_fffc0000_fffc0000_fffc0000_fffc0000_fffc0000_fffc0000_00240000
  ]
  
def eight_point_assorted(bits, fft_size, frac_bits):
  return [
  0xfffc0000_00000000_00030000_00000000_00050000_ffff0000_00010000_00020000, 0xfff70000_00030000_000d0000_fffc0000_000d0000_00030000_fff70000_00060000
  ]

def four_point_assorted(bits, fft_size, frac_bits):
  return [
  0x00010000_00000000_00010000_00000000, 0x00000000_fffe0000_00000000_00020000
  ]

def four_point_offset_sine(bits, fft_size, frac_bits):
  return [
  0x00010000_00020000_00010000_00020000, 0x00000000_00020000_00000000_00060000
  ]

def four_point_non_sine(bits, fft_size, frac_bits):
  return [
  0x00020000_00020000_00030000_00020000, 0x00000000_FFFF0000_00000000_00090000
  ]

def four_point_dc(bits, fft_size, frac_bits):
  return [
  0x00010000_00010000_00010000_00010000, 0x00000000_00000000_00000000_00040000
  ]

def four_point_one_to_four(bits, fft_size, frac_bits):
  return [
  0x00040000_00030000_00020000_00010000, 0xfffe0000_fffe0000_fffe0000_000A0000
  ]

def sixteen_point_dc(bits, fft_size, frac_bits):
  return [
  0x00010000_00010000_00010000_00010000_00010000_00010000_00010000_00010000_00010000_00010000_00010000_00010000_00010000_00010000_00010000_00010000, 
  0x00000000_00000000_00000000_00000000_00000000_00000000_00000000_00000000_00000000_00000000_00000000_00000000_00000000_00000000_00000000_00100000
  ]

######################################################################################################################################################################
def two_point_two_samples(bits, fft_size, frac_bits):
  return [
  0x00010000_00010000, 0x00000000_00020000,
  0x00000000_00010000, 0x00010000_00010000
  ]

def eight_point_two_samples(bits, fft_size, frac_bits):
  return [
  0x00010000_00000000_00010000_00000000_00010000_00000000_00010000_00000000, 0x00000000_00000000_00000000_fffc0000_00000000_00000000_00000000_00040000,
  0x00010000_00010000_00010000_00010000_00010000_00010000_00010000_00010000, 0x00000000_00000000_00000000_00000000_00000000_00000000_00000000_00080000
  ] 

def descend_signal(bits, fft_size, frac_bits):
  signal = []
  for i in range(fft_size):
    signal.append(Fxp( fft_size - i, signed = True, n_word = bits, n_frac = frac_bits ))
  
  return fft_call_response( signal, bits, fft_size)

def random_signal(bits, fft_size, frac_bits):
  signal = []
  for i in range(fft_size):
    signal.append(Fxp( random.uniform(-20,20), signed = True, n_word = bits, n_frac = frac_bits ))

  

  return fft_call_response( signal, bits, fft_size)


def random_stream(bits, fft_size,frac_bits):

  output = []
  
  for a in range(50):

    signal = []
    for i in range(fft_size):
      signal.append(Fxp( random.uniform(-20,20), signed = True, n_word = bits, n_frac = frac_bits ))

    output = output + fft_call_response( signal, bits, fft_size)

  

  return output





#----------------------------------------------------------------------
# Test Case Table
#----------------------------------------------------------------------



test_case_table = mk_test_case_table([
  (                                   "msgs                                       src_delay sink_delay BIT_WIDTH DECIMAL_PT N_SAMPLES"),
  [ "two_point_dc",                    two_point_dc,                              0,        0,         32,        16,       2         ],
  [ "two_point_dc_generated",          two_point_dc_generated,                    0,        0,         32,        16,       2         ],
  [ "two_point_dc_generated_negative", two_point_dc_generated_negative,           0,        0,         32,        16,       2         ],
  [ "eight_point_dc",                  eight_point_dc,                            0,        0,         32,        16,       8         ],
  [ "eight_point_offset_sine",         eight_point_offset_sine,                   0,        0,         32,        16,       8         ],
  [ "two_point_random",                random_signal,                             0,        0,         32,        16,       2         ],
  [ "two_points_random_stream",        random_stream,                             0,        0,         32,        16,       2         ],
  [ "four_point_assorted",             four_point_assorted,                       0,        0,         32,        16,       4         ],
  [ "four_point_offset_sine",          four_point_offset_sine,                    0,        0,         32,        16,       4,        ],
  [ "four_point_non_sine",             four_point_non_sine,                       0,        0,         32,        16,       4,        ], 
  [ "eight_point_random",              random_signal,                             0,        0,         32,        16,       8         ],
  [ "two_point_two_samples",           two_point_two_samples,                     0,        0,         32,        16,       2         ],
  [ "eight_point_two_ops",             eight_point_two_samples,                   0,        0,         32,        16,       8         ],
  [ "eight_point_ones_alt_twos",       eight_point_ones_alt_twos,                 0,        0,         32,        16,       8         ],
  [ "eight_point_one_to_eight",        eight_point_one_to_eight,                  0,        0,         32,        16,       8         ],
  #[ "eight_point_assorted",            eight_point_assorted,                      0,        0,         32,        16,       8         ],
  [ "four_point_dc",                   four_point_dc,                             0,        0,         32,        16,       4         ],
  [ "four_point_one_to_four",          four_point_one_to_four,                    0,        0,         32,        16,       4         ], 
  [ "sixteen_point_dc",                sixteen_point_dc,                          0,        0,         32,        16,       16        ],
  [ "descend_signal_2",                descend_signal,                            0,        0,         32,        16,       2        ],
  [ "descend_signal_4",                descend_signal,                            0,        0,         32,        16,       4        ],
  [ "descend_signal_16",               descend_signal,                            0,        0,         32,        16,       16        ],
  
])

#-------------------------------------------------------------------------
# TestHarness
#-------------------------------------------------------------------------

@pytest.mark.parametrize( **test_case_table )
def test( test_params, cmdline_opts ):

  th = TestHarness( FFTTestHarnessVRTL(test_params.BIT_WIDTH, test_params.DECIMAL_PT,test_params.N_SAMPLES), test_params.BIT_WIDTH, test_params.DECIMAL_PT, test_params.N_SAMPLES )

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
