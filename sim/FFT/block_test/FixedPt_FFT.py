
"""
Floating Point FFT on arbitrary signal.
By. Steven Sun '25 and Will Salcedo '23
"""
import math
import os
import cmath
import numpy as np
from fxpmath import Fxp

def cooley_tukey_fft_recursive(x, NUM_SAMPLES):
    X = list()
    for k in range(0, NUM_SAMPLES):
        window = 1 # np.sin(np.pi * (k+0.5)/N)**2
        X.append(complex(x[k] * window, 0))
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
        t = np.exp(complex(0, -2 * np.pi * k / N)) * odd[k]
        X[k] = even[k] + t
        X[N//2 + k] = even[k] - t


def fixed_point_fft(BIT_WIDTH, DECIMAL_PT, SIZE_FFT, x):
    X = list(x)
    

    for s in range(round(math.log2(SIZE_FFT))):
        
        X = fixed_point_fft_stage(BIT_WIDTH, DECIMAL_PT, SIZE_FFT, s, X)
        

    return np.real(X)

def fixed_point_fft_stage( BIT_WIDTH, DECIMAL_PT, SIZE_FFT, STAGE_FFT, X):

    for m in range( 2 ** STAGE_FFT ):
        for i in range( m, SIZE_FFT, 2 ** (STAGE_FFT + 1)):
            if( STAGE_FFT != 0 ):    
                r = np.sin((2 * math.pi * STAGE_FFT / SIZE_FFT) + (SIZE_FFT / 4))
            if( STAGE_FFT == 0 ):
                r = 1
                i = 0

            omega = Fxp(complex(r, i), signed = True, n_word = BIT_WIDTH, n_frac = DECIMAL_PT)



            X[round(i)], X[round(i + 2 ** STAGE_FFT)] = bfu( X[round(i)], X[round(i + 2 ** STAGE_FFT)], omega, BIT_WIDTH, DECIMAL_PT)
    return X

def bfu(a, b, w, BIT_WIDTH, DECIMAL_PT):


    b_prime = fxpnumber(complex( w.real * b.real - w.imag * b.imag, (w.real + b.real) * (w.imag + b.imag) - w.real * b.real - w.imag * b.imag),BIT_WIDTH,DECIMAL_PT)
    
    c = a + b_prime
    d = a - b_prime


    return c, d

def fxpnumber(n, BIT_WIDTH, DECIMAL_PT):
    return Fxp(n, signed = True, n_word = BIT_WIDTH, n_frac = DECIMAL_PT)

print(fixed_point_fft(32,16,2,[1,1]))
