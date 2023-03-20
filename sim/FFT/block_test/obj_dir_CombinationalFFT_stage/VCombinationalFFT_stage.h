// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCOMBINATIONALFFT_STAGE_H_
#define _VCOMBINATIONALFFT_STAGE_H_  // guard

#include "verilated.h"

//==========

class VCombinationalFFT_stage__Syms;

//----------

VL_MODULE(VCombinationalFFT_stage) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(recv_rdy,0,0);
    VL_IN8(recv_val,0,0);
    VL_IN8(send_rdy,0,0);
    VL_OUT8(send_val,0,0);
    VL_INW(recv_msg,255,0,8);
    VL_OUTW(send_msg,255,0,8);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*3:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__imm;
        CData/*3:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__imm2;
        CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy;
        CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val;
        CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__in_wait;
        CData/*1:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage;
        CData/*2:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state;
        CData/*2:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state;
        CData/*2:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
        CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__do_carry;
        CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__do_add;
        CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__in_wait;
        CData/*1:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state;
        CData/*1:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__next_state;
        CData/*4:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__counter;
        CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__counter_reset;
        CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy;
        CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val;
        CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__in_wait;
        CData/*1:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage;
        CData/*2:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state;
        CData/*2:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state;
        CData/*2:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
        CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__do_carry;
        CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__do_add;
        CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__in_wait;
        CData/*1:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__state;
        CData/*1:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__next_state;
        CData/*4:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__counter;
        CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__control__DOT__counter_reset;
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__tr;
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__tc;
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__mul_a;
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ar__DOT__regout;
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_br__DOT__regout;
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ac__DOT__regout;
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_bc__DOT__regout;
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_arac__DOT__regout;
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__b_reg__DOT__regout;
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__ac_reg__DOT__regout;
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__ar_reg__DOT__regout;
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__tr;
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__tc;
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__mul_a;
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ar__DOT__regout;
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_br__DOT__regout;
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_ac__DOT__regout;
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_bc__DOT__regout;
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__reg_c_arac__DOT__regout;
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__b_reg__DOT__regout;
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__ac_reg__DOT__regout;
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__ar_reg__DOT__regout;
        QData/*47:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__acc_in;
        QData/*47:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_in;
        QData/*63:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__carry_tmp;
        QData/*47:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__acc_reg__DOT__regout;
        QData/*47:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_const_reg__DOT__regout;
        QData/*47:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_reg__DOT__regout;
        QData/*47:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__acc_in;
        QData/*47:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_in;
        QData/*63:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__carry_tmp;
        QData/*47:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__acc_reg__DOT__regout;
        QData/*47:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_const_reg__DOT__regout;
        QData/*47:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT__a_reg__DOT__regout;
    };
    struct {
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__recv_msg_intermediate[8];
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__send_msg_intermediate[8];
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__sine_wave_out[4];
        CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_in[4];
        CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_in[4];
        CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_out[4];
        CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_out[4];
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_in_real[4];
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_out_real[4];
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_in_imaginary[4];
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__butterfly_out_imaginary[4];
        CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_interior_in[4];
        CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_interior_in[4];
        CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_interior_out[4];
        CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_interior_out[4];
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__twiddle_real[2];
        IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__twiddle_imaginary[2];
        CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__val_interior_mini[2];
        CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__rdy_interior_mini[2];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__send_val;
    CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__recv_rdy;
    CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__send_val;
    CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__recv_rdy;
    CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT____Vcellinp__add_sel__sel;
    CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT____Vcellinp__add_sel__sel;
    CData/*2:0*/ __Vtableidx1;
    CData/*2:0*/ __Vtableidx2;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*2:0*/ __Vchglast__TOP__CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    CData/*2:0*/ __Vchglast__TOP__CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT____Vcellout__b_sel__out;
    IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT__datapath__DOT____Vcellout__b_sel__out;
    QData/*47:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT____Vcellinp__datapath__a;
    QData/*47:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__datapath__DOT__multiplier__DOT____Vcellinp__datapath__a;
    IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__sine_wave_out[4];
    IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT____Vcellout__fft_stage__send_msg_imag[4];
    IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT____Vcellout__fft_stage__send_msg_real[4];
    IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__recv_msg_imag[4];
    IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT____Vcellinp__fft_stage__recv_msg_real[4];
    IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT____Vcellout__genblk3__DOT__SineWave__sine_wave_out[4];
    CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__send_rdy[4];
    CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[4];
    IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_imaginary[4];
    IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[4];
    CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_in_1__recv_rdy[4];
    CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[4];
    IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_imaginary[4];
    IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[4];
    CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[4];
    CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__send_val[4];
    IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__send_imaginary[4];
    IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__send_real[4];
    CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[4];
    CData/*0:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__recv_val[4];
    IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__recv_imaginary[4];
    IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__xbar_out_1__recv_real[4];
    IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__twiddle_generator__twiddle_imaginary[2];
    IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__twiddle_generator__twiddle_real[2];
    IData/*31:0*/ CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellinp__twiddle_generator__sine_wave_in[4];
    static CData/*0:0*/ __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__in_wait[8];
    static CData/*1:0*/ __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage[8];
    static CData/*0:0*/ __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__recv_rdy[8];
    static CData/*0:0*/ __Vtable1_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__bfu_in__send_val[8];
    static CData/*0:0*/ __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__in_wait[8];
    static CData/*1:0*/ __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_stage[8];
    static CData/*0:0*/ __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__recv_rdy[8];
    static CData/*0:0*/ __Vtable2_CombinationalFFT_stage__DOT__v__DOT__fft_stage__DOT____Vcellout__genblk1__BRA__1__KET____DOT__bfu_in__send_val[8];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VCombinationalFFT_stage__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCombinationalFFT_stage);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VCombinationalFFT_stage(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VCombinationalFFT_stage();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VCombinationalFFT_stage__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VCombinationalFFT_stage__Syms* symsp, bool first);
  private:
    static QData _change_request(VCombinationalFFT_stage__Syms* __restrict vlSymsp);
    static QData _change_request_1(VCombinationalFFT_stage__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(VCombinationalFFT_stage__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VCombinationalFFT_stage__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VCombinationalFFT_stage__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VCombinationalFFT_stage__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(VCombinationalFFT_stage__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(VCombinationalFFT_stage__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
