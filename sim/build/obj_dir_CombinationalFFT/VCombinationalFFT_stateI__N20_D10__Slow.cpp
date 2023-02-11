// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCombinationalFFT.h for the primary calling header

#include "VCombinationalFFT_stateI__N20_D10.h"
#include "VCombinationalFFT__Syms.h"

//==========

VL_CTOR_IMP(VCombinationalFFT_stateI__N20_D10) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VCombinationalFFT_stateI__N20_D10::__Vconfigure(VCombinationalFFT__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

VCombinationalFFT_stateI__N20_D10::~VCombinationalFFT_stateI__N20_D10() {
}

void VCombinationalFFT_stateI__N20_D10::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VCombinationalFFT_stateI__N20_D10::_ctor_var_reset\n"); );
    // Body
    acc = VL_RAND_RESET_Q(48);
    counter = VL_RAND_RESET_I(6);
}
