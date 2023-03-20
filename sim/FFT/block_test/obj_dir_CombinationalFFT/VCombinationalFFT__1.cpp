// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCombinationalFFT.h for the primary calling header

#include "VCombinationalFFT.h"
#include "VCombinationalFFT__Syms.h"

VL_INLINE_OPT void VCombinationalFFT::_combo__TOP__5(VCombinationalFFT__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCombinationalFFT::_combo__TOP__5\n"); );
    VCombinationalFFT* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in[0U] 
        = vlTOPp->recv_val;
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in[4U] 
        = vlTOPp->send_rdy;
    vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate[0U] 
        = vlTOPp->recv_msg[0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate[1U] 
        = vlTOPp->recv_msg[1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate[2U] 
        = vlTOPp->recv_msg[2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate[3U] 
        = vlTOPp->recv_msg[3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate[4U] 
        = vlTOPp->recv_msg[4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate[5U] 
        = vlTOPp->recv_msg[5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate[6U] 
        = vlTOPp->recv_msg[6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate[7U] 
        = vlTOPp->recv_msg[7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate[8U] 
        = vlTOPp->recv_msg[8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate[9U] 
        = vlTOPp->recv_msg[9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate[0xaU] 
        = vlTOPp->recv_msg[0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate[0xbU] 
        = vlTOPp->recv_msg[0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate[0xcU] 
        = vlTOPp->recv_msg[0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate[0xdU] 
        = vlTOPp->recv_msg[0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate[0xeU] 
        = vlTOPp->recv_msg[0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate[0xfU] 
        = vlTOPp->recv_msg[0xfU];
    vlTOPp->send_val = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
        [3U];
    vlTOPp->recv_rdy = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_out
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg[0U][0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg[0U][8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg[0U][4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg[0U][0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg[0U][2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg[0U][0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg[0U][6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg[0U][0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg[0U][1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg[0U][9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg[0U][5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg[0U][0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg[0U][3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg[0U][0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg[0U][7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg[0U][0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_out_1__send_rdy
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [4U][0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [4U][1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [4U][2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [4U][3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [4U][4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [4U][5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [4U][6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [4U][7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [4U][8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [4U][9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [4U][0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [4U][0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [4U][0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [4U][0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [4U][0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [4U][0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [0U][0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [0U][0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [0U][0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [0U][0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [0U][0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [0U][0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [0U][9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [0U][8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [0U][7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [0U][6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [0U][5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [0U][4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [0U][3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [0U][2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [0U][1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [0U][0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [1U][0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [1U][0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [1U][0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [1U][0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [1U][0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [1U][0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [1U][9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [1U][8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [1U][7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [1U][6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [1U][5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [1U][4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [1U][3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [1U][2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [1U][1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [1U][0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [2U][0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [2U][0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [2U][0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [2U][0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [2U][0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [2U][0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [2U][9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [2U][8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [2U][7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [2U][6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [2U][5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [2U][4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [2U][3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [2U][2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [2U][1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [2U][0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [3U][0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [3U][0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [3U][0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [3U][0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [3U][0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [3U][0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [3U][9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [3U][8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [3U][7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [3U][6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [3U][5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [3U][4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [3U][3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [3U][2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [3U][1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
        [3U][0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_val
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_out_1__recv_rdy
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__0__KET____DOT__fft_stage__recv_msg_real
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__1__KET____DOT__fft_stage__recv_msg_real
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__2__KET____DOT__fft_stage__recv_msg_real
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk10__BRA__3__KET____DOT__fft_stage__recv_msg_real
        [0U];
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [0U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [1U]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in
                     [0U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in
                     [1U])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [2U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [3U]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in
                     [2U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in
                     [3U])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [4U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [5U]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in
                     [4U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in
                     [5U])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [6U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [7U]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in
                     [6U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in
                     [7U])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [8U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [9U]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in
                     [8U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in
                     [9U])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [0xaU] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [0xbU]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in
                     [0xaU] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in
                     [0xbU])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [0xcU] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [0xdU]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in
                     [0xcU] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in
                     [0xdU])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [0xeU] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [0xfU]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in
                     [0xeU] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_interior_in
                     [0xfU])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [0U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [1U]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in
                     [0U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in
                     [1U])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [2U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [3U]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in
                     [2U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in
                     [3U])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [4U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [5U]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in
                     [4U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in
                     [5U])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [6U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [7U]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in
                     [6U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in
                     [7U])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [8U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [9U]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in
                     [8U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in
                     [9U])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [0xaU] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [0xbU]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in
                     [0xaU] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in
                     [0xbU])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [0xcU] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [0xdU]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in
                     [0xcU] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in
                     [0xdU])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [0xeU] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [0xfU]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in
                     [0xeU] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_interior_in
                     [0xfU])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [0U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [1U]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in
                     [0U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in
                     [1U])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [2U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [3U]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in
                     [2U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in
                     [3U])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [4U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [5U]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in
                     [4U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in
                     [5U])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [6U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [7U]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in
                     [6U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in
                     [7U])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [8U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [9U]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in
                     [8U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in
                     [9U])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [0xaU] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [0xbU]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in
                     [0xaU] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in
                     [0xbU])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [0xcU] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [0xdU]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in
                     [0xcU] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in
                     [0xdU])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [0xeU] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [0xfU]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in
                     [0xeU] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_interior_in
                     [0xfU])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [0U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [1U]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in
                     [0U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in
                     [1U])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [2U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [3U]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in
                     [2U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in
                     [3U])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [4U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [5U]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in
                     [4U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in
                     [5U])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [6U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [7U]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in
                     [6U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in
                     [7U])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [8U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [9U]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in
                     [8U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in
                     [9U])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [0xaU] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [0xbU]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in
                     [0xaU] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in
                     [0xbU])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [0xcU] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [0xdU]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in
                     [0xcU] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in
                     [0xdU])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__mul_recv_rdy)
                        ? (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
                        : 5U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 2U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val)
                        ? 1U : 3U);
            } else {
                if (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__mul_send_val) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 3U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 3U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 2U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__state))) {
                vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state 
                    = ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [0xeU] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_interior_out
                        [0xfU]) ? 0U : 1U);
            } else {
                if ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in
                     [0xeU] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_interior_in
                     [0xfU])) {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 4U;
                } else {
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__next_state = 0U;
                    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle = 4U;
                }
            }
        }
    }
    vlTOPp->send_msg[0U] = vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate
        [0U];
    vlTOPp->send_msg[1U] = vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate
        [1U];
    vlTOPp->send_msg[2U] = vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate
        [2U];
    vlTOPp->send_msg[3U] = vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate
        [3U];
    vlTOPp->send_msg[4U] = vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate
        [4U];
    vlTOPp->send_msg[5U] = vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate
        [5U];
    vlTOPp->send_msg[6U] = vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate
        [6U];
    vlTOPp->send_msg[7U] = vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate
        [7U];
    vlTOPp->send_msg[8U] = vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate
        [8U];
    vlTOPp->send_msg[9U] = vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate
        [9U];
    vlTOPp->send_msg[0xaU] = vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate
        [0xaU];
    vlTOPp->send_msg[0xbU] = vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate
        [0xbU];
    vlTOPp->send_msg[0xcU] = vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate
        [0xcU];
    vlTOPp->send_msg[0xdU] = vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate
        [0xdU];
    vlTOPp->send_msg[0xeU] = vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate
        [0xeU];
    vlTOPp->send_msg[0xfU] = vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_real
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__butterfly_in_real[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__butterfly_in_real[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__butterfly_in_real[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__butterfly_in_real[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__butterfly_in_real[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__butterfly_in_real[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__butterfly_in_real[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__butterfly_in_real[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__butterfly_in_real[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__butterfly_in_real[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__butterfly_in_real[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__butterfly_in_real[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__butterfly_in_real[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__butterfly_in_real[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__butterfly_in_real[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__butterfly_in_real[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__butterfly_in_real[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__butterfly_in_real[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__butterfly_in_real[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__butterfly_in_real[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__butterfly_in_real[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__butterfly_in_real[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__butterfly_in_real[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__butterfly_in_real[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__butterfly_in_real[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__butterfly_in_real[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__butterfly_in_real[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__butterfly_in_real[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__butterfly_in_real[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__butterfly_in_real[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__butterfly_in_real[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__butterfly_in_real[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [0U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real[0xfU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [0xfU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real[0xeU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [0xeU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real[0xdU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [0xdU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real[0xcU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [0xcU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real[0xbU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [0xbU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real[0xaU] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [0xaU];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real[9U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [9U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real[8U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [8U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real[7U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [7U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real[6U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [6U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real[5U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [5U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real[4U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [4U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real[3U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [3U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real[2U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [2U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real[1U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [1U];
    vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real[0U] 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
        [0U];
}

void VCombinationalFFT::_eval(VCombinationalFFT__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCombinationalFFT::_eval\n"); );
    VCombinationalFFT* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData VCombinationalFFT::_change_request(VCombinationalFFT__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCombinationalFFT::_change_request\n"); );
    VCombinationalFFT* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VCombinationalFFT::_change_request_1(VCombinationalFFT__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCombinationalFFT::_change_request_1\n"); );
    VCombinationalFFT* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
         | (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
         | (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
         | (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
         | (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
         | (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
         | (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
         | (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
         | (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
         | (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
        || (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
         | (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
         | (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
         | (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
         | (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
         | (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
         | (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
         | (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
         | (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
         | (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
        || (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
         | (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
         | (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
         | (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
         | (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
         | (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
         | (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
         | (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
         | (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
         | (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
        || (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle)
         | (vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle));
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[0].fft_stage.genblk1[0].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[0].fft_stage.genblk1[1].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[0].fft_stage.genblk1[2].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[0].fft_stage.genblk1[3].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[0].fft_stage.genblk1[4].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[0].fft_stage.genblk1[5].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[0].fft_stage.genblk1[6].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[0].fft_stage.genblk1[7].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[1].fft_stage.genblk1[0].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[1].fft_stage.genblk1[1].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[1].fft_stage.genblk1[2].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[1].fft_stage.genblk1[3].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[1].fft_stage.genblk1[4].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[1].fft_stage.genblk1[5].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[1].fft_stage.genblk1[6].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[1].fft_stage.genblk1[7].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[2].fft_stage.genblk1[0].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[2].fft_stage.genblk1[1].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[2].fft_stage.genblk1[2].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[2].fft_stage.genblk1[3].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[2].fft_stage.genblk1[4].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[2].fft_stage.genblk1[5].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[2].fft_stage.genblk1[6].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[2].fft_stage.genblk1[7].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[3].fft_stage.genblk1[0].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[3].fft_stage.genblk1[1].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[3].fft_stage.genblk1[2].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[3].fft_stage.genblk1[3].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[3].fft_stage.genblk1[4].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[3].fft_stage.genblk1[5].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[3].fft_stage.genblk1[6].bfu_in.mul.control.post_idle\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle ^ vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle))) VL_DBG_MSGF("        CHANGE: ../../../fixedpt-iterative-complex-multiplier/sim/cmultiplier/FpcmultVRTL.v:86: CombinationalFFT.v.comb_fft.genblk10[3].fft_stage.genblk1[7].bfu_in.mul.control.post_idle\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__4__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__5__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__6__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    vlTOPp->__Vchglast__TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle 
        = vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk1__BRA__7__KET____DOT__bfu_in__DOT__mul__DOT__control__DOT__post_idle;
    return __req;
}

#ifdef VL_DEBUG
void VCombinationalFFT::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCombinationalFFT::_eval_debug_assertions\n"); );
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
