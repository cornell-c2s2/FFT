// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VCOMBINATIONALFFT_STAGE__SYMS_H_
#define _VCOMBINATIONALFFT_STAGE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VCombinationalFFT_stage.h"

// SYMS CLASS
class VCombinationalFFT_stage__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VCombinationalFFT_stage*       TOPp;
    
    // CREATORS
    VCombinationalFFT_stage__Syms(VCombinationalFFT_stage* topp, const char* namep);
    ~VCombinationalFFT_stage__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
