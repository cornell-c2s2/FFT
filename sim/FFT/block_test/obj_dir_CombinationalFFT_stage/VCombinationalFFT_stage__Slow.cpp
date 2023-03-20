// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCombinationalFFT_stage.h for the primary calling header

#include "VCombinationalFFT_stage.h"
#include "VCombinationalFFT_stage__Syms.h"

//==========
CData/*0:0*/ VCombinationalFFT_stage::__Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__in_wait[8];
CData/*1:0*/ VCombinationalFFT_stage::__Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage[8];
CData/*0:0*/ VCombinationalFFT_stage::__Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__recv_rdy[8];
CData/*0:0*/ VCombinationalFFT_stage::__Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__send_val[8];
CData/*0:0*/ VCombinationalFFT_stage::__Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__in_wait[8];
CData/*1:0*/ VCombinationalFFT_stage::__Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage[8];
CData/*0:0*/ VCombinationalFFT_stage::__Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__recv_rdy[8];
CData/*0:0*/ VCombinationalFFT_stage::__Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__send_val[8];

VL_CTOR_IMP(VCombinationalFFT_stage) {
    VCombinationalFFT_stage__Syms* __restrict vlSymsp = __VlSymsp = new VCombinationalFFT_stage__Syms(this, name());
    VCombinationalFFT_stage* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VCombinationalFFT_stage::__Vconfigure(VCombinationalFFT_stage__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VCombinationalFFT_stage::~VCombinationalFFT_stage() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VCombinationalFFT_stage::_settle__TOP__1(VCombinationalFFT_stage__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCombinationalFFT_stage::_settle__TOP__1\n"); );
    VCombinationalFFT_stage* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__twiddle_generator__twiddle_real[0U] = 0x10000U;
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__twiddle_generator__twiddle_imaginary[0U] = 0U;
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellout__genblk3__DOT__SineWave__sine_wave_out[0U] = 0U;
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellout__genblk3__DOT__SineWave__sine_wave_out[1U] = 0x10000U;
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellout__genblk3__DOT__SineWave__sine_wave_out[2U] = 0U;
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellout__genblk3__DOT__SineWave__sine_wave_out[3U] = 0xffff0000U;
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
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__carry_tmp 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (IData)(
                                                             (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_const_reg__DOT__regout 
                                                              >> 0x2fU)))))))) 
            << 0x30U) | vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_const_reg__DOT__regout);
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__carry_tmp 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (IData)(
                                                             (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_const_reg__DOT__regout 
                                                              >> 0x2fU)))))))) 
            << 0x30U) | vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_const_reg__DOT__regout);
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
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__tr 
        = (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ar__DOT__regout 
           - vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ac__DOT__regout);
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__tr 
        = (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ar__DOT__regout 
           - vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ac__DOT__regout);
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__tc 
        = ((vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_arac__DOT__regout 
            - vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ar__DOT__regout) 
           - vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ac__DOT__regout);
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__tc 
        = ((vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_arac__DOT__regout 
            - vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ar__DOT__regout) 
           - vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ac__DOT__regout);
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
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__sine_wave_out[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellout__genblk3__DOT__SineWave__sine_wave_out
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__sine_wave_out[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellout__genblk3__DOT__SineWave__sine_wave_out
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__sine_wave_out[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellout__genblk3__DOT__SineWave__sine_wave_out
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__sine_wave_out[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellout__genblk3__DOT__SineWave__sine_wave_out
        [3U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__sine_wave_out[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellout__genblk3__DOT__SineWave__sine_wave_out
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__sine_wave_out[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellout__genblk3__DOT__SineWave__sine_wave_out
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__sine_wave_out[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellout__genblk3__DOT__SineWave__sine_wave_out
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__sine_wave_out[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellout__genblk3__DOT__SineWave__sine_wave_out
        [3U];
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
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__mul_a 
        = ((0U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage))
            ? (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ar__DOT__regout 
               + vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ac__DOT__regout)
            : ((1U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage))
                ? vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ar__DOT__regout
                : ((2U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage))
                    ? vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ac__DOT__regout
                    : 0U)));
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__next_state 
        = ((0U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))
            ? ((3U != (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage))
                ? 1U : 0U) : ((1U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))
                               ? ((0x1fU == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__counter))
                                   ? 2U : 1U) : 0U));
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_interior_mini[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__recv_rdy;
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_interior_mini[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__send_val;
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__mul_a 
        = ((0U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage))
            ? (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ar__DOT__regout 
               + vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ac__DOT__regout)
            : ((1U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage))
                ? vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ar__DOT__regout
                : ((2U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage))
                    ? vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ac__DOT__regout
                    : 0U)));
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__next_state 
        = ((0U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))
            ? ((3U != (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage))
                ? 1U : 0U) : ((1U == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state))
                               ? ((0x1fU == (IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__counter))
                                   ? 2U : 1U) : 0U));
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_interior_mini[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__recv_rdy;
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_interior_mini[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__send_val;
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_out_real[1U] 
        = (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__ar_reg__DOT__regout 
           - vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__tr);
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_out_real[0U] 
        = (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__ar_reg__DOT__regout 
           + vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__tr);
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_out_real[3U] 
        = (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__ar_reg__DOT__regout 
           - vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__tr);
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_out_real[2U] 
        = (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__ar_reg__DOT__regout 
           + vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__tr);
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_out_imaginary[1U] 
        = (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__ac_reg__DOT__regout 
           - vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__tc);
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_out_imaginary[0U] 
        = (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__ac_reg__DOT__regout 
           + vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__tc);
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_out_imaginary[3U] 
        = (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__ac_reg__DOT__regout 
           - vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__tc);
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_out_imaginary[2U] 
        = (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__ac_reg__DOT__regout 
           + vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__tc);
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
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT____Vcellinp__add_sel__sel 
        = ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__do_add) 
           & (IData)((QData)((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__b_reg__DOT__regout))));
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT____Vcellinp__add_sel__sel 
        = ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__do_add) 
           & (IData)((QData)((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__b_reg__DOT__regout))));
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__sine_wave_out[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__sine_wave_out
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__sine_wave_out[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__sine_wave_out
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__sine_wave_out[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__sine_wave_out
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__sine_wave_out[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__sine_wave_out
        [3U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__sine_wave_out[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__sine_wave_out
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__sine_wave_out[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__sine_wave_out
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__sine_wave_out[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__sine_wave_out
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__sine_wave_out[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__sine_wave_out
        [3U];
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
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__mul_a 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__mul_a)));
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__mul_a 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__mul_a)));
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
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__twiddle_generator__sine_wave_in[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__sine_wave_out
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__twiddle_generator__sine_wave_in[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__sine_wave_out
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__twiddle_generator__sine_wave_in[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__sine_wave_out
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__twiddle_generator__sine_wave_in[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__sine_wave_out
        [3U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__twiddle_generator__sine_wave_in[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__sine_wave_out
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__twiddle_generator__sine_wave_in[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__sine_wave_out
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__twiddle_generator__sine_wave_in[2U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__sine_wave_out
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__twiddle_generator__sine_wave_in[3U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__sine_wave_out
        [3U];
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
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__in_wait)
                                 ? ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__in_wait)
                                     ? vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__in_wait)
                                 ? ((IData)(vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__in_wait)
                                     ? vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_reg__DOT__regout 
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
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__twiddle_generator__twiddle_real[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__twiddle_generator__sine_wave_in
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__twiddle_generator__twiddle_imaginary[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__twiddle_generator__sine_wave_in
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__twiddle_generator__twiddle_real[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__twiddle_generator__sine_wave_in
        [2U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__twiddle_generator__twiddle_imaginary[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__twiddle_generator__sine_wave_in
        [1U];
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
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__twiddle_real[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__twiddle_generator__twiddle_real
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__twiddle_real[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__twiddle_generator__twiddle_real
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__twiddle_real[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__twiddle_generator__twiddle_real
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__twiddle_real[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__twiddle_generator__twiddle_real
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__twiddle_imaginary[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__twiddle_generator__twiddle_imaginary
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__twiddle_imaginary[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__twiddle_generator__twiddle_imaginary
        [0U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__twiddle_imaginary[1U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__twiddle_generator__twiddle_imaginary
        [1U];
    vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__twiddle_imaginary[0U] 
        = vlTOPp->CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__twiddle_generator__twiddle_imaginary
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

void VCombinationalFFT_stage::_eval_initial(VCombinationalFFT_stage__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCombinationalFFT_stage::_eval_initial\n"); );
    VCombinationalFFT_stage* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VCombinationalFFT_stage::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCombinationalFFT_stage::final\n"); );
    // Variables
    VCombinationalFFT_stage__Syms* __restrict vlSymsp = this->__VlSymsp;
    VCombinationalFFT_stage* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VCombinationalFFT_stage::_eval_settle(VCombinationalFFT_stage__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCombinationalFFT_stage::_eval_settle\n"); );
    VCombinationalFFT_stage* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

void VCombinationalFFT_stage::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCombinationalFFT_stage::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, recv_msg);
    recv_rdy = VL_RAND_RESET_I(1);
    recv_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, send_msg);
    send_rdy = VL_RAND_RESET_I(1);
    send_val = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__recv_msg_intermediate[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__send_msg_intermediate[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__sine_wave_out[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__sine_wave_out[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT____Vcellout__fft_stage__send_msg_imag[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT____Vcellout__fft_stage__send_msg_real[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__recv_msg_imag[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__recv_msg_real[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT____Vcellout__genblk3__DOT__SineWave__sine_wave_out[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_in[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_in[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_out[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_out[__Vi0] = VL_RAND_RESET_I(1);
    }}
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__imm = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_in_real[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_out_real[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_in_imaginary[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_out_imaginary[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_interior_in[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_interior_in[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_interior_out[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_interior_out[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__twiddle_real[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__twiddle_imaginary[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_interior_mini[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_interior_mini[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__send_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_imaginary[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__recv_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_imaginary[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__send_val[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__send_imaginary[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__send_real[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__recv_val[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__recv_imaginary[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__recv_real[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__twiddle_generator__twiddle_imaginary[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__twiddle_generator__twiddle_real[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__twiddle_generator__sine_wave_in[__Vi0] = VL_RAND_RESET_I(32);
    }}
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__imm2 = VL_RAND_RESET_I(4);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__send_val = VL_RAND_RESET_I(1);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__recv_rdy = VL_RAND_RESET_I(1);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__send_val = VL_RAND_RESET_I(1);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__recv_rdy = VL_RAND_RESET_I(1);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__tr = VL_RAND_RESET_I(32);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__tc = VL_RAND_RESET_I(32);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy = VL_RAND_RESET_I(1);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val = VL_RAND_RESET_I(1);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__in_wait = VL_RAND_RESET_I(1);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage = VL_RAND_RESET_I(2);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state = VL_RAND_RESET_I(3);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = VL_RAND_RESET_I(3);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = VL_RAND_RESET_I(3);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__mul_a = VL_RAND_RESET_I(32);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ar__DOT__regout = VL_RAND_RESET_I(32);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_br__DOT__regout = VL_RAND_RESET_I(32);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ac__DOT__regout = VL_RAND_RESET_I(32);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_bc__DOT__regout = VL_RAND_RESET_I(32);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_arac__DOT__regout = VL_RAND_RESET_I(32);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__do_carry = VL_RAND_RESET_I(1);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__do_add = VL_RAND_RESET_I(1);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__in_wait = VL_RAND_RESET_I(1);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT____Vcellinp__datapath__a = VL_RAND_RESET_Q(48);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state = VL_RAND_RESET_I(2);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__next_state = VL_RAND_RESET_I(2);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__counter = VL_RAND_RESET_I(5);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__counter_reset = VL_RAND_RESET_I(1);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__acc_in = VL_RAND_RESET_Q(48);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_in = VL_RAND_RESET_Q(48);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT____Vcellout__b_sel__out = VL_RAND_RESET_I(32);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__carry_tmp = VL_RAND_RESET_Q(64);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT____Vcellinp__add_sel__sel = VL_RAND_RESET_I(1);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__acc_reg__DOT__regout = VL_RAND_RESET_Q(48);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_const_reg__DOT__regout = VL_RAND_RESET_Q(48);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_reg__DOT__regout = VL_RAND_RESET_Q(48);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__b_reg__DOT__regout = VL_RAND_RESET_I(32);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__ac_reg__DOT__regout = VL_RAND_RESET_I(32);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__ar_reg__DOT__regout = VL_RAND_RESET_I(32);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__tr = VL_RAND_RESET_I(32);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__tc = VL_RAND_RESET_I(32);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy = VL_RAND_RESET_I(1);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val = VL_RAND_RESET_I(1);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__in_wait = VL_RAND_RESET_I(1);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage = VL_RAND_RESET_I(2);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state = VL_RAND_RESET_I(3);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = VL_RAND_RESET_I(3);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = VL_RAND_RESET_I(3);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__mul_a = VL_RAND_RESET_I(32);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ar__DOT__regout = VL_RAND_RESET_I(32);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_br__DOT__regout = VL_RAND_RESET_I(32);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ac__DOT__regout = VL_RAND_RESET_I(32);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_bc__DOT__regout = VL_RAND_RESET_I(32);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_arac__DOT__regout = VL_RAND_RESET_I(32);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__do_carry = VL_RAND_RESET_I(1);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__do_add = VL_RAND_RESET_I(1);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__in_wait = VL_RAND_RESET_I(1);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT____Vcellinp__datapath__a = VL_RAND_RESET_Q(48);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state = VL_RAND_RESET_I(2);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__next_state = VL_RAND_RESET_I(2);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__counter = VL_RAND_RESET_I(5);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__counter_reset = VL_RAND_RESET_I(1);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__acc_in = VL_RAND_RESET_Q(48);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_in = VL_RAND_RESET_Q(48);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT____Vcellout__b_sel__out = VL_RAND_RESET_I(32);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__carry_tmp = VL_RAND_RESET_Q(64);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT____Vcellinp__add_sel__sel = VL_RAND_RESET_I(1);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__acc_reg__DOT__regout = VL_RAND_RESET_Q(48);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_const_reg__DOT__regout = VL_RAND_RESET_Q(48);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_reg__DOT__regout = VL_RAND_RESET_Q(48);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__b_reg__DOT__regout = VL_RAND_RESET_I(32);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__ac_reg__DOT__regout = VL_RAND_RESET_I(32);
    CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__ar_reg__DOT__regout = VL_RAND_RESET_I(32);
    __Vtableidx1 = 0;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__in_wait[0] = 1U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__in_wait[1] = 0U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__in_wait[2] = 0U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__in_wait[3] = 0U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__in_wait[4] = 0U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__in_wait[5] = 0U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__in_wait[6] = 0U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__in_wait[7] = 0U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage[0] = 3U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage[1] = 3U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage[2] = 1U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage[3] = 2U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage[4] = 0U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage[5] = 3U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage[6] = 3U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage[7] = 3U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__recv_rdy[0] = 1U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__recv_rdy[1] = 0U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__recv_rdy[2] = 0U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__recv_rdy[3] = 0U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__recv_rdy[4] = 0U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__recv_rdy[5] = 0U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__recv_rdy[6] = 0U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__recv_rdy[7] = 0U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__send_val[0] = 0U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__send_val[1] = 1U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__send_val[2] = 0U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__send_val[3] = 0U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__send_val[4] = 0U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__send_val[5] = 0U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__send_val[6] = 0U;
    __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__send_val[7] = 0U;
    __Vtableidx2 = 0;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__in_wait[0] = 1U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__in_wait[1] = 0U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__in_wait[2] = 0U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__in_wait[3] = 0U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__in_wait[4] = 0U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__in_wait[5] = 0U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__in_wait[6] = 0U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__in_wait[7] = 0U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage[0] = 3U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage[1] = 3U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage[2] = 1U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage[3] = 2U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage[4] = 0U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage[5] = 3U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage[6] = 3U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage[7] = 3U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__recv_rdy[0] = 1U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__recv_rdy[1] = 0U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__recv_rdy[2] = 0U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__recv_rdy[3] = 0U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__recv_rdy[4] = 0U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__recv_rdy[5] = 0U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__recv_rdy[6] = 0U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__recv_rdy[7] = 0U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__send_val[0] = 0U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__send_val[1] = 1U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__send_val[2] = 0U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__send_val[3] = 0U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__send_val[4] = 0U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__send_val[5] = 0U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__send_val[6] = 0U;
    __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__send_val[7] = 0U;
    __Vchglast__TOP__CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = VL_RAND_RESET_I(3);
    __Vchglast__TOP__CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = VL_RAND_RESET_I(3);
}
