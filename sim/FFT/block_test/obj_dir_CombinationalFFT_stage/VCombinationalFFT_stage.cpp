// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCombinationalFFT_stage.h for the primary calling header

#include "VCombinationalFFT_stage.h"
#include "VCombinationalFFT_stage__Syms.h"

//==========

void VCombinationalFFT_stage::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCombinationalFFT_stage::eval\n"); );
    VCombinationalFFT_stage__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VCombinationalFFT_stage* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("FFTStageTestHarnessVRTL.v", 81, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VCombinationalFFT_stage::_eval_initial_loop(VCombinationalFFT_stage__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("FFTStageTestHarnessVRTL.v", 81, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VCombinationalFFT_stage::_sequent__TOP__2(VCombinationalFFT_stage__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCombinationalFFT_stage::_sequent__TOP__2\n"); );
    VCombinationalFFT_stage* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_reg__DOT__regout = 0ULL;
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_reg__DOT__regout = 0ULL;
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__b_reg__DOT__regout = 0U;
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__b_reg__DOT__regout = 0U;
    } else {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_reg__DOT__regout 
            = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_in;
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_reg__DOT__regout 
            = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_in;
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__b_reg__DOT__regout 
            = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT____Vcellout__b_sel__out;
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__b_reg__DOT__regout 
            = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT____Vcellout__b_sel__out;
    }
    if (vlTOPp->reset) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_const_reg__DOT__regout = 0ULL;
    } else {
        if (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__in_wait) {
            vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_const_reg__DOT__regout 
                = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT____Vcellinp__datapath__a;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_const_reg__DOT__regout = 0ULL;
    } else {
        if (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__in_wait) {
            vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_const_reg__DOT__regout 
                = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT____Vcellinp__datapath__a;
        }
    }
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__counter 
        = (((IData)(vlTOPp->reset) | (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__counter_reset))
            ? 0U : (0x1fU & ((1U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))
                              ? ((IData)(1U) + (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__counter))
                              : (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__counter))));
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__counter 
        = (((IData)(vlTOPp->reset) | (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__counter_reset))
            ? 0U : (0x1fU & ((1U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))
                              ? ((IData)(1U) + (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__counter))
                              : (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__counter))));
    if (vlTOPp->reset) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_bc__DOT__regout = 0U;
    } else {
        if (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__in_wait) {
            vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_bc__DOT__regout 
                = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__twiddle_imaginary
                [1U];
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_br__DOT__regout = 0U;
    } else {
        if (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__in_wait) {
            vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_br__DOT__regout 
                = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__twiddle_real
                [1U];
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_bc__DOT__regout = 0U;
    } else {
        if (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__in_wait) {
            vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_bc__DOT__regout 
                = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__twiddle_imaginary
                [0U];
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_br__DOT__regout = 0U;
    } else {
        if (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__in_wait) {
            vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_br__DOT__regout 
                = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__twiddle_real
                [0U];
        }
    }
    if (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__recv_rdy) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__ar_reg__DOT__regout 
            = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_in_real
            [2U];
    }
    if (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__recv_rdy) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__ac_reg__DOT__regout 
            = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_in_imaginary
            [2U];
    }
    if (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__recv_rdy) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__ar_reg__DOT__regout 
            = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_in_real
            [0U];
    }
    if (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__recv_rdy) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__ac_reg__DOT__regout 
            = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_in_imaginary
            [0U];
    }
    if (vlTOPp->reset) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state = 0U;
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state = 0U;
    } else {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state 
            = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state;
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state 
            = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state;
    }
    if (vlTOPp->reset) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_arac__DOT__regout = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage))) {
            vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_arac__DOT__regout 
                = (IData)((vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__acc_reg__DOT__regout 
                           >> 0x10U));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_arac__DOT__regout = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage))) {
            vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_arac__DOT__regout 
                = (IData)((vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__acc_reg__DOT__regout 
                           >> 0x10U));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ac__DOT__regout = 0U;
    } else {
        if (((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__in_wait) 
             | (2U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage)))) {
            vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ac__DOT__regout 
                = ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__in_wait)
                    ? vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_in_imaginary
                   [3U] : ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__in_wait)
                            ? 0U : (IData)((vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__acc_reg__DOT__regout 
                                            >> 0x10U))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ar__DOT__regout = 0U;
    } else {
        if (((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__in_wait) 
             | (1U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage)))) {
            vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ar__DOT__regout 
                = ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__in_wait)
                    ? vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_in_real
                   [3U] : ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__in_wait)
                            ? 0U : (IData)((vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__acc_reg__DOT__regout 
                                            >> 0x10U))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ac__DOT__regout = 0U;
    } else {
        if (((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__in_wait) 
             | (2U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage)))) {
            vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ac__DOT__regout 
                = ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__in_wait)
                    ? vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_in_imaginary
                   [1U] : ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__in_wait)
                            ? 0U : (IData)((vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__acc_reg__DOT__regout 
                                            >> 0x10U))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ar__DOT__regout = 0U;
    } else {
        if (((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__in_wait) 
             | (1U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage)))) {
            vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ar__DOT__regout 
                = ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__in_wait)
                    ? vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_in_real
                   [1U] : ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__in_wait)
                            ? 0U : (IData)((vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__acc_reg__DOT__regout 
                                            >> 0x10U))));
        }
    }
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__carry_tmp 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (IData)(
                                                             (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_const_reg__DOT__regout 
                                                              >> 0x2fU)))))))) 
            << 0x30U) | vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_const_reg__DOT__regout);
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__carry_tmp 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (IData)(
                                                             (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_const_reg__DOT__regout 
                                                              >> 0x2fU)))))))) 
            << 0x30U) | vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_const_reg__DOT__regout);
    if (vlTOPp->reset) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state = 0U;
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state = 0U;
    } else {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state 
            = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__next_state;
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state 
            = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__next_state;
    }
    vlTOPp->__Vtableidx2 = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state;
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__in_wait 
        = vlTOPp->__Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__in_wait
        [vlTOPp->__Vtableidx2];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage 
        = vlTOPp->__Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage
        [vlTOPp->__Vtableidx2];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__recv_rdy 
        = vlTOPp->__Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__recv_rdy
        [vlTOPp->__Vtableidx2];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__send_val 
        = vlTOPp->__Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__send_val
        [vlTOPp->__Vtableidx2];
    vlTOPp->__Vtableidx1 = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state;
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__in_wait 
        = vlTOPp->__Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__in_wait
        [vlTOPp->__Vtableidx1];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage 
        = vlTOPp->__Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage
        [vlTOPp->__Vtableidx1];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__recv_rdy 
        = vlTOPp->__Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__recv_rdy
        [vlTOPp->__Vtableidx1];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__send_val 
        = vlTOPp->__Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__send_val
        [vlTOPp->__Vtableidx1];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__acc_reg__DOT__regout 
        = (((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__in_wait) 
            | (IData)(vlTOPp->reset)) ? 0ULL : vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__acc_in);
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__tr 
        = (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ar__DOT__regout 
           - vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ac__DOT__regout);
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__tc 
        = ((vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_arac__DOT__regout 
            - vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ar__DOT__regout) 
           - vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ac__DOT__regout);
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__acc_reg__DOT__regout 
        = (((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__in_wait) 
            | (IData)(vlTOPp->reset)) ? 0ULL : vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__acc_in);
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__tr 
        = (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ar__DOT__regout 
           - vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ac__DOT__regout);
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__tc 
        = ((vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_arac__DOT__regout 
            - vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ar__DOT__regout) 
           - vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ac__DOT__regout);
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__mul_a 
        = ((0U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage))
            ? (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ar__DOT__regout 
               + vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ac__DOT__regout)
            : ((1U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage))
                ? vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ar__DOT__regout
                : ((2U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage))
                    ? vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ac__DOT__regout
                    : 0U)));
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_interior_mini[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__recv_rdy;
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_interior_mini[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__send_val;
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__mul_a 
        = ((0U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage))
            ? (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ar__DOT__regout 
               + vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ac__DOT__regout)
            : ((1U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage))
                ? vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ar__DOT__regout
                : ((2U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage))
                    ? vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ac__DOT__regout
                    : 0U)));
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_interior_mini[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__recv_rdy;
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_interior_mini[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__send_val;
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_out_real[3U] 
        = (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__ar_reg__DOT__regout 
           - vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__tr);
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_out_real[2U] 
        = (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__ar_reg__DOT__regout 
           + vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__tr);
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_out_imaginary[3U] 
        = (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__ac_reg__DOT__regout 
           - vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__tc);
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_out_imaginary[2U] 
        = (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__ac_reg__DOT__regout 
           + vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__tc);
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_out_real[1U] 
        = (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__ar_reg__DOT__regout 
           - vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__tr);
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_out_real[0U] 
        = (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__ar_reg__DOT__regout 
           + vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__tr);
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_out_imaginary[1U] 
        = (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__ac_reg__DOT__regout 
           - vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__tc);
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_out_imaginary[0U] 
        = (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__ac_reg__DOT__regout 
           + vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__tc);
    if ((0U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__counter_reset = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__counter_reset = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__counter_reset = 1U;
            }
        }
    }
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__next_state 
        = ((0U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))
            ? ((3U != (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage))
                ? 1U : 0U) : ((1U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))
                               ? ((0x1fU == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__counter))
                                   ? 2U : 1U) : 0U));
    if ((0U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__do_carry = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__do_carry 
                = (0x1fU == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__counter));
        } else {
            if ((2U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__do_carry = 0U;
            }
        }
    }
    if ((0U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy = 1U;
    } else {
        if ((1U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy = 0U;
            }
        }
    }
    if ((0U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val = 1U;
            }
        }
    }
    if ((0U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__in_wait = 1U;
    } else {
        if ((1U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__in_wait = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__in_wait = 0U;
            }
        }
    }
    if ((0U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__do_add = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__do_add = 1U;
        } else {
            if ((2U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__do_add = 0U;
            }
        }
    }
    if ((0U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__counter_reset = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__counter_reset = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__counter_reset = 1U;
            }
        }
    }
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__next_state 
        = ((0U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))
            ? ((3U != (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage))
                ? 1U : 0U) : ((1U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))
                               ? ((0x1fU == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__counter))
                                   ? 2U : 1U) : 0U));
    if ((0U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__do_carry = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__do_carry 
                = (0x1fU == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__counter));
        } else {
            if ((2U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__do_carry = 0U;
            }
        }
    }
    if ((0U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy = 1U;
    } else {
        if ((1U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy = 0U;
            }
        }
    }
    if ((0U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val = 1U;
            }
        }
    }
    if ((0U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__in_wait = 1U;
    } else {
        if ((1U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__in_wait = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__in_wait = 0U;
            }
        }
    }
    if ((0U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
        vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__do_add = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__do_add = 1U;
        } else {
            if ((2U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__do_add = 0U;
            }
        }
    }
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__mul_a 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__mul_a)));
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__mul_a 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__mul_a)));
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_interior_in[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_interior_mini
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_interior_in[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_interior_mini
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_interior_in[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_interior_mini
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_interior_in[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_interior_mini
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_interior_out[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_interior_mini
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_interior_out[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_interior_mini
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_interior_out[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_interior_mini
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_interior_out[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_interior_mini
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__recv_real[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_out_real
        [3U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__recv_real[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_out_real
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__recv_real[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_out_real
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__recv_real[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_out_real
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__recv_imaginary[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_out_imaginary
        [3U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__recv_imaginary[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_out_imaginary
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__recv_imaginary[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_out_imaginary
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__recv_imaginary[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_out_imaginary
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT____Vcellout__b_sel__out 
        = ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__in_wait)
            ? ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__in_wait)
                ? ((0U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage))
                    ? (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_br__DOT__regout 
                       + vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_bc__DOT__regout)
                    : ((1U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage))
                        ? vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_br__DOT__regout
                        : ((2U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage))
                            ? vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_bc__DOT__regout
                            : 0U))) : 0U) : (IData)(
                                                    ((QData)((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__b_reg__DOT__regout)) 
                                                     >> 1U)));
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT____Vcellinp__add_sel__sel 
        = ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__do_add) 
           & (IData)((QData)((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__b_reg__DOT__regout))));
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT____Vcellout__b_sel__out 
        = ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__in_wait)
            ? ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__in_wait)
                ? ((0U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage))
                    ? (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_br__DOT__regout 
                       + vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_bc__DOT__regout)
                    : ((1U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage))
                        ? vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_br__DOT__regout
                        : ((2U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage))
                            ? vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_bc__DOT__regout
                            : 0U))) : 0U) : (IData)(
                                                    ((QData)((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__b_reg__DOT__regout)) 
                                                     >> 1U)));
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT____Vcellinp__add_sel__sel 
        = ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__do_add) 
           & (IData)((QData)((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__b_reg__DOT__regout))));
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__in_wait)
                                 ? ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__in_wait)
                                     ? vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__in_wait)
                                 ? ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__in_wait)
                                     ? vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__send_rdy[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_interior_in
        [3U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__send_rdy[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_interior_in
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__send_rdy[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_interior_in
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__send_rdy[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_interior_in
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__recv_val[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_interior_out
        [3U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__recv_val[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_interior_out
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__recv_val[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_interior_out
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__recv_val[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_interior_out
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__send_real[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__recv_real
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__send_real[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__recv_real
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__send_real[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__recv_real
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__send_real[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__recv_real
        [3U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__send_imaginary[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__recv_imaginary
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__send_imaginary[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__recv_imaginary
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__send_imaginary[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__recv_imaginary
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__send_imaginary[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__recv_imaginary
        [3U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__acc_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                                 ? ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                                     ? (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__acc_reg__DOT__regout 
                                        + ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__do_carry)
                                            ? ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__do_carry)
                                                ? (
                                                   ((vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__carry_tmp 
                                                     << 0x20U) 
                                                    - vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__carry_tmp) 
                                                   << 0x1fU)
                                                : 0ULL)
                                            : vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_reg__DOT__regout))
                                     : 0ULL) : vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__acc_reg__DOT__regout));
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__acc_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                                 ? ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                                     ? (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__acc_reg__DOT__regout 
                                        + ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__do_carry)
                                            ? ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__do_carry)
                                                ? (
                                                   ((vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__carry_tmp 
                                                     << 0x20U) 
                                                    - vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__carry_tmp) 
                                                   << 0x1fU)
                                                : 0ULL)
                                            : vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_reg__DOT__regout))
                                     : 0ULL) : vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__acc_reg__DOT__regout));
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__recv_rdy[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__send_rdy
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__recv_rdy[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__send_rdy
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__recv_rdy[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__send_rdy
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__recv_rdy[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__send_rdy
        [3U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__send_val[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__recv_val
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__send_val[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__recv_val
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__send_val[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__recv_val
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__send_val[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__recv_val
        [3U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellout__fft_stage__send_msg_real[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__send_real
        [3U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellout__fft_stage__send_msg_real[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__send_real
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellout__fft_stage__send_msg_real[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__send_real
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellout__fft_stage__send_msg_real[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__send_real
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellout__fft_stage__send_msg_imag[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__send_imaginary
        [3U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellout__fft_stage__send_msg_imag[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__send_imaginary
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellout__fft_stage__send_msg_imag[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__send_imaginary
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellout__fft_stage__send_msg_imag[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__send_imaginary
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_in[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__recv_rdy
        [3U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_in[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__recv_rdy
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_in[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__recv_rdy
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_in[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__recv_rdy
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_out[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__send_val
        [3U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_out[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__send_val
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_out[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__send_val
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_out[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__send_val
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__send_msg_intermediate[7U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellout__fft_stage__send_msg_real
        [3U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__send_msg_intermediate[6U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellout__fft_stage__send_msg_real
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__send_msg_intermediate[5U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellout__fft_stage__send_msg_real
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__send_msg_intermediate[4U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellout__fft_stage__send_msg_real
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__send_msg_intermediate[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellout__fft_stage__send_msg_imag
        [3U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__send_msg_intermediate[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellout__fft_stage__send_msg_imag
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__send_msg_intermediate[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellout__fft_stage__send_msg_imag
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__send_msg_intermediate[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellout__fft_stage__send_msg_imag
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__imm 
        = ((0xeU & (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__imm)) 
           | vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_in
           [0U]);
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__imm 
        = ((0xdU & (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__imm)) 
           | (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_in
              [1U] << 1U));
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__imm 
        = ((0xbU & (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__imm)) 
           | (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_in
              [2U] << 2U));
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__imm 
        = ((7U & (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__imm)) 
           | (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_in
              [3U] << 3U));
    vlTOPp->recv_rdy = (0xfU == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__imm));
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__imm2 
        = ((0xeU & (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__imm2)) 
           | vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_out
           [0U]);
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__imm2 
        = ((0xdU & (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__imm2)) 
           | (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_out
              [1U] << 1U));
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__imm2 
        = ((0xbU & (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__imm2)) 
           | (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_out
              [2U] << 2U));
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__imm2 
        = ((7U & (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__imm2)) 
           | (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_out
              [3U] << 3U));
    vlTOPp->send_val = (0xfU == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__imm2));
    vlTOPp->send_msg[0U] = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__send_msg_intermediate
        [0U];
    vlTOPp->send_msg[1U] = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__send_msg_intermediate
        [1U];
    vlTOPp->send_msg[2U] = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__send_msg_intermediate
        [2U];
    vlTOPp->send_msg[3U] = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__send_msg_intermediate
        [3U];
    vlTOPp->send_msg[4U] = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__send_msg_intermediate
        [4U];
    vlTOPp->send_msg[5U] = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__send_msg_intermediate
        [5U];
    vlTOPp->send_msg[6U] = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__send_msg_intermediate
        [6U];
    vlTOPp->send_msg[7U] = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__send_msg_intermediate
        [7U];
}

VL_INLINE_OPT void VCombinationalFFT_stage::_combo__TOP__3(VCombinationalFFT_stage__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCombinationalFFT_stage::_combo__TOP__3\n"); );
    VCombinationalFFT_stage* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_in[0U] 
        = vlTOPp->recv_val;
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_in[1U] 
        = vlTOPp->recv_val;
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_in[2U] 
        = vlTOPp->recv_val;
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_in[3U] 
        = vlTOPp->recv_val;
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_out[0U] 
        = vlTOPp->send_rdy;
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_out[1U] 
        = vlTOPp->send_rdy;
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_out[2U] 
        = vlTOPp->send_rdy;
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_out[3U] 
        = vlTOPp->send_rdy;
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__recv_msg_intermediate[0U] 
        = vlTOPp->recv_msg[0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__recv_msg_intermediate[1U] 
        = vlTOPp->recv_msg[1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__recv_msg_intermediate[2U] 
        = vlTOPp->recv_msg[2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__recv_msg_intermediate[3U] 
        = vlTOPp->recv_msg[3U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__recv_msg_intermediate[4U] 
        = vlTOPp->recv_msg[4U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__recv_msg_intermediate[5U] 
        = vlTOPp->recv_msg[5U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__recv_msg_intermediate[6U] 
        = vlTOPp->recv_msg[6U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__recv_msg_intermediate[7U] 
        = vlTOPp->recv_msg[7U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_in
        [3U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_in
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_in
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_in
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_out
        [3U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_out
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_out
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_out
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__recv_msg_imag[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__recv_msg_intermediate
        [3U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__recv_msg_imag[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__recv_msg_intermediate
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__recv_msg_imag[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__recv_msg_intermediate
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__recv_msg_imag[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__recv_msg_intermediate
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__recv_msg_real[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__recv_msg_intermediate
        [7U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__recv_msg_real[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__recv_msg_intermediate
        [6U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__recv_msg_real[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__recv_msg_intermediate
        [5U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__recv_msg_real[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__recv_msg_intermediate
        [4U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [3U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [3U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_imaginary[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__recv_msg_imag
        [3U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_imaginary[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__recv_msg_imag
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_imaginary[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__recv_msg_imag
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_imaginary[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__recv_msg_imag
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__recv_msg_real
        [3U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__recv_msg_real
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__recv_msg_real
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__recv_msg_real
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_interior_in[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [3U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_interior_in[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_interior_in[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_interior_in[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_interior_out[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [3U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_interior_out[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_interior_out[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_interior_out[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_imaginary[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_imaginary
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_imaginary[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_imaginary
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_imaginary[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_imaginary
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_imaginary[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_imaginary
        [3U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [3U];
    if ((4U & (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_interior_out
                        [0U] & vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_interior_out
                        [1U]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_interior_in
                     [0U] & vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_interior_in
                     [1U])) {
                    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_interior_out
                        [2U] & vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_interior_out
                        [3U]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_interior_in
                     [2U] & vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_interior_in
                     [3U])) {
                    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_in_imaginary[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_imaginary
        [3U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_in_imaginary[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_imaginary
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_in_imaginary[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_imaginary
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_in_imaginary[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_imaginary
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_in_real[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [3U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_in_real[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_in_real[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_in_real[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [0U];
}

void VCombinationalFFT_stage::_eval(VCombinationalFFT_stage__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCombinationalFFT_stage::_eval\n"); );
    VCombinationalFFT_stage* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData VCombinationalFFT_stage::_change_request(VCombinationalFFT_stage__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCombinationalFFT_stage::_change_request\n"); );
    VCombinationalFFT_stage* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VCombinationalFFT_stage::_change_request_1(VCombinationalFFT_stage__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCombinationalFFT_stage::_change_request_1\n"); );
    VCombinationalFFT_stage* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
         | (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle));
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT_stage.v.fft_stage.genblk1[0].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT_stage.v.fft_stage.genblk1[1].bfu_in.mul.control.post_idle\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    return __req;
}

#ifdef VL_DEBUG
void VCombinationalFFT_stage::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCombinationalFFT_stage::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((recv_val & 0xfeU))) {
        Verilated::overWidthError("recv_val");}
    if (VL_UNLIKELY((send_rdy & 0xfeU))) {
        Verilated::overWidthError("send_rdy");}
}
#endif  // VL_DEBUG
