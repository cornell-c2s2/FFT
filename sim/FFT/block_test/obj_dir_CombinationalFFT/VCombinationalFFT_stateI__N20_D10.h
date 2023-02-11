// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCombinationalFFT.h for the primary calling header

#ifndef _VCOMBINATIONALFFT_STATEI__N20_D10_H_
#define _VCOMBINATIONALFFT_STATEI__N20_D10_H_  // guard

#include "verilated.h"

//==========

class VCombinationalFFT__Syms;

//----------

VL_MODULE(VCombinationalFFT_stateI__N20_D10) {
  public:
    
    // LOCAL SIGNALS
    CData/*5:0*/ counter;
    QData/*47:0*/ acc;
    
    // INTERNAL VARIABLES
  private:
    VCombinationalFFT__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCombinationalFFT_stateI__N20_D10);  ///< Copying not allowed
  public:
    VCombinationalFFT_stateI__N20_D10(const char* name = "TOP");
    ~VCombinationalFFT_stateI__N20_D10();
    
    // INTERNAL METHODS
    void __Vconfigure(VCombinationalFFT__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
