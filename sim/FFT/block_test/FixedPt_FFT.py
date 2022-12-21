
"""
Floating Point FFT on arbitrary signal.
By. Steven Sun '25
"""
import math
import os
import cmath
import numpy as np
from fxpmath import Fxp

def cooley_tukey_fft(x, NUM_SAMPLES):
    X = list()
    for k in range(0, NUM_SAMPLES):
        window = 1 # np.sin(np.pi * (k+0.5)/N)**2
        X.append(np.complex(x[k] * window, 0))
    fft_rec(X)
    return X
def fft_rec(X):
    N = len(X)
    if N <= 1:
        return
    even = np.array(X[0:N:2])
    odd = np.array(X[1:N:2])
    fft_rec(even)
    fft_rec(odd)
    for k in range(0, N//2):
        t = np.exp(np.complex(0, -2 * np.pi * k / N)) * odd[k]
        X[k] = even[k] + t
        X[N//2 + k] = even[k] - t