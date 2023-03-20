// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VCOMBINATIONALFFT__SYMS_H_
#define _VCOMBINATIONALFFT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VCombinationalFFT.h"

// SYMS CLASS
class VCombinationalFFT__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VCombinationalFFT*             TOPp;
    
    // CREATORS
    VCombinationalFFT__Syms(VCombinationalFFT* topp, const char* namep);
    ~VCombinationalFFT__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
