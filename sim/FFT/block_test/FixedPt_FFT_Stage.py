
"""
Single stage of a fixed poit FFT.
"""
import math
import os
import cmath
import numpy as np
from fxpmath import Fxp

def fixed_point_fft_stage( BIT_WIDTH, DECIMAL_PT, FFT_SIZE, STAGE_FFT, X):

    return -1