// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCombinationalFFT__Syms.h"


//======================

void VCombinationalFFT::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VCombinationalFFT::traceInit, &VCombinationalFFT::traceFull, &VCombinationalFFT::traceChg, this);
}
void VCombinationalFFT::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VCombinationalFFT* t = (VCombinationalFFT*)userthis;
    VCombinationalFFT__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VCombinationalFFT::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCombinationalFFT* t = (VCombinationalFFT*)userthis;
    VCombinationalFFT__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VCombinationalFFT::traceInitThis(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VCombinationalFFT::traceFullThis(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCombinationalFFT::traceInitThis__1(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+13905,"clk", false,-1, 0,0);
        vcdp->declBus(c+13913,"reset", false,-1, 0,0);
        vcdp->declArray(c+13921,"recv_msg", false,-1, 255,0);
        vcdp->declBus(c+13985,"recv_rdy", false,-1, 0,0);
        vcdp->declBus(c+13993,"recv_val", false,-1, 0,0);
        vcdp->declArray(c+14001,"send_msg", false,-1, 255,0);
        vcdp->declBus(c+14065,"send_rdy", false,-1, 0,0);
        vcdp->declBus(c+14073,"send_val", false,-1, 0,0);
        vcdp->declBus(c+13905,"CombinationalFFT clk", false,-1, 0,0);
        vcdp->declBus(c+13913,"CombinationalFFT reset", false,-1, 0,0);
        vcdp->declArray(c+13921,"CombinationalFFT recv_msg", false,-1, 255,0);
        vcdp->declBus(c+13985,"CombinationalFFT recv_rdy", false,-1, 0,0);
        vcdp->declBus(c+13993,"CombinationalFFT recv_val", false,-1, 0,0);
        vcdp->declArray(c+14001,"CombinationalFFT send_msg", false,-1, 255,0);
        vcdp->declBus(c+14065,"CombinationalFFT send_rdy", false,-1, 0,0);
        vcdp->declBus(c+14073,"CombinationalFFT send_val", false,-1, 0,0);
        vcdp->declBus(c+14081,"CombinationalFFT v BIT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v DECIMAL_PT", false,-1, 31,0);
        vcdp->declBus(c+14097,"CombinationalFFT v N_SAMPLES", false,-1, 31,0);
        vcdp->declArray(c+13921,"CombinationalFFT v recv_msg", false,-1, 255,0);
        vcdp->declBit(c+13993,"CombinationalFFT v recv_val", false,-1);
        vcdp->declBit(c+13985,"CombinationalFFT v recv_rdy", false,-1);
        vcdp->declArray(c+14001,"CombinationalFFT v send_msg", false,-1, 255,0);
        vcdp->declBit(c+14073,"CombinationalFFT v send_val", false,-1);
        vcdp->declBit(c+14065,"CombinationalFFT v send_rdy", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v reset", false,-1);
        vcdp->declBit(c+13905,"CombinationalFFT v clk", false,-1);
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+5729+i*1,"CombinationalFFT v recv_msg_intermediate", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+5793+i*1,"CombinationalFFT v send_msg_intermediate", true,(i+0), 31,0);}}
        vcdp->declBus(c+14105,"CombinationalFFT v unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft BIT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft DECIMAL_PT", false,-1, 31,0);
        vcdp->declBus(c+14097,"CombinationalFFT v comb_fft N_SAMPLES", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+5857+i*1,"CombinationalFFT v comb_fft recv_msg", true,(i+0), 31,0);}}
        vcdp->declBit(c+13993,"CombinationalFFT v comb_fft recv_val", false,-1);
        vcdp->declBit(c+13985,"CombinationalFFT v comb_fft recv_rdy", false,-1);
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+5921+i*1,"CombinationalFFT v comb_fft send_msg", true,(i+0), 31,0);}}
        vcdp->declBit(c+14073,"CombinationalFFT v comb_fft send_val", false,-1);
        vcdp->declBit(c+14065,"CombinationalFFT v comb_fft send_rdy", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft reset", false,-1);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft clk", false,-1);
        vcdp->declBus(c+5089,"CombinationalFFT v comb_fft real_msg(0)(0)", false,-1, 31,0);
        vcdp->declBus(c+5097,"CombinationalFFT v comb_fft real_msg(0)(1)", false,-1, 31,0);
        vcdp->declBus(c+5105,"CombinationalFFT v comb_fft real_msg(0)(2)", false,-1, 31,0);
        vcdp->declBus(c+5113,"CombinationalFFT v comb_fft real_msg(0)(3)", false,-1, 31,0);
        vcdp->declBus(c+5121,"CombinationalFFT v comb_fft real_msg(0)(4)", false,-1, 31,0);
        vcdp->declBus(c+5129,"CombinationalFFT v comb_fft real_msg(0)(5)", false,-1, 31,0);
        vcdp->declBus(c+5137,"CombinationalFFT v comb_fft real_msg(0)(6)", false,-1, 31,0);
        vcdp->declBus(c+5145,"CombinationalFFT v comb_fft real_msg(0)(7)", false,-1, 31,0);
        vcdp->declBus(c+5153,"CombinationalFFT v comb_fft real_msg(1)(0)", false,-1, 31,0);
        vcdp->declBus(c+5161,"CombinationalFFT v comb_fft real_msg(1)(1)", false,-1, 31,0);
        vcdp->declBus(c+5169,"CombinationalFFT v comb_fft real_msg(1)(2)", false,-1, 31,0);
        vcdp->declBus(c+5177,"CombinationalFFT v comb_fft real_msg(1)(3)", false,-1, 31,0);
        vcdp->declBus(c+5185,"CombinationalFFT v comb_fft real_msg(1)(4)", false,-1, 31,0);
        vcdp->declBus(c+5193,"CombinationalFFT v comb_fft real_msg(1)(5)", false,-1, 31,0);
        vcdp->declBus(c+5201,"CombinationalFFT v comb_fft real_msg(1)(6)", false,-1, 31,0);
        vcdp->declBus(c+5209,"CombinationalFFT v comb_fft real_msg(1)(7)", false,-1, 31,0);
        vcdp->declBus(c+5217,"CombinationalFFT v comb_fft real_msg(2)(0)", false,-1, 31,0);
        vcdp->declBus(c+5225,"CombinationalFFT v comb_fft real_msg(2)(1)", false,-1, 31,0);
        vcdp->declBus(c+5233,"CombinationalFFT v comb_fft real_msg(2)(2)", false,-1, 31,0);
        vcdp->declBus(c+5241,"CombinationalFFT v comb_fft real_msg(2)(3)", false,-1, 31,0);
        vcdp->declBus(c+5249,"CombinationalFFT v comb_fft real_msg(2)(4)", false,-1, 31,0);
        vcdp->declBus(c+5257,"CombinationalFFT v comb_fft real_msg(2)(5)", false,-1, 31,0);
        vcdp->declBus(c+5265,"CombinationalFFT v comb_fft real_msg(2)(6)", false,-1, 31,0);
        vcdp->declBus(c+5273,"CombinationalFFT v comb_fft real_msg(2)(7)", false,-1, 31,0);
        vcdp->declBus(c+5281,"CombinationalFFT v comb_fft real_msg(3)(0)", false,-1, 31,0);
        vcdp->declBus(c+5289,"CombinationalFFT v comb_fft real_msg(3)(1)", false,-1, 31,0);
        vcdp->declBus(c+5297,"CombinationalFFT v comb_fft real_msg(3)(2)", false,-1, 31,0);
        vcdp->declBus(c+5305,"CombinationalFFT v comb_fft real_msg(3)(3)", false,-1, 31,0);
        vcdp->declBus(c+5313,"CombinationalFFT v comb_fft real_msg(3)(4)", false,-1, 31,0);
        vcdp->declBus(c+5321,"CombinationalFFT v comb_fft real_msg(3)(5)", false,-1, 31,0);
        vcdp->declBus(c+5329,"CombinationalFFT v comb_fft real_msg(3)(6)", false,-1, 31,0);
        vcdp->declBus(c+5337,"CombinationalFFT v comb_fft real_msg(3)(7)", false,-1, 31,0);
        vcdp->declBus(c+897,"CombinationalFFT v comb_fft complex_msg(0)(0)", false,-1, 31,0);
        vcdp->declBus(c+905,"CombinationalFFT v comb_fft complex_msg(0)(1)", false,-1, 31,0);
        vcdp->declBus(c+913,"CombinationalFFT v comb_fft complex_msg(0)(2)", false,-1, 31,0);
        vcdp->declBus(c+921,"CombinationalFFT v comb_fft complex_msg(0)(3)", false,-1, 31,0);
        vcdp->declBus(c+929,"CombinationalFFT v comb_fft complex_msg(0)(4)", false,-1, 31,0);
        vcdp->declBus(c+937,"CombinationalFFT v comb_fft complex_msg(0)(5)", false,-1, 31,0);
        vcdp->declBus(c+945,"CombinationalFFT v comb_fft complex_msg(0)(6)", false,-1, 31,0);
        vcdp->declBus(c+953,"CombinationalFFT v comb_fft complex_msg(0)(7)", false,-1, 31,0);
        vcdp->declBus(c+961,"CombinationalFFT v comb_fft complex_msg(1)(0)", false,-1, 31,0);
        vcdp->declBus(c+969,"CombinationalFFT v comb_fft complex_msg(1)(1)", false,-1, 31,0);
        vcdp->declBus(c+977,"CombinationalFFT v comb_fft complex_msg(1)(2)", false,-1, 31,0);
        vcdp->declBus(c+985,"CombinationalFFT v comb_fft complex_msg(1)(3)", false,-1, 31,0);
        vcdp->declBus(c+993,"CombinationalFFT v comb_fft complex_msg(1)(4)", false,-1, 31,0);
        vcdp->declBus(c+1001,"CombinationalFFT v comb_fft complex_msg(1)(5)", false,-1, 31,0);
        vcdp->declBus(c+1009,"CombinationalFFT v comb_fft complex_msg(1)(6)", false,-1, 31,0);
        vcdp->declBus(c+1017,"CombinationalFFT v comb_fft complex_msg(1)(7)", false,-1, 31,0);
        vcdp->declBus(c+1025,"CombinationalFFT v comb_fft complex_msg(2)(0)", false,-1, 31,0);
        vcdp->declBus(c+1033,"CombinationalFFT v comb_fft complex_msg(2)(1)", false,-1, 31,0);
        vcdp->declBus(c+1041,"CombinationalFFT v comb_fft complex_msg(2)(2)", false,-1, 31,0);
        vcdp->declBus(c+1049,"CombinationalFFT v comb_fft complex_msg(2)(3)", false,-1, 31,0);
        vcdp->declBus(c+1057,"CombinationalFFT v comb_fft complex_msg(2)(4)", false,-1, 31,0);
        vcdp->declBus(c+1065,"CombinationalFFT v comb_fft complex_msg(2)(5)", false,-1, 31,0);
        vcdp->declBus(c+1073,"CombinationalFFT v comb_fft complex_msg(2)(6)", false,-1, 31,0);
        vcdp->declBus(c+1081,"CombinationalFFT v comb_fft complex_msg(2)(7)", false,-1, 31,0);
        vcdp->declBus(c+1089,"CombinationalFFT v comb_fft complex_msg(3)(0)", false,-1, 31,0);
        vcdp->declBus(c+1097,"CombinationalFFT v comb_fft complex_msg(3)(1)", false,-1, 31,0);
        vcdp->declBus(c+1105,"CombinationalFFT v comb_fft complex_msg(3)(2)", false,-1, 31,0);
        vcdp->declBus(c+1113,"CombinationalFFT v comb_fft complex_msg(3)(3)", false,-1, 31,0);
        vcdp->declBus(c+1121,"CombinationalFFT v comb_fft complex_msg(3)(4)", false,-1, 31,0);
        vcdp->declBus(c+1129,"CombinationalFFT v comb_fft complex_msg(3)(5)", false,-1, 31,0);
        vcdp->declBus(c+1137,"CombinationalFFT v comb_fft complex_msg(3)(6)", false,-1, 31,0);
        vcdp->declBus(c+1145,"CombinationalFFT v comb_fft complex_msg(3)(7)", false,-1, 31,0);
        vcdp->declBit(c+5985,"CombinationalFFT v comb_fft val_in(0)(0)", false,-1);
        vcdp->declBit(c+5993,"CombinationalFFT v comb_fft val_in(0)(1)", false,-1);
        vcdp->declBit(c+6001,"CombinationalFFT v comb_fft val_in(0)(2)", false,-1);
        vcdp->declBit(c+6009,"CombinationalFFT v comb_fft val_in(0)(3)", false,-1);
        vcdp->declBit(c+6017,"CombinationalFFT v comb_fft val_in(0)(4)", false,-1);
        vcdp->declBit(c+6025,"CombinationalFFT v comb_fft val_in(0)(5)", false,-1);
        vcdp->declBit(c+6033,"CombinationalFFT v comb_fft val_in(0)(6)", false,-1);
        vcdp->declBit(c+6041,"CombinationalFFT v comb_fft val_in(0)(7)", false,-1);
        vcdp->declBit(c+6049,"CombinationalFFT v comb_fft val_in(1)(0)", false,-1);
        vcdp->declBit(c+6057,"CombinationalFFT v comb_fft val_in(1)(1)", false,-1);
        vcdp->declBit(c+6065,"CombinationalFFT v comb_fft val_in(1)(2)", false,-1);
        vcdp->declBit(c+6073,"CombinationalFFT v comb_fft val_in(1)(3)", false,-1);
        vcdp->declBit(c+6081,"CombinationalFFT v comb_fft val_in(1)(4)", false,-1);
        vcdp->declBit(c+6089,"CombinationalFFT v comb_fft val_in(1)(5)", false,-1);
        vcdp->declBit(c+6097,"CombinationalFFT v comb_fft val_in(1)(6)", false,-1);
        vcdp->declBit(c+6105,"CombinationalFFT v comb_fft val_in(1)(7)", false,-1);
        vcdp->declBit(c+6113,"CombinationalFFT v comb_fft val_in(2)(0)", false,-1);
        vcdp->declBit(c+6121,"CombinationalFFT v comb_fft val_in(2)(1)", false,-1);
        vcdp->declBit(c+6129,"CombinationalFFT v comb_fft val_in(2)(2)", false,-1);
        vcdp->declBit(c+6137,"CombinationalFFT v comb_fft val_in(2)(3)", false,-1);
        vcdp->declBit(c+6145,"CombinationalFFT v comb_fft val_in(2)(4)", false,-1);
        vcdp->declBit(c+6153,"CombinationalFFT v comb_fft val_in(2)(5)", false,-1);
        vcdp->declBit(c+6161,"CombinationalFFT v comb_fft val_in(2)(6)", false,-1);
        vcdp->declBit(c+6169,"CombinationalFFT v comb_fft val_in(2)(7)", false,-1);
        vcdp->declBit(c+6177,"CombinationalFFT v comb_fft val_in(3)(0)", false,-1);
        vcdp->declBit(c+6185,"CombinationalFFT v comb_fft val_in(3)(1)", false,-1);
        vcdp->declBit(c+6193,"CombinationalFFT v comb_fft val_in(3)(2)", false,-1);
        vcdp->declBit(c+6201,"CombinationalFFT v comb_fft val_in(3)(3)", false,-1);
        vcdp->declBit(c+6209,"CombinationalFFT v comb_fft val_in(3)(4)", false,-1);
        vcdp->declBit(c+6217,"CombinationalFFT v comb_fft val_in(3)(5)", false,-1);
        vcdp->declBit(c+6225,"CombinationalFFT v comb_fft val_in(3)(6)", false,-1);
        vcdp->declBit(c+6233,"CombinationalFFT v comb_fft val_in(3)(7)", false,-1);
        vcdp->declBit(c+6241,"CombinationalFFT v comb_fft rdy_in(0)(0)", false,-1);
        vcdp->declBit(c+6249,"CombinationalFFT v comb_fft rdy_in(0)(1)", false,-1);
        vcdp->declBit(c+6257,"CombinationalFFT v comb_fft rdy_in(0)(2)", false,-1);
        vcdp->declBit(c+6265,"CombinationalFFT v comb_fft rdy_in(0)(3)", false,-1);
        vcdp->declBit(c+6273,"CombinationalFFT v comb_fft rdy_in(0)(4)", false,-1);
        vcdp->declBit(c+6281,"CombinationalFFT v comb_fft rdy_in(0)(5)", false,-1);
        vcdp->declBit(c+6289,"CombinationalFFT v comb_fft rdy_in(0)(6)", false,-1);
        vcdp->declBit(c+6297,"CombinationalFFT v comb_fft rdy_in(0)(7)", false,-1);
        vcdp->declBit(c+6305,"CombinationalFFT v comb_fft rdy_in(1)(0)", false,-1);
        vcdp->declBit(c+6313,"CombinationalFFT v comb_fft rdy_in(1)(1)", false,-1);
        vcdp->declBit(c+6321,"CombinationalFFT v comb_fft rdy_in(1)(2)", false,-1);
        vcdp->declBit(c+6329,"CombinationalFFT v comb_fft rdy_in(1)(3)", false,-1);
        vcdp->declBit(c+6337,"CombinationalFFT v comb_fft rdy_in(1)(4)", false,-1);
        vcdp->declBit(c+6345,"CombinationalFFT v comb_fft rdy_in(1)(5)", false,-1);
        vcdp->declBit(c+6353,"CombinationalFFT v comb_fft rdy_in(1)(6)", false,-1);
        vcdp->declBit(c+6361,"CombinationalFFT v comb_fft rdy_in(1)(7)", false,-1);
        vcdp->declBit(c+6369,"CombinationalFFT v comb_fft rdy_in(2)(0)", false,-1);
        vcdp->declBit(c+6377,"CombinationalFFT v comb_fft rdy_in(2)(1)", false,-1);
        vcdp->declBit(c+6385,"CombinationalFFT v comb_fft rdy_in(2)(2)", false,-1);
        vcdp->declBit(c+6393,"CombinationalFFT v comb_fft rdy_in(2)(3)", false,-1);
        vcdp->declBit(c+6401,"CombinationalFFT v comb_fft rdy_in(2)(4)", false,-1);
        vcdp->declBit(c+6409,"CombinationalFFT v comb_fft rdy_in(2)(5)", false,-1);
        vcdp->declBit(c+6417,"CombinationalFFT v comb_fft rdy_in(2)(6)", false,-1);
        vcdp->declBit(c+6425,"CombinationalFFT v comb_fft rdy_in(2)(7)", false,-1);
        vcdp->declBit(c+6433,"CombinationalFFT v comb_fft rdy_in(3)(0)", false,-1);
        vcdp->declBit(c+6441,"CombinationalFFT v comb_fft rdy_in(3)(1)", false,-1);
        vcdp->declBit(c+6449,"CombinationalFFT v comb_fft rdy_in(3)(2)", false,-1);
        vcdp->declBit(c+6457,"CombinationalFFT v comb_fft rdy_in(3)(3)", false,-1);
        vcdp->declBit(c+6465,"CombinationalFFT v comb_fft rdy_in(3)(4)", false,-1);
        vcdp->declBit(c+6473,"CombinationalFFT v comb_fft rdy_in(3)(5)", false,-1);
        vcdp->declBit(c+6481,"CombinationalFFT v comb_fft rdy_in(3)(6)", false,-1);
        vcdp->declBit(c+6489,"CombinationalFFT v comb_fft rdy_in(3)(7)", false,-1);
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+1+i*1,"CombinationalFFT v comb_fft sine_wave_out", true,(i+0), 31,0);}}
        vcdp->declBus(c+6497,"CombinationalFFT v comb_fft imm", false,-1, 7,0);
        vcdp->declBus(c+6505,"CombinationalFFT v comb_fft imm2", false,-1, 7,0);
        vcdp->declBus(c+14113,"CombinationalFFT v comb_fft unnamedblk1 i", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+6513+i*1,"CombinationalFFT v comb_fft genblk3[0] butterfly_in_real", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+1153+i*1,"CombinationalFFT v comb_fft genblk3[0] butterfly_out_real", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+1217+i*1,"CombinationalFFT v comb_fft genblk3[0] butterfly_in_imaginary", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+1281+i*1,"CombinationalFFT v comb_fft genblk3[0] butterfly_out_imaginary", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+6577+i*1,"CombinationalFFT v comb_fft genblk3[0] val_interior_in", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+5345+i*1,"CombinationalFFT v comb_fft genblk3[0] rdy_interior_in", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+5409+i*1,"CombinationalFFT v comb_fft genblk3[0] val_interior_out", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+6641+i*1,"CombinationalFFT v comb_fft genblk3[0] rdy_interior_out", true,(i+0));}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+65+i*1,"CombinationalFFT v comb_fft genblk3[0] twiddle_real", true,(i+0), 31,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+97+i*1,"CombinationalFFT v comb_fft genblk3[0] twiddle_imaginary", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+6705+i*1,"CombinationalFFT v comb_fft genblk3[1] butterfly_in_real", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+1345+i*1,"CombinationalFFT v comb_fft genblk3[1] butterfly_out_real", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+1409+i*1,"CombinationalFFT v comb_fft genblk3[1] butterfly_in_imaginary", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+1473+i*1,"CombinationalFFT v comb_fft genblk3[1] butterfly_out_imaginary", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+6769+i*1,"CombinationalFFT v comb_fft genblk3[1] val_interior_in", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+5473+i*1,"CombinationalFFT v comb_fft genblk3[1] rdy_interior_in", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+5537+i*1,"CombinationalFFT v comb_fft genblk3[1] val_interior_out", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+6833+i*1,"CombinationalFFT v comb_fft genblk3[1] rdy_interior_out", true,(i+0));}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+129+i*1,"CombinationalFFT v comb_fft genblk3[1] twiddle_real", true,(i+0), 31,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+161+i*1,"CombinationalFFT v comb_fft genblk3[1] twiddle_imaginary", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+6897+i*1,"CombinationalFFT v comb_fft genblk3[2] butterfly_in_real", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+1537+i*1,"CombinationalFFT v comb_fft genblk3[2] butterfly_out_real", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+1601+i*1,"CombinationalFFT v comb_fft genblk3[2] butterfly_in_imaginary", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+1665+i*1,"CombinationalFFT v comb_fft genblk3[2] butterfly_out_imaginary", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+6961+i*1,"CombinationalFFT v comb_fft genblk3[2] val_interior_in", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+5601+i*1,"CombinationalFFT v comb_fft genblk3[2] rdy_interior_in", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+5665+i*1,"CombinationalFFT v comb_fft genblk3[2] val_interior_out", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+7025+i*1,"CombinationalFFT v comb_fft genblk3[2] rdy_interior_out", true,(i+0));}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+193+i*1,"CombinationalFFT v comb_fft genblk3[2] twiddle_real", true,(i+0), 31,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+225+i*1,"CombinationalFFT v comb_fft genblk3[2] twiddle_imaginary", true,(i+0), 31,0);}}
        vcdp->declBus(c+14113,"CombinationalFFT v comb_fft unnamedblk2 i", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+257+i*1,"CombinationalFFT v comb_fft genblk1 SineWave sine_wave_out", true,(i+0), 31,0);}}
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] xbar_in_1 BIT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+14097,"CombinationalFFT v comb_fft genblk3[0] xbar_in_1 SIZE_FFT", false,-1, 31,0);
        vcdp->declBus(c+14121,"CombinationalFFT v comb_fft genblk3[0] xbar_in_1 STAGE_FFT", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[0] xbar_in_1 FRONT", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+7089+i*1,"CombinationalFFT v comb_fft genblk3[0] xbar_in_1 recv_real", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+1729+i*1,"CombinationalFFT v comb_fft genblk3[0] xbar_in_1 recv_imaginary", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+7153+i*1,"CombinationalFFT v comb_fft genblk3[0] xbar_in_1 recv_val", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+7217+i*1,"CombinationalFFT v comb_fft genblk3[0] xbar_in_1 recv_rdy", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+7281+i*1,"CombinationalFFT v comb_fft genblk3[0] xbar_in_1 send_real", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+1793+i*1,"CombinationalFFT v comb_fft genblk3[0] xbar_in_1 send_imaginary", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+7345+i*1,"CombinationalFFT v comb_fft genblk3[0] xbar_in_1 send_val", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+7409+i*1,"CombinationalFFT v comb_fft genblk3[0] xbar_in_1 send_rdy", true,(i+0));}}
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in mult", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in reset", false,-1);
        vcdp->declBit(c+7473,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in recv_val", false,-1);
        vcdp->declBit(c+7481,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in send_rdy", false,-1);
        vcdp->declBus(c+7489,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in ar", false,-1, 31,0);
        vcdp->declBus(c+1857,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in ac", false,-1, 31,0);
        vcdp->declBus(c+7497,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in br", false,-1, 31,0);
        vcdp->declBus(c+1865,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in bc", false,-1, 31,0);
        vcdp->declBus(c+321,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in wr", false,-1, 31,0);
        vcdp->declBus(c+329,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in wc", false,-1, 31,0);
        vcdp->declBit(c+9393,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in send_val", false,-1);
        vcdp->declBit(c+9401,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in recv_rdy", false,-1);
        vcdp->declBus(c+9409,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in cr", false,-1, 31,0);
        vcdp->declBus(c+9417,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in cc", false,-1, 31,0);
        vcdp->declBus(c+9425,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in dr", false,-1, 31,0);
        vcdp->declBus(c+9433,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in dc", false,-1, 31,0);
        vcdp->declBit(c+9441,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in mul_rdy", false,-1);
        vcdp->declBus(c+1873,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in tr", false,-1, 31,0);
        vcdp->declBus(c+1881,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in tc", false,-1, 31,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul d", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul reset", false,-1);
        vcdp->declBit(c+7473,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul send_rdy", false,-1);
        vcdp->declBus(c+7497,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul ar", false,-1, 31,0);
        vcdp->declBus(c+1865,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul ac", false,-1, 31,0);
        vcdp->declBus(c+321,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul br", false,-1, 31,0);
        vcdp->declBus(c+329,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul bc", false,-1, 31,0);
        vcdp->declBit(c+9441,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul send_val", false,-1);
        vcdp->declBit(c+1889,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul recv_rdy", false,-1);
        vcdp->declBus(c+1873,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul cr", false,-1, 31,0);
        vcdp->declBus(c+1881,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul cc", false,-1, 31,0);
        vcdp->declBus(c+9449,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul arbr", false,-1, 31,0);
        vcdp->declBus(c+9457,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul acbc", false,-1, 31,0);
        vcdp->declBus(c+9465,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul ab", false,-1, 31,0);
        vcdp->declBus(c+9473,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul a", false,-1, 31,0);
        vcdp->declBus(c+9481,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul b", false,-1, 31,0);
        vcdp->declBit(c+9489,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul arbr_rdy", false,-1);
        vcdp->declBit(c+9497,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul acbc_rdy", false,-1);
        vcdp->declBit(c+9505,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul ab_rdy", false,-1);
        vcdp->declBit(c+9513,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul sab_rdy", false,-1);
        vcdp->declBit(c+9521,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m1_recv_rdy", false,-1);
        vcdp->declBit(c+9529,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m2_recv_rdy", false,-1);
        vcdp->declBit(c+9537,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m3_recv_rdy", false,-1);
        vcdp->declBus(c+9545,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul act", false,-1, 31,0);
        vcdp->declBus(c+9553,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul art", false,-1, 31,0);
        vcdp->declBus(c+9561,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul bct", false,-1, 31,0);
        vcdp->declBus(c+9569,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul brt", false,-1, 31,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m1 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m1 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m1 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m1 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m1 reset", false,-1);
        vcdp->declBit(c+9513,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m1 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m1 send_rdy", false,-1);
        vcdp->declBus(c+9553,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m1 a", false,-1, 31,0);
        vcdp->declBus(c+9569,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m1 b", false,-1, 31,0);
        vcdp->declBus(c+9449,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m1 c", false,-1, 31,0);
        vcdp->declBit(c+9489,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m1 send_val", false,-1);
        vcdp->declBit(c+9521,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m1 recv_rdy", false,-1);
        vcdp->declBus(c+9577,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m1 hb", false,-1, 31,0);
        vcdp->declBus(c+14145,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m1 hc", false,-1, 31,0);
        vcdp->declQuad(c+9585,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m1 ha", false,-1, 47,0);
        vcdp->declBit(c+9601,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m1 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m1 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m1 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m1 mult sign", false,-1, 31,0);
        vcdp->declBus(c+9577,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m1 mult b", false,-1, 31,0);
        vcdp->declQuad(c+9585,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m1 mult a", false,-1, 47,0);
        vcdp->declBit(c+9601,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m1 mult rdy", false,-1);
        vcdp->declQuad(c+1897,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m1 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+1913,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m1 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m2 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m2 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m2 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m2 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m2 reset", false,-1);
        vcdp->declBit(c+9513,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m2 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m2 send_rdy", false,-1);
        vcdp->declBus(c+9545,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m2 a", false,-1, 31,0);
        vcdp->declBus(c+9561,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m2 b", false,-1, 31,0);
        vcdp->declBus(c+9457,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m2 c", false,-1, 31,0);
        vcdp->declBit(c+9497,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m2 send_val", false,-1);
        vcdp->declBit(c+9529,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m2 recv_rdy", false,-1);
        vcdp->declBus(c+9609,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m2 hb", false,-1, 31,0);
        vcdp->declBus(c+14153,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m2 hc", false,-1, 31,0);
        vcdp->declQuad(c+9617,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m2 ha", false,-1, 47,0);
        vcdp->declBit(c+9633,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m2 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m2 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m2 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m2 mult sign", false,-1, 31,0);
        vcdp->declBus(c+9609,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m2 mult b", false,-1, 31,0);
        vcdp->declQuad(c+9617,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m2 mult a", false,-1, 47,0);
        vcdp->declBit(c+9633,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m2 mult rdy", false,-1);
        vcdp->declQuad(c+1929,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m2 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+1945,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m2 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m3 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m3 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m3 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m3 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m3 reset", false,-1);
        vcdp->declBit(c+9513,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m3 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m3 send_rdy", false,-1);
        vcdp->declBus(c+9473,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m3 a", false,-1, 31,0);
        vcdp->declBus(c+9481,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m3 b", false,-1, 31,0);
        vcdp->declBus(c+9465,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m3 c", false,-1, 31,0);
        vcdp->declBit(c+9505,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m3 send_val", false,-1);
        vcdp->declBit(c+9537,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m3 recv_rdy", false,-1);
        vcdp->declBus(c+9641,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m3 hb", false,-1, 31,0);
        vcdp->declBus(c+14161,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m3 hc", false,-1, 31,0);
        vcdp->declQuad(c+9649,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m3 ha", false,-1, 47,0);
        vcdp->declBit(c+9665,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m3 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m3 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m3 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m3 mult sign", false,-1, 31,0);
        vcdp->declBus(c+9641,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m3 mult b", false,-1, 31,0);
        vcdp->declQuad(c+9649,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m3 mult a", false,-1, 47,0);
        vcdp->declBit(c+9665,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m3 mult rdy", false,-1);
        vcdp->declQuad(c+1961,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m3 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+1977,"CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m3 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in mult", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in reset", false,-1);
        vcdp->declBit(c+7505,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in recv_val", false,-1);
        vcdp->declBit(c+7513,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in send_rdy", false,-1);
        vcdp->declBus(c+7521,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in ar", false,-1, 31,0);
        vcdp->declBus(c+1993,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in ac", false,-1, 31,0);
        vcdp->declBus(c+7529,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in br", false,-1, 31,0);
        vcdp->declBus(c+2001,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in bc", false,-1, 31,0);
        vcdp->declBus(c+337,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in wr", false,-1, 31,0);
        vcdp->declBus(c+345,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in wc", false,-1, 31,0);
        vcdp->declBit(c+9673,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in send_val", false,-1);
        vcdp->declBit(c+9681,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in recv_rdy", false,-1);
        vcdp->declBus(c+9689,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in cr", false,-1, 31,0);
        vcdp->declBus(c+9697,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in cc", false,-1, 31,0);
        vcdp->declBus(c+9705,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in dr", false,-1, 31,0);
        vcdp->declBus(c+9713,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in dc", false,-1, 31,0);
        vcdp->declBit(c+9721,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in mul_rdy", false,-1);
        vcdp->declBus(c+2009,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in tr", false,-1, 31,0);
        vcdp->declBus(c+2017,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in tc", false,-1, 31,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul d", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul reset", false,-1);
        vcdp->declBit(c+7505,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul send_rdy", false,-1);
        vcdp->declBus(c+7529,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul ar", false,-1, 31,0);
        vcdp->declBus(c+2001,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul ac", false,-1, 31,0);
        vcdp->declBus(c+337,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul br", false,-1, 31,0);
        vcdp->declBus(c+345,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul bc", false,-1, 31,0);
        vcdp->declBit(c+9721,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul send_val", false,-1);
        vcdp->declBit(c+2025,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul recv_rdy", false,-1);
        vcdp->declBus(c+2009,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul cr", false,-1, 31,0);
        vcdp->declBus(c+2017,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul cc", false,-1, 31,0);
        vcdp->declBus(c+9729,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul arbr", false,-1, 31,0);
        vcdp->declBus(c+9737,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul acbc", false,-1, 31,0);
        vcdp->declBus(c+9745,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul ab", false,-1, 31,0);
        vcdp->declBus(c+9753,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul a", false,-1, 31,0);
        vcdp->declBus(c+9761,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul b", false,-1, 31,0);
        vcdp->declBit(c+9769,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul arbr_rdy", false,-1);
        vcdp->declBit(c+9777,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul acbc_rdy", false,-1);
        vcdp->declBit(c+9785,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul ab_rdy", false,-1);
        vcdp->declBit(c+9793,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul sab_rdy", false,-1);
        vcdp->declBit(c+9801,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m1_recv_rdy", false,-1);
        vcdp->declBit(c+9809,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m2_recv_rdy", false,-1);
        vcdp->declBit(c+9817,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m3_recv_rdy", false,-1);
        vcdp->declBus(c+9825,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul act", false,-1, 31,0);
        vcdp->declBus(c+9833,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul art", false,-1, 31,0);
        vcdp->declBus(c+9841,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul bct", false,-1, 31,0);
        vcdp->declBus(c+9849,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul brt", false,-1, 31,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m1 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m1 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m1 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m1 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m1 reset", false,-1);
        vcdp->declBit(c+9793,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m1 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m1 send_rdy", false,-1);
        vcdp->declBus(c+9833,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m1 a", false,-1, 31,0);
        vcdp->declBus(c+9849,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m1 b", false,-1, 31,0);
        vcdp->declBus(c+9729,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m1 c", false,-1, 31,0);
        vcdp->declBit(c+9769,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m1 send_val", false,-1);
        vcdp->declBit(c+9801,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m1 recv_rdy", false,-1);
        vcdp->declBus(c+9857,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m1 hb", false,-1, 31,0);
        vcdp->declBus(c+14169,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m1 hc", false,-1, 31,0);
        vcdp->declQuad(c+9865,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m1 ha", false,-1, 47,0);
        vcdp->declBit(c+9881,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m1 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m1 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m1 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m1 mult sign", false,-1, 31,0);
        vcdp->declBus(c+9857,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m1 mult b", false,-1, 31,0);
        vcdp->declQuad(c+9865,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m1 mult a", false,-1, 47,0);
        vcdp->declBit(c+9881,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m1 mult rdy", false,-1);
        vcdp->declQuad(c+2033,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m1 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+2049,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m1 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m2 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m2 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m2 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m2 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m2 reset", false,-1);
        vcdp->declBit(c+9793,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m2 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m2 send_rdy", false,-1);
        vcdp->declBus(c+9825,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m2 a", false,-1, 31,0);
        vcdp->declBus(c+9841,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m2 b", false,-1, 31,0);
        vcdp->declBus(c+9737,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m2 c", false,-1, 31,0);
        vcdp->declBit(c+9777,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m2 send_val", false,-1);
        vcdp->declBit(c+9809,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m2 recv_rdy", false,-1);
        vcdp->declBus(c+9889,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m2 hb", false,-1, 31,0);
        vcdp->declBus(c+14177,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m2 hc", false,-1, 31,0);
        vcdp->declQuad(c+9897,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m2 ha", false,-1, 47,0);
        vcdp->declBit(c+9913,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m2 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m2 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m2 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m2 mult sign", false,-1, 31,0);
        vcdp->declBus(c+9889,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m2 mult b", false,-1, 31,0);
        vcdp->declQuad(c+9897,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m2 mult a", false,-1, 47,0);
        vcdp->declBit(c+9913,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m2 mult rdy", false,-1);
        vcdp->declQuad(c+2065,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m2 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+2081,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m2 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m3 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m3 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m3 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m3 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m3 reset", false,-1);
        vcdp->declBit(c+9793,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m3 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m3 send_rdy", false,-1);
        vcdp->declBus(c+9753,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m3 a", false,-1, 31,0);
        vcdp->declBus(c+9761,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m3 b", false,-1, 31,0);
        vcdp->declBus(c+9745,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m3 c", false,-1, 31,0);
        vcdp->declBit(c+9785,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m3 send_val", false,-1);
        vcdp->declBit(c+9817,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m3 recv_rdy", false,-1);
        vcdp->declBus(c+9921,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m3 hb", false,-1, 31,0);
        vcdp->declBus(c+14185,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m3 hc", false,-1, 31,0);
        vcdp->declQuad(c+9929,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m3 ha", false,-1, 47,0);
        vcdp->declBit(c+9945,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m3 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m3 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m3 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m3 mult sign", false,-1, 31,0);
        vcdp->declBus(c+9921,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m3 mult b", false,-1, 31,0);
        vcdp->declQuad(c+9929,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m3 mult a", false,-1, 47,0);
        vcdp->declBit(c+9945,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m3 mult rdy", false,-1);
        vcdp->declQuad(c+2097,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m3 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+2113,"CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m3 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in mult", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in reset", false,-1);
        vcdp->declBit(c+7537,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in recv_val", false,-1);
        vcdp->declBit(c+7545,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in send_rdy", false,-1);
        vcdp->declBus(c+7553,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in ar", false,-1, 31,0);
        vcdp->declBus(c+2129,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in ac", false,-1, 31,0);
        vcdp->declBus(c+7561,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in br", false,-1, 31,0);
        vcdp->declBus(c+2137,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in bc", false,-1, 31,0);
        vcdp->declBus(c+353,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in wr", false,-1, 31,0);
        vcdp->declBus(c+361,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in wc", false,-1, 31,0);
        vcdp->declBit(c+9953,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in send_val", false,-1);
        vcdp->declBit(c+9961,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in recv_rdy", false,-1);
        vcdp->declBus(c+9969,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in cr", false,-1, 31,0);
        vcdp->declBus(c+9977,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in cc", false,-1, 31,0);
        vcdp->declBus(c+9985,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in dr", false,-1, 31,0);
        vcdp->declBus(c+9993,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in dc", false,-1, 31,0);
        vcdp->declBit(c+10001,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in mul_rdy", false,-1);
        vcdp->declBus(c+2145,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in tr", false,-1, 31,0);
        vcdp->declBus(c+2153,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in tc", false,-1, 31,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul d", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul reset", false,-1);
        vcdp->declBit(c+7537,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul send_rdy", false,-1);
        vcdp->declBus(c+7561,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul ar", false,-1, 31,0);
        vcdp->declBus(c+2137,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul ac", false,-1, 31,0);
        vcdp->declBus(c+353,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul br", false,-1, 31,0);
        vcdp->declBus(c+361,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul bc", false,-1, 31,0);
        vcdp->declBit(c+10001,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul send_val", false,-1);
        vcdp->declBit(c+2161,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul recv_rdy", false,-1);
        vcdp->declBus(c+2145,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul cr", false,-1, 31,0);
        vcdp->declBus(c+2153,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul cc", false,-1, 31,0);
        vcdp->declBus(c+10009,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul arbr", false,-1, 31,0);
        vcdp->declBus(c+10017,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul acbc", false,-1, 31,0);
        vcdp->declBus(c+10025,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul ab", false,-1, 31,0);
        vcdp->declBus(c+10033,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul a", false,-1, 31,0);
        vcdp->declBus(c+10041,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul b", false,-1, 31,0);
        vcdp->declBit(c+10049,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul arbr_rdy", false,-1);
        vcdp->declBit(c+10057,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul acbc_rdy", false,-1);
        vcdp->declBit(c+10065,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul ab_rdy", false,-1);
        vcdp->declBit(c+10073,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul sab_rdy", false,-1);
        vcdp->declBit(c+10081,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m1_recv_rdy", false,-1);
        vcdp->declBit(c+10089,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m2_recv_rdy", false,-1);
        vcdp->declBit(c+10097,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m3_recv_rdy", false,-1);
        vcdp->declBus(c+10105,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul act", false,-1, 31,0);
        vcdp->declBus(c+10113,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul art", false,-1, 31,0);
        vcdp->declBus(c+10121,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul bct", false,-1, 31,0);
        vcdp->declBus(c+10129,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul brt", false,-1, 31,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m1 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m1 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m1 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m1 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m1 reset", false,-1);
        vcdp->declBit(c+10073,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m1 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m1 send_rdy", false,-1);
        vcdp->declBus(c+10113,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m1 a", false,-1, 31,0);
        vcdp->declBus(c+10129,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m1 b", false,-1, 31,0);
        vcdp->declBus(c+10009,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m1 c", false,-1, 31,0);
        vcdp->declBit(c+10049,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m1 send_val", false,-1);
        vcdp->declBit(c+10081,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m1 recv_rdy", false,-1);
        vcdp->declBus(c+10137,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m1 hb", false,-1, 31,0);
        vcdp->declBus(c+14193,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m1 hc", false,-1, 31,0);
        vcdp->declQuad(c+10145,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m1 ha", false,-1, 47,0);
        vcdp->declBit(c+10161,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m1 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m1 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m1 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m1 mult sign", false,-1, 31,0);
        vcdp->declBus(c+10137,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m1 mult b", false,-1, 31,0);
        vcdp->declQuad(c+10145,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m1 mult a", false,-1, 47,0);
        vcdp->declBit(c+10161,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m1 mult rdy", false,-1);
        vcdp->declQuad(c+2169,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m1 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+2185,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m1 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m2 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m2 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m2 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m2 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m2 reset", false,-1);
        vcdp->declBit(c+10073,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m2 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m2 send_rdy", false,-1);
        vcdp->declBus(c+10105,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m2 a", false,-1, 31,0);
        vcdp->declBus(c+10121,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m2 b", false,-1, 31,0);
        vcdp->declBus(c+10017,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m2 c", false,-1, 31,0);
        vcdp->declBit(c+10057,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m2 send_val", false,-1);
        vcdp->declBit(c+10089,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m2 recv_rdy", false,-1);
        vcdp->declBus(c+10169,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m2 hb", false,-1, 31,0);
        vcdp->declBus(c+14201,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m2 hc", false,-1, 31,0);
        vcdp->declQuad(c+10177,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m2 ha", false,-1, 47,0);
        vcdp->declBit(c+10193,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m2 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m2 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m2 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m2 mult sign", false,-1, 31,0);
        vcdp->declBus(c+10169,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m2 mult b", false,-1, 31,0);
        vcdp->declQuad(c+10177,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m2 mult a", false,-1, 47,0);
        vcdp->declBit(c+10193,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m2 mult rdy", false,-1);
        vcdp->declQuad(c+2201,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m2 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+2217,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m2 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m3 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m3 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m3 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m3 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m3 reset", false,-1);
        vcdp->declBit(c+10073,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m3 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m3 send_rdy", false,-1);
        vcdp->declBus(c+10033,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m3 a", false,-1, 31,0);
        vcdp->declBus(c+10041,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m3 b", false,-1, 31,0);
        vcdp->declBus(c+10025,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m3 c", false,-1, 31,0);
        vcdp->declBit(c+10065,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m3 send_val", false,-1);
        vcdp->declBit(c+10097,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m3 recv_rdy", false,-1);
        vcdp->declBus(c+10201,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m3 hb", false,-1, 31,0);
        vcdp->declBus(c+14209,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m3 hc", false,-1, 31,0);
        vcdp->declQuad(c+10209,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m3 ha", false,-1, 47,0);
        vcdp->declBit(c+10225,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m3 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m3 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m3 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m3 mult sign", false,-1, 31,0);
        vcdp->declBus(c+10201,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m3 mult b", false,-1, 31,0);
        vcdp->declQuad(c+10209,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m3 mult a", false,-1, 47,0);
        vcdp->declBit(c+10225,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m3 mult rdy", false,-1);
        vcdp->declQuad(c+2233,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m3 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+2249,"CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m3 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in mult", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in reset", false,-1);
        vcdp->declBit(c+7569,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in recv_val", false,-1);
        vcdp->declBit(c+7577,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in send_rdy", false,-1);
        vcdp->declBus(c+7585,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in ar", false,-1, 31,0);
        vcdp->declBus(c+2265,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in ac", false,-1, 31,0);
        vcdp->declBus(c+7593,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in br", false,-1, 31,0);
        vcdp->declBus(c+2273,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in bc", false,-1, 31,0);
        vcdp->declBus(c+369,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in wr", false,-1, 31,0);
        vcdp->declBus(c+377,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in wc", false,-1, 31,0);
        vcdp->declBit(c+10233,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in send_val", false,-1);
        vcdp->declBit(c+10241,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in recv_rdy", false,-1);
        vcdp->declBus(c+10249,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in cr", false,-1, 31,0);
        vcdp->declBus(c+10257,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in cc", false,-1, 31,0);
        vcdp->declBus(c+10265,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in dr", false,-1, 31,0);
        vcdp->declBus(c+10273,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in dc", false,-1, 31,0);
        vcdp->declBit(c+10281,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in mul_rdy", false,-1);
        vcdp->declBus(c+2281,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in tr", false,-1, 31,0);
        vcdp->declBus(c+2289,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in tc", false,-1, 31,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul d", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul reset", false,-1);
        vcdp->declBit(c+7569,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul send_rdy", false,-1);
        vcdp->declBus(c+7593,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul ar", false,-1, 31,0);
        vcdp->declBus(c+2273,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul ac", false,-1, 31,0);
        vcdp->declBus(c+369,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul br", false,-1, 31,0);
        vcdp->declBus(c+377,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul bc", false,-1, 31,0);
        vcdp->declBit(c+10281,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul send_val", false,-1);
        vcdp->declBit(c+2297,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul recv_rdy", false,-1);
        vcdp->declBus(c+2281,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul cr", false,-1, 31,0);
        vcdp->declBus(c+2289,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul cc", false,-1, 31,0);
        vcdp->declBus(c+10289,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul arbr", false,-1, 31,0);
        vcdp->declBus(c+10297,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul acbc", false,-1, 31,0);
        vcdp->declBus(c+10305,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul ab", false,-1, 31,0);
        vcdp->declBus(c+10313,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul a", false,-1, 31,0);
        vcdp->declBus(c+10321,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul b", false,-1, 31,0);
        vcdp->declBit(c+10329,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul arbr_rdy", false,-1);
        vcdp->declBit(c+10337,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul acbc_rdy", false,-1);
        vcdp->declBit(c+10345,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul ab_rdy", false,-1);
        vcdp->declBit(c+10353,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul sab_rdy", false,-1);
        vcdp->declBit(c+10361,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m1_recv_rdy", false,-1);
        vcdp->declBit(c+10369,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m2_recv_rdy", false,-1);
        vcdp->declBit(c+10377,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m3_recv_rdy", false,-1);
        vcdp->declBus(c+10385,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul act", false,-1, 31,0);
        vcdp->declBus(c+10393,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul art", false,-1, 31,0);
        vcdp->declBus(c+10401,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul bct", false,-1, 31,0);
        vcdp->declBus(c+10409,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul brt", false,-1, 31,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m1 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m1 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m1 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m1 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m1 reset", false,-1);
        vcdp->declBit(c+10353,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m1 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m1 send_rdy", false,-1);
        vcdp->declBus(c+10393,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m1 a", false,-1, 31,0);
        vcdp->declBus(c+10409,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m1 b", false,-1, 31,0);
        vcdp->declBus(c+10289,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m1 c", false,-1, 31,0);
        vcdp->declBit(c+10329,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m1 send_val", false,-1);
        vcdp->declBit(c+10361,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m1 recv_rdy", false,-1);
        vcdp->declBus(c+10417,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m1 hb", false,-1, 31,0);
        vcdp->declBus(c+14217,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m1 hc", false,-1, 31,0);
        vcdp->declQuad(c+10425,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m1 ha", false,-1, 47,0);
        vcdp->declBit(c+10441,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m1 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m1 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m1 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m1 mult sign", false,-1, 31,0);
        vcdp->declBus(c+10417,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m1 mult b", false,-1, 31,0);
        vcdp->declQuad(c+10425,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m1 mult a", false,-1, 47,0);
        vcdp->declBit(c+10441,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m1 mult rdy", false,-1);
        vcdp->declQuad(c+2305,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m1 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+2321,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m1 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m2 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m2 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m2 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m2 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m2 reset", false,-1);
        vcdp->declBit(c+10353,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m2 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m2 send_rdy", false,-1);
        vcdp->declBus(c+10385,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m2 a", false,-1, 31,0);
        vcdp->declBus(c+10401,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m2 b", false,-1, 31,0);
        vcdp->declBus(c+10297,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m2 c", false,-1, 31,0);
        vcdp->declBit(c+10337,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m2 send_val", false,-1);
        vcdp->declBit(c+10369,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m2 recv_rdy", false,-1);
        vcdp->declBus(c+10449,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m2 hb", false,-1, 31,0);
        vcdp->declBus(c+14225,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m2 hc", false,-1, 31,0);
        vcdp->declQuad(c+10457,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m2 ha", false,-1, 47,0);
        vcdp->declBit(c+10473,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m2 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m2 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m2 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m2 mult sign", false,-1, 31,0);
        vcdp->declBus(c+10449,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m2 mult b", false,-1, 31,0);
        vcdp->declQuad(c+10457,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m2 mult a", false,-1, 47,0);
        vcdp->declBit(c+10473,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m2 mult rdy", false,-1);
        vcdp->declQuad(c+2337,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m2 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+2353,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m2 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m3 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m3 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m3 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m3 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m3 reset", false,-1);
        vcdp->declBit(c+10353,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m3 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m3 send_rdy", false,-1);
        vcdp->declBus(c+10313,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m3 a", false,-1, 31,0);
        vcdp->declBus(c+10321,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m3 b", false,-1, 31,0);
        vcdp->declBus(c+10305,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m3 c", false,-1, 31,0);
        vcdp->declBit(c+10345,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m3 send_val", false,-1);
        vcdp->declBit(c+10377,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m3 recv_rdy", false,-1);
        vcdp->declBus(c+10481,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m3 hb", false,-1, 31,0);
        vcdp->declBus(c+14233,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m3 hc", false,-1, 31,0);
        vcdp->declQuad(c+10489,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m3 ha", false,-1, 47,0);
        vcdp->declBit(c+10505,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m3 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m3 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m3 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m3 mult sign", false,-1, 31,0);
        vcdp->declBus(c+10481,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m3 mult b", false,-1, 31,0);
        vcdp->declQuad(c+10489,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m3 mult a", false,-1, 47,0);
        vcdp->declBit(c+10505,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m3 mult rdy", false,-1);
        vcdp->declQuad(c+2369,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m3 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+2385,"CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m3 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] xbar_out_1 BIT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+14097,"CombinationalFFT v comb_fft genblk3[0] xbar_out_1 SIZE_FFT", false,-1, 31,0);
        vcdp->declBus(c+14121,"CombinationalFFT v comb_fft genblk3[0] xbar_out_1 STAGE_FFT", false,-1, 31,0);
        vcdp->declBus(c+14241,"CombinationalFFT v comb_fft genblk3[0] xbar_out_1 FRONT", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+2401+i*1,"CombinationalFFT v comb_fft genblk3[0] xbar_out_1 recv_real", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+2465+i*1,"CombinationalFFT v comb_fft genblk3[0] xbar_out_1 recv_imaginary", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+7601+i*1,"CombinationalFFT v comb_fft genblk3[0] xbar_out_1 recv_val", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+7665+i*1,"CombinationalFFT v comb_fft genblk3[0] xbar_out_1 recv_rdy", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+2529+i*1,"CombinationalFFT v comb_fft genblk3[0] xbar_out_1 send_real", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+2593+i*1,"CombinationalFFT v comb_fft genblk3[0] xbar_out_1 send_imaginary", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+7729+i*1,"CombinationalFFT v comb_fft genblk3[0] xbar_out_1 send_val", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+7793+i*1,"CombinationalFFT v comb_fft genblk3[0] xbar_out_1 send_rdy", true,(i+0));}}
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[0] twiddle_generator BIT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[0] twiddle_generator DECIMAL_PT", false,-1, 31,0);
        vcdp->declBus(c+14097,"CombinationalFFT v comb_fft genblk3[0] twiddle_generator SIZE_FFT", false,-1, 31,0);
        vcdp->declBus(c+14121,"CombinationalFFT v comb_fft genblk3[0] twiddle_generator STAGE_FFT", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+385+i*1,"CombinationalFFT v comb_fft genblk3[0] twiddle_generator sine_wave_in", true,(i+0), 31,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+449+i*1,"CombinationalFFT v comb_fft genblk3[0] twiddle_generator twiddle_real", true,(i+0), 31,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+481+i*1,"CombinationalFFT v comb_fft genblk3[0] twiddle_generator twiddle_imaginary", true,(i+0), 31,0);}}
        vcdp->declBus(c+14249,"CombinationalFFT v comb_fft genblk3[0] twiddle_generator trace", false,-1, 31,0);
        vcdp->declBus(c+14257,"CombinationalFFT v comb_fft genblk3[0] twiddle_generator trace2", false,-1, 31,0);
        vcdp->declBus(c+14249,"CombinationalFFT v comb_fft genblk3[0] twiddle_generator trace3", false,-1, 31,0);
        vcdp->declBus(c+14257,"CombinationalFFT v comb_fft genblk3[0] twiddle_generator trace4", false,-1, 31,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] xbar_in_1 BIT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+14097,"CombinationalFFT v comb_fft genblk3[1] xbar_in_1 SIZE_FFT", false,-1, 31,0);
        vcdp->declBus(c+14265,"CombinationalFFT v comb_fft genblk3[1] xbar_in_1 STAGE_FFT", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[1] xbar_in_1 FRONT", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+7857+i*1,"CombinationalFFT v comb_fft genblk3[1] xbar_in_1 recv_real", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+2657+i*1,"CombinationalFFT v comb_fft genblk3[1] xbar_in_1 recv_imaginary", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+7921+i*1,"CombinationalFFT v comb_fft genblk3[1] xbar_in_1 recv_val", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+7985+i*1,"CombinationalFFT v comb_fft genblk3[1] xbar_in_1 recv_rdy", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+8049+i*1,"CombinationalFFT v comb_fft genblk3[1] xbar_in_1 send_real", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+2721+i*1,"CombinationalFFT v comb_fft genblk3[1] xbar_in_1 send_imaginary", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+8113+i*1,"CombinationalFFT v comb_fft genblk3[1] xbar_in_1 send_val", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+8177+i*1,"CombinationalFFT v comb_fft genblk3[1] xbar_in_1 send_rdy", true,(i+0));}}
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in mult", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in reset", false,-1);
        vcdp->declBit(c+8241,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in recv_val", false,-1);
        vcdp->declBit(c+8249,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in send_rdy", false,-1);
        vcdp->declBus(c+8257,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in ar", false,-1, 31,0);
        vcdp->declBus(c+2785,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in ac", false,-1, 31,0);
        vcdp->declBus(c+8265,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in br", false,-1, 31,0);
        vcdp->declBus(c+2793,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in bc", false,-1, 31,0);
        vcdp->declBus(c+513,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in wr", false,-1, 31,0);
        vcdp->declBus(c+521,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in wc", false,-1, 31,0);
        vcdp->declBit(c+10513,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in send_val", false,-1);
        vcdp->declBit(c+10521,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in recv_rdy", false,-1);
        vcdp->declBus(c+10529,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in cr", false,-1, 31,0);
        vcdp->declBus(c+10537,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in cc", false,-1, 31,0);
        vcdp->declBus(c+10545,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in dr", false,-1, 31,0);
        vcdp->declBus(c+10553,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in dc", false,-1, 31,0);
        vcdp->declBit(c+10561,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in mul_rdy", false,-1);
        vcdp->declBus(c+2801,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in tr", false,-1, 31,0);
        vcdp->declBus(c+2809,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in tc", false,-1, 31,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul d", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul reset", false,-1);
        vcdp->declBit(c+8241,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul send_rdy", false,-1);
        vcdp->declBus(c+8265,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul ar", false,-1, 31,0);
        vcdp->declBus(c+2793,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul ac", false,-1, 31,0);
        vcdp->declBus(c+513,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul br", false,-1, 31,0);
        vcdp->declBus(c+521,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul bc", false,-1, 31,0);
        vcdp->declBit(c+10561,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul send_val", false,-1);
        vcdp->declBit(c+2817,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul recv_rdy", false,-1);
        vcdp->declBus(c+2801,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul cr", false,-1, 31,0);
        vcdp->declBus(c+2809,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul cc", false,-1, 31,0);
        vcdp->declBus(c+10569,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul arbr", false,-1, 31,0);
        vcdp->declBus(c+10577,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul acbc", false,-1, 31,0);
        vcdp->declBus(c+10585,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul ab", false,-1, 31,0);
        vcdp->declBus(c+10593,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul a", false,-1, 31,0);
        vcdp->declBus(c+10601,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul b", false,-1, 31,0);
        vcdp->declBit(c+10609,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul arbr_rdy", false,-1);
        vcdp->declBit(c+10617,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul acbc_rdy", false,-1);
        vcdp->declBit(c+10625,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul ab_rdy", false,-1);
        vcdp->declBit(c+10633,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul sab_rdy", false,-1);
        vcdp->declBit(c+10641,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m1_recv_rdy", false,-1);
        vcdp->declBit(c+10649,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m2_recv_rdy", false,-1);
        vcdp->declBit(c+10657,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m3_recv_rdy", false,-1);
        vcdp->declBus(c+10665,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul act", false,-1, 31,0);
        vcdp->declBus(c+10673,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul art", false,-1, 31,0);
        vcdp->declBus(c+10681,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul bct", false,-1, 31,0);
        vcdp->declBus(c+10689,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul brt", false,-1, 31,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m1 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m1 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m1 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m1 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m1 reset", false,-1);
        vcdp->declBit(c+10633,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m1 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m1 send_rdy", false,-1);
        vcdp->declBus(c+10673,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m1 a", false,-1, 31,0);
        vcdp->declBus(c+10689,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m1 b", false,-1, 31,0);
        vcdp->declBus(c+10569,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m1 c", false,-1, 31,0);
        vcdp->declBit(c+10609,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m1 send_val", false,-1);
        vcdp->declBit(c+10641,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m1 recv_rdy", false,-1);
        vcdp->declBus(c+10697,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m1 hb", false,-1, 31,0);
        vcdp->declBus(c+14273,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m1 hc", false,-1, 31,0);
        vcdp->declQuad(c+10705,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m1 ha", false,-1, 47,0);
        vcdp->declBit(c+10721,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m1 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m1 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m1 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m1 mult sign", false,-1, 31,0);
        vcdp->declBus(c+10697,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m1 mult b", false,-1, 31,0);
        vcdp->declQuad(c+10705,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m1 mult a", false,-1, 47,0);
        vcdp->declBit(c+10721,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m1 mult rdy", false,-1);
        vcdp->declQuad(c+2825,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m1 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+2841,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m1 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m2 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m2 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m2 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m2 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m2 reset", false,-1);
        vcdp->declBit(c+10633,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m2 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m2 send_rdy", false,-1);
        vcdp->declBus(c+10665,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m2 a", false,-1, 31,0);
        vcdp->declBus(c+10681,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m2 b", false,-1, 31,0);
        vcdp->declBus(c+10577,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m2 c", false,-1, 31,0);
        vcdp->declBit(c+10617,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m2 send_val", false,-1);
        vcdp->declBit(c+10649,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m2 recv_rdy", false,-1);
        vcdp->declBus(c+10729,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m2 hb", false,-1, 31,0);
        vcdp->declBus(c+14281,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m2 hc", false,-1, 31,0);
        vcdp->declQuad(c+10737,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m2 ha", false,-1, 47,0);
        vcdp->declBit(c+10753,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m2 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m2 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m2 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m2 mult sign", false,-1, 31,0);
        vcdp->declBus(c+10729,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m2 mult b", false,-1, 31,0);
        vcdp->declQuad(c+10737,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m2 mult a", false,-1, 47,0);
        vcdp->declBit(c+10753,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m2 mult rdy", false,-1);
        vcdp->declQuad(c+2857,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m2 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+2873,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m2 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m3 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m3 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m3 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m3 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m3 reset", false,-1);
        vcdp->declBit(c+10633,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m3 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m3 send_rdy", false,-1);
        vcdp->declBus(c+10593,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m3 a", false,-1, 31,0);
        vcdp->declBus(c+10601,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m3 b", false,-1, 31,0);
        vcdp->declBus(c+10585,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m3 c", false,-1, 31,0);
        vcdp->declBit(c+10625,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m3 send_val", false,-1);
        vcdp->declBit(c+10657,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m3 recv_rdy", false,-1);
        vcdp->declBus(c+10761,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m3 hb", false,-1, 31,0);
        vcdp->declBus(c+14289,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m3 hc", false,-1, 31,0);
        vcdp->declQuad(c+10769,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m3 ha", false,-1, 47,0);
        vcdp->declBit(c+10785,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m3 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m3 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m3 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m3 mult sign", false,-1, 31,0);
        vcdp->declBus(c+10761,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m3 mult b", false,-1, 31,0);
        vcdp->declQuad(c+10769,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m3 mult a", false,-1, 47,0);
        vcdp->declBit(c+10785,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m3 mult rdy", false,-1);
        vcdp->declQuad(c+2889,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m3 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+2905,"CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m3 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in mult", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in reset", false,-1);
        vcdp->declBit(c+8273,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in recv_val", false,-1);
        vcdp->declBit(c+8281,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in send_rdy", false,-1);
        vcdp->declBus(c+8289,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in ar", false,-1, 31,0);
        vcdp->declBus(c+2921,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in ac", false,-1, 31,0);
        vcdp->declBus(c+8297,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in br", false,-1, 31,0);
        vcdp->declBus(c+2929,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in bc", false,-1, 31,0);
        vcdp->declBus(c+529,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in wr", false,-1, 31,0);
        vcdp->declBus(c+537,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in wc", false,-1, 31,0);
        vcdp->declBit(c+10793,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in send_val", false,-1);
        vcdp->declBit(c+10801,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in recv_rdy", false,-1);
        vcdp->declBus(c+10809,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in cr", false,-1, 31,0);
        vcdp->declBus(c+10817,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in cc", false,-1, 31,0);
        vcdp->declBus(c+10825,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in dr", false,-1, 31,0);
        vcdp->declBus(c+10833,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in dc", false,-1, 31,0);
        vcdp->declBit(c+10841,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in mul_rdy", false,-1);
        vcdp->declBus(c+2937,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in tr", false,-1, 31,0);
        vcdp->declBus(c+2945,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in tc", false,-1, 31,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul d", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul reset", false,-1);
        vcdp->declBit(c+8273,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul send_rdy", false,-1);
        vcdp->declBus(c+8297,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul ar", false,-1, 31,0);
        vcdp->declBus(c+2929,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul ac", false,-1, 31,0);
        vcdp->declBus(c+529,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul br", false,-1, 31,0);
        vcdp->declBus(c+537,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul bc", false,-1, 31,0);
        vcdp->declBit(c+10841,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul send_val", false,-1);
        vcdp->declBit(c+2953,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul recv_rdy", false,-1);
        vcdp->declBus(c+2937,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul cr", false,-1, 31,0);
        vcdp->declBus(c+2945,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul cc", false,-1, 31,0);
        vcdp->declBus(c+10849,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul arbr", false,-1, 31,0);
        vcdp->declBus(c+10857,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul acbc", false,-1, 31,0);
        vcdp->declBus(c+10865,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul ab", false,-1, 31,0);
        vcdp->declBus(c+10873,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul a", false,-1, 31,0);
        vcdp->declBus(c+10881,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul b", false,-1, 31,0);
        vcdp->declBit(c+10889,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul arbr_rdy", false,-1);
        vcdp->declBit(c+10897,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul acbc_rdy", false,-1);
        vcdp->declBit(c+10905,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul ab_rdy", false,-1);
        vcdp->declBit(c+10913,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul sab_rdy", false,-1);
        vcdp->declBit(c+10921,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m1_recv_rdy", false,-1);
        vcdp->declBit(c+10929,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m2_recv_rdy", false,-1);
        vcdp->declBit(c+10937,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m3_recv_rdy", false,-1);
        vcdp->declBus(c+10945,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul act", false,-1, 31,0);
        vcdp->declBus(c+10953,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul art", false,-1, 31,0);
        vcdp->declBus(c+10961,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul bct", false,-1, 31,0);
        vcdp->declBus(c+10969,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul brt", false,-1, 31,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m1 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m1 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m1 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m1 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m1 reset", false,-1);
        vcdp->declBit(c+10913,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m1 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m1 send_rdy", false,-1);
        vcdp->declBus(c+10953,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m1 a", false,-1, 31,0);
        vcdp->declBus(c+10969,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m1 b", false,-1, 31,0);
        vcdp->declBus(c+10849,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m1 c", false,-1, 31,0);
        vcdp->declBit(c+10889,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m1 send_val", false,-1);
        vcdp->declBit(c+10921,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m1 recv_rdy", false,-1);
        vcdp->declBus(c+10977,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m1 hb", false,-1, 31,0);
        vcdp->declBus(c+14297,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m1 hc", false,-1, 31,0);
        vcdp->declQuad(c+10985,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m1 ha", false,-1, 47,0);
        vcdp->declBit(c+11001,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m1 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m1 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m1 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m1 mult sign", false,-1, 31,0);
        vcdp->declBus(c+10977,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m1 mult b", false,-1, 31,0);
        vcdp->declQuad(c+10985,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m1 mult a", false,-1, 47,0);
        vcdp->declBit(c+11001,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m1 mult rdy", false,-1);
        vcdp->declQuad(c+2961,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m1 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+2977,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m1 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m2 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m2 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m2 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m2 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m2 reset", false,-1);
        vcdp->declBit(c+10913,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m2 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m2 send_rdy", false,-1);
        vcdp->declBus(c+10945,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m2 a", false,-1, 31,0);
        vcdp->declBus(c+10961,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m2 b", false,-1, 31,0);
        vcdp->declBus(c+10857,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m2 c", false,-1, 31,0);
        vcdp->declBit(c+10897,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m2 send_val", false,-1);
        vcdp->declBit(c+10929,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m2 recv_rdy", false,-1);
        vcdp->declBus(c+11009,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m2 hb", false,-1, 31,0);
        vcdp->declBus(c+14305,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m2 hc", false,-1, 31,0);
        vcdp->declQuad(c+11017,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m2 ha", false,-1, 47,0);
        vcdp->declBit(c+11033,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m2 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m2 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m2 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m2 mult sign", false,-1, 31,0);
        vcdp->declBus(c+11009,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m2 mult b", false,-1, 31,0);
        vcdp->declQuad(c+11017,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m2 mult a", false,-1, 47,0);
        vcdp->declBit(c+11033,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m2 mult rdy", false,-1);
        vcdp->declQuad(c+2993,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m2 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+3009,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m2 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m3 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m3 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m3 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m3 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m3 reset", false,-1);
        vcdp->declBit(c+10913,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m3 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m3 send_rdy", false,-1);
        vcdp->declBus(c+10873,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m3 a", false,-1, 31,0);
        vcdp->declBus(c+10881,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m3 b", false,-1, 31,0);
        vcdp->declBus(c+10865,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m3 c", false,-1, 31,0);
        vcdp->declBit(c+10905,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m3 send_val", false,-1);
        vcdp->declBit(c+10937,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m3 recv_rdy", false,-1);
        vcdp->declBus(c+11041,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m3 hb", false,-1, 31,0);
        vcdp->declBus(c+14313,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m3 hc", false,-1, 31,0);
        vcdp->declQuad(c+11049,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m3 ha", false,-1, 47,0);
        vcdp->declBit(c+11065,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m3 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m3 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m3 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m3 mult sign", false,-1, 31,0);
        vcdp->declBus(c+11041,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m3 mult b", false,-1, 31,0);
        vcdp->declQuad(c+11049,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m3 mult a", false,-1, 47,0);
        vcdp->declBit(c+11065,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m3 mult rdy", false,-1);
        vcdp->declQuad(c+3025,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m3 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+3041,"CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m3 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in mult", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in reset", false,-1);
        vcdp->declBit(c+8305,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in recv_val", false,-1);
        vcdp->declBit(c+8313,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in send_rdy", false,-1);
        vcdp->declBus(c+8321,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in ar", false,-1, 31,0);
        vcdp->declBus(c+3057,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in ac", false,-1, 31,0);
        vcdp->declBus(c+8329,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in br", false,-1, 31,0);
        vcdp->declBus(c+3065,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in bc", false,-1, 31,0);
        vcdp->declBus(c+545,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in wr", false,-1, 31,0);
        vcdp->declBus(c+553,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in wc", false,-1, 31,0);
        vcdp->declBit(c+11073,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in send_val", false,-1);
        vcdp->declBit(c+11081,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in recv_rdy", false,-1);
        vcdp->declBus(c+11089,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in cr", false,-1, 31,0);
        vcdp->declBus(c+11097,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in cc", false,-1, 31,0);
        vcdp->declBus(c+11105,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in dr", false,-1, 31,0);
        vcdp->declBus(c+11113,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in dc", false,-1, 31,0);
        vcdp->declBit(c+11121,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in mul_rdy", false,-1);
        vcdp->declBus(c+3073,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in tr", false,-1, 31,0);
        vcdp->declBus(c+3081,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in tc", false,-1, 31,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul d", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul reset", false,-1);
        vcdp->declBit(c+8305,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul send_rdy", false,-1);
        vcdp->declBus(c+8329,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul ar", false,-1, 31,0);
        vcdp->declBus(c+3065,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul ac", false,-1, 31,0);
        vcdp->declBus(c+545,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul br", false,-1, 31,0);
        vcdp->declBus(c+553,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul bc", false,-1, 31,0);
        vcdp->declBit(c+11121,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul send_val", false,-1);
        vcdp->declBit(c+3089,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul recv_rdy", false,-1);
        vcdp->declBus(c+3073,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul cr", false,-1, 31,0);
        vcdp->declBus(c+3081,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul cc", false,-1, 31,0);
        vcdp->declBus(c+11129,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul arbr", false,-1, 31,0);
        vcdp->declBus(c+11137,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul acbc", false,-1, 31,0);
        vcdp->declBus(c+11145,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul ab", false,-1, 31,0);
        vcdp->declBus(c+11153,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul a", false,-1, 31,0);
        vcdp->declBus(c+11161,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul b", false,-1, 31,0);
        vcdp->declBit(c+11169,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul arbr_rdy", false,-1);
        vcdp->declBit(c+11177,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul acbc_rdy", false,-1);
        vcdp->declBit(c+11185,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul ab_rdy", false,-1);
        vcdp->declBit(c+11193,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul sab_rdy", false,-1);
        vcdp->declBit(c+11201,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m1_recv_rdy", false,-1);
        vcdp->declBit(c+11209,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m2_recv_rdy", false,-1);
        vcdp->declBit(c+11217,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m3_recv_rdy", false,-1);
        vcdp->declBus(c+11225,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul act", false,-1, 31,0);
        vcdp->declBus(c+11233,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul art", false,-1, 31,0);
        vcdp->declBus(c+11241,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul bct", false,-1, 31,0);
        vcdp->declBus(c+11249,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul brt", false,-1, 31,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m1 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m1 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m1 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m1 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m1 reset", false,-1);
        vcdp->declBit(c+11193,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m1 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m1 send_rdy", false,-1);
        vcdp->declBus(c+11233,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m1 a", false,-1, 31,0);
        vcdp->declBus(c+11249,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m1 b", false,-1, 31,0);
        vcdp->declBus(c+11129,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m1 c", false,-1, 31,0);
        vcdp->declBit(c+11169,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m1 send_val", false,-1);
        vcdp->declBit(c+11201,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m1 recv_rdy", false,-1);
        vcdp->declBus(c+11257,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m1 hb", false,-1, 31,0);
        vcdp->declBus(c+14321,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m1 hc", false,-1, 31,0);
        vcdp->declQuad(c+11265,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m1 ha", false,-1, 47,0);
        vcdp->declBit(c+11281,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m1 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m1 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m1 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m1 mult sign", false,-1, 31,0);
        vcdp->declBus(c+11257,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m1 mult b", false,-1, 31,0);
        vcdp->declQuad(c+11265,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m1 mult a", false,-1, 47,0);
        vcdp->declBit(c+11281,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m1 mult rdy", false,-1);
        vcdp->declQuad(c+3097,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m1 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+3113,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m1 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m2 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m2 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m2 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m2 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m2 reset", false,-1);
        vcdp->declBit(c+11193,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m2 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m2 send_rdy", false,-1);
        vcdp->declBus(c+11225,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m2 a", false,-1, 31,0);
        vcdp->declBus(c+11241,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m2 b", false,-1, 31,0);
        vcdp->declBus(c+11137,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m2 c", false,-1, 31,0);
        vcdp->declBit(c+11177,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m2 send_val", false,-1);
        vcdp->declBit(c+11209,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m2 recv_rdy", false,-1);
        vcdp->declBus(c+11289,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m2 hb", false,-1, 31,0);
        vcdp->declBus(c+14329,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m2 hc", false,-1, 31,0);
        vcdp->declQuad(c+11297,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m2 ha", false,-1, 47,0);
        vcdp->declBit(c+11313,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m2 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m2 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m2 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m2 mult sign", false,-1, 31,0);
        vcdp->declBus(c+11289,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m2 mult b", false,-1, 31,0);
        vcdp->declQuad(c+11297,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m2 mult a", false,-1, 47,0);
        vcdp->declBit(c+11313,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m2 mult rdy", false,-1);
        vcdp->declQuad(c+3129,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m2 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+3145,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m2 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m3 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m3 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m3 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m3 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m3 reset", false,-1);
        vcdp->declBit(c+11193,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m3 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m3 send_rdy", false,-1);
        vcdp->declBus(c+11153,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m3 a", false,-1, 31,0);
        vcdp->declBus(c+11161,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m3 b", false,-1, 31,0);
        vcdp->declBus(c+11145,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m3 c", false,-1, 31,0);
        vcdp->declBit(c+11185,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m3 send_val", false,-1);
        vcdp->declBit(c+11217,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m3 recv_rdy", false,-1);
        vcdp->declBus(c+11321,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m3 hb", false,-1, 31,0);
        vcdp->declBus(c+14337,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m3 hc", false,-1, 31,0);
        vcdp->declQuad(c+11329,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m3 ha", false,-1, 47,0);
        vcdp->declBit(c+11345,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m3 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m3 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m3 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m3 mult sign", false,-1, 31,0);
        vcdp->declBus(c+11321,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m3 mult b", false,-1, 31,0);
        vcdp->declQuad(c+11329,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m3 mult a", false,-1, 47,0);
        vcdp->declBit(c+11345,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m3 mult rdy", false,-1);
        vcdp->declQuad(c+3161,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m3 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+3177,"CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m3 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in mult", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in reset", false,-1);
        vcdp->declBit(c+8337,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in recv_val", false,-1);
        vcdp->declBit(c+8345,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in send_rdy", false,-1);
        vcdp->declBus(c+8353,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in ar", false,-1, 31,0);
        vcdp->declBus(c+3193,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in ac", false,-1, 31,0);
        vcdp->declBus(c+8361,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in br", false,-1, 31,0);
        vcdp->declBus(c+3201,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in bc", false,-1, 31,0);
        vcdp->declBus(c+561,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in wr", false,-1, 31,0);
        vcdp->declBus(c+569,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in wc", false,-1, 31,0);
        vcdp->declBit(c+11353,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in send_val", false,-1);
        vcdp->declBit(c+11361,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in recv_rdy", false,-1);
        vcdp->declBus(c+11369,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in cr", false,-1, 31,0);
        vcdp->declBus(c+11377,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in cc", false,-1, 31,0);
        vcdp->declBus(c+11385,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in dr", false,-1, 31,0);
        vcdp->declBus(c+11393,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in dc", false,-1, 31,0);
        vcdp->declBit(c+11401,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in mul_rdy", false,-1);
        vcdp->declBus(c+3209,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in tr", false,-1, 31,0);
        vcdp->declBus(c+3217,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in tc", false,-1, 31,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul d", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul reset", false,-1);
        vcdp->declBit(c+8337,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul send_rdy", false,-1);
        vcdp->declBus(c+8361,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul ar", false,-1, 31,0);
        vcdp->declBus(c+3201,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul ac", false,-1, 31,0);
        vcdp->declBus(c+561,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul br", false,-1, 31,0);
        vcdp->declBus(c+569,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul bc", false,-1, 31,0);
        vcdp->declBit(c+11401,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul send_val", false,-1);
        vcdp->declBit(c+3225,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul recv_rdy", false,-1);
        vcdp->declBus(c+3209,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul cr", false,-1, 31,0);
        vcdp->declBus(c+3217,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul cc", false,-1, 31,0);
        vcdp->declBus(c+11409,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul arbr", false,-1, 31,0);
        vcdp->declBus(c+11417,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul acbc", false,-1, 31,0);
        vcdp->declBus(c+11425,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul ab", false,-1, 31,0);
        vcdp->declBus(c+11433,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul a", false,-1, 31,0);
        vcdp->declBus(c+11441,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul b", false,-1, 31,0);
        vcdp->declBit(c+11449,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul arbr_rdy", false,-1);
        vcdp->declBit(c+11457,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul acbc_rdy", false,-1);
        vcdp->declBit(c+11465,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul ab_rdy", false,-1);
        vcdp->declBit(c+11473,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul sab_rdy", false,-1);
        vcdp->declBit(c+11481,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m1_recv_rdy", false,-1);
        vcdp->declBit(c+11489,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m2_recv_rdy", false,-1);
        vcdp->declBit(c+11497,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m3_recv_rdy", false,-1);
        vcdp->declBus(c+11505,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul act", false,-1, 31,0);
        vcdp->declBus(c+11513,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul art", false,-1, 31,0);
        vcdp->declBus(c+11521,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul bct", false,-1, 31,0);
        vcdp->declBus(c+11529,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul brt", false,-1, 31,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m1 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m1 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m1 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m1 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m1 reset", false,-1);
        vcdp->declBit(c+11473,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m1 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m1 send_rdy", false,-1);
        vcdp->declBus(c+11513,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m1 a", false,-1, 31,0);
        vcdp->declBus(c+11529,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m1 b", false,-1, 31,0);
        vcdp->declBus(c+11409,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m1 c", false,-1, 31,0);
        vcdp->declBit(c+11449,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m1 send_val", false,-1);
        vcdp->declBit(c+11481,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m1 recv_rdy", false,-1);
        vcdp->declBus(c+11537,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m1 hb", false,-1, 31,0);
        vcdp->declBus(c+14345,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m1 hc", false,-1, 31,0);
        vcdp->declQuad(c+11545,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m1 ha", false,-1, 47,0);
        vcdp->declBit(c+11561,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m1 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m1 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m1 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m1 mult sign", false,-1, 31,0);
        vcdp->declBus(c+11537,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m1 mult b", false,-1, 31,0);
        vcdp->declQuad(c+11545,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m1 mult a", false,-1, 47,0);
        vcdp->declBit(c+11561,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m1 mult rdy", false,-1);
        vcdp->declQuad(c+3233,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m1 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+3249,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m1 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m2 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m2 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m2 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m2 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m2 reset", false,-1);
        vcdp->declBit(c+11473,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m2 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m2 send_rdy", false,-1);
        vcdp->declBus(c+11505,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m2 a", false,-1, 31,0);
        vcdp->declBus(c+11521,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m2 b", false,-1, 31,0);
        vcdp->declBus(c+11417,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m2 c", false,-1, 31,0);
        vcdp->declBit(c+11457,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m2 send_val", false,-1);
        vcdp->declBit(c+11489,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m2 recv_rdy", false,-1);
        vcdp->declBus(c+11569,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m2 hb", false,-1, 31,0);
        vcdp->declBus(c+14353,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m2 hc", false,-1, 31,0);
        vcdp->declQuad(c+11577,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m2 ha", false,-1, 47,0);
        vcdp->declBit(c+11593,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m2 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m2 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m2 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m2 mult sign", false,-1, 31,0);
        vcdp->declBus(c+11569,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m2 mult b", false,-1, 31,0);
        vcdp->declQuad(c+11577,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m2 mult a", false,-1, 47,0);
        vcdp->declBit(c+11593,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m2 mult rdy", false,-1);
        vcdp->declQuad(c+3265,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m2 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+3281,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m2 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m3 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m3 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m3 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m3 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m3 reset", false,-1);
        vcdp->declBit(c+11473,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m3 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m3 send_rdy", false,-1);
        vcdp->declBus(c+11433,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m3 a", false,-1, 31,0);
        vcdp->declBus(c+11441,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m3 b", false,-1, 31,0);
        vcdp->declBus(c+11425,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m3 c", false,-1, 31,0);
        vcdp->declBit(c+11465,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m3 send_val", false,-1);
        vcdp->declBit(c+11497,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m3 recv_rdy", false,-1);
        vcdp->declBus(c+11601,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m3 hb", false,-1, 31,0);
        vcdp->declBus(c+14361,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m3 hc", false,-1, 31,0);
        vcdp->declQuad(c+11609,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m3 ha", false,-1, 47,0);
        vcdp->declBit(c+11625,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m3 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m3 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m3 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m3 mult sign", false,-1, 31,0);
        vcdp->declBus(c+11601,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m3 mult b", false,-1, 31,0);
        vcdp->declQuad(c+11609,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m3 mult a", false,-1, 47,0);
        vcdp->declBit(c+11625,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m3 mult rdy", false,-1);
        vcdp->declQuad(c+3297,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m3 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+3313,"CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m3 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] xbar_out_1 BIT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+14097,"CombinationalFFT v comb_fft genblk3[1] xbar_out_1 SIZE_FFT", false,-1, 31,0);
        vcdp->declBus(c+14265,"CombinationalFFT v comb_fft genblk3[1] xbar_out_1 STAGE_FFT", false,-1, 31,0);
        vcdp->declBus(c+14241,"CombinationalFFT v comb_fft genblk3[1] xbar_out_1 FRONT", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+3329+i*1,"CombinationalFFT v comb_fft genblk3[1] xbar_out_1 recv_real", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+3393+i*1,"CombinationalFFT v comb_fft genblk3[1] xbar_out_1 recv_imaginary", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+8369+i*1,"CombinationalFFT v comb_fft genblk3[1] xbar_out_1 recv_val", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+8433+i*1,"CombinationalFFT v comb_fft genblk3[1] xbar_out_1 recv_rdy", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+3457+i*1,"CombinationalFFT v comb_fft genblk3[1] xbar_out_1 send_real", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+3521+i*1,"CombinationalFFT v comb_fft genblk3[1] xbar_out_1 send_imaginary", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+8497+i*1,"CombinationalFFT v comb_fft genblk3[1] xbar_out_1 send_val", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+8561+i*1,"CombinationalFFT v comb_fft genblk3[1] xbar_out_1 send_rdy", true,(i+0));}}
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[1] twiddle_generator BIT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[1] twiddle_generator DECIMAL_PT", false,-1, 31,0);
        vcdp->declBus(c+14097,"CombinationalFFT v comb_fft genblk3[1] twiddle_generator SIZE_FFT", false,-1, 31,0);
        vcdp->declBus(c+14265,"CombinationalFFT v comb_fft genblk3[1] twiddle_generator STAGE_FFT", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+577+i*1,"CombinationalFFT v comb_fft genblk3[1] twiddle_generator sine_wave_in", true,(i+0), 31,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+641+i*1,"CombinationalFFT v comb_fft genblk3[1] twiddle_generator twiddle_real", true,(i+0), 31,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+673+i*1,"CombinationalFFT v comb_fft genblk3[1] twiddle_generator twiddle_imaginary", true,(i+0), 31,0);}}
        vcdp->declBus(c+14249,"CombinationalFFT v comb_fft genblk3[1] twiddle_generator trace", false,-1, 31,0);
        vcdp->declBus(c+14369,"CombinationalFFT v comb_fft genblk3[1] twiddle_generator trace2", false,-1, 31,0);
        vcdp->declBus(c+14257,"CombinationalFFT v comb_fft genblk3[1] twiddle_generator trace3", false,-1, 31,0);
        vcdp->declBus(c+14377,"CombinationalFFT v comb_fft genblk3[1] twiddle_generator trace4", false,-1, 31,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] xbar_in_1 BIT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+14097,"CombinationalFFT v comb_fft genblk3[2] xbar_in_1 SIZE_FFT", false,-1, 31,0);
        vcdp->declBus(c+14385,"CombinationalFFT v comb_fft genblk3[2] xbar_in_1 STAGE_FFT", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[2] xbar_in_1 FRONT", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+8625+i*1,"CombinationalFFT v comb_fft genblk3[2] xbar_in_1 recv_real", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+3585+i*1,"CombinationalFFT v comb_fft genblk3[2] xbar_in_1 recv_imaginary", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+8689+i*1,"CombinationalFFT v comb_fft genblk3[2] xbar_in_1 recv_val", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+8753+i*1,"CombinationalFFT v comb_fft genblk3[2] xbar_in_1 recv_rdy", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+8817+i*1,"CombinationalFFT v comb_fft genblk3[2] xbar_in_1 send_real", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+3649+i*1,"CombinationalFFT v comb_fft genblk3[2] xbar_in_1 send_imaginary", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+8881+i*1,"CombinationalFFT v comb_fft genblk3[2] xbar_in_1 send_val", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+8945+i*1,"CombinationalFFT v comb_fft genblk3[2] xbar_in_1 send_rdy", true,(i+0));}}
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in mult", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in reset", false,-1);
        vcdp->declBit(c+9009,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in recv_val", false,-1);
        vcdp->declBit(c+9017,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in send_rdy", false,-1);
        vcdp->declBus(c+9025,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in ar", false,-1, 31,0);
        vcdp->declBus(c+3713,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in ac", false,-1, 31,0);
        vcdp->declBus(c+9033,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in br", false,-1, 31,0);
        vcdp->declBus(c+3721,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in bc", false,-1, 31,0);
        vcdp->declBus(c+705,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in wr", false,-1, 31,0);
        vcdp->declBus(c+713,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in wc", false,-1, 31,0);
        vcdp->declBit(c+11633,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in send_val", false,-1);
        vcdp->declBit(c+11641,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in recv_rdy", false,-1);
        vcdp->declBus(c+11649,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in cr", false,-1, 31,0);
        vcdp->declBus(c+11657,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in cc", false,-1, 31,0);
        vcdp->declBus(c+11665,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in dr", false,-1, 31,0);
        vcdp->declBus(c+11673,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in dc", false,-1, 31,0);
        vcdp->declBit(c+11681,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in mul_rdy", false,-1);
        vcdp->declBus(c+3729,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in tr", false,-1, 31,0);
        vcdp->declBus(c+3737,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in tc", false,-1, 31,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul d", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul reset", false,-1);
        vcdp->declBit(c+9009,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul send_rdy", false,-1);
        vcdp->declBus(c+9033,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul ar", false,-1, 31,0);
        vcdp->declBus(c+3721,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul ac", false,-1, 31,0);
        vcdp->declBus(c+705,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul br", false,-1, 31,0);
        vcdp->declBus(c+713,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul bc", false,-1, 31,0);
        vcdp->declBit(c+11681,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul send_val", false,-1);
        vcdp->declBit(c+3745,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul recv_rdy", false,-1);
        vcdp->declBus(c+3729,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul cr", false,-1, 31,0);
        vcdp->declBus(c+3737,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul cc", false,-1, 31,0);
        vcdp->declBus(c+11689,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul arbr", false,-1, 31,0);
        vcdp->declBus(c+11697,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul acbc", false,-1, 31,0);
        vcdp->declBus(c+11705,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul ab", false,-1, 31,0);
        vcdp->declBus(c+11713,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul a", false,-1, 31,0);
        vcdp->declBus(c+11721,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul b", false,-1, 31,0);
        vcdp->declBit(c+11729,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul arbr_rdy", false,-1);
        vcdp->declBit(c+11737,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul acbc_rdy", false,-1);
        vcdp->declBit(c+11745,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul ab_rdy", false,-1);
        vcdp->declBit(c+11753,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul sab_rdy", false,-1);
        vcdp->declBit(c+11761,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m1_recv_rdy", false,-1);
        vcdp->declBit(c+11769,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m2_recv_rdy", false,-1);
        vcdp->declBit(c+11777,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m3_recv_rdy", false,-1);
        vcdp->declBus(c+11785,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul act", false,-1, 31,0);
        vcdp->declBus(c+11793,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul art", false,-1, 31,0);
        vcdp->declBus(c+11801,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul bct", false,-1, 31,0);
        vcdp->declBus(c+11809,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul brt", false,-1, 31,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m1 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m1 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m1 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m1 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m1 reset", false,-1);
        vcdp->declBit(c+11753,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m1 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m1 send_rdy", false,-1);
        vcdp->declBus(c+11793,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m1 a", false,-1, 31,0);
        vcdp->declBus(c+11809,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m1 b", false,-1, 31,0);
        vcdp->declBus(c+11689,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m1 c", false,-1, 31,0);
        vcdp->declBit(c+11729,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m1 send_val", false,-1);
        vcdp->declBit(c+11761,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m1 recv_rdy", false,-1);
        vcdp->declBus(c+11817,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m1 hb", false,-1, 31,0);
        vcdp->declBus(c+14393,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m1 hc", false,-1, 31,0);
        vcdp->declQuad(c+11825,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m1 ha", false,-1, 47,0);
        vcdp->declBit(c+11841,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m1 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m1 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m1 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m1 mult sign", false,-1, 31,0);
        vcdp->declBus(c+11817,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m1 mult b", false,-1, 31,0);
        vcdp->declQuad(c+11825,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m1 mult a", false,-1, 47,0);
        vcdp->declBit(c+11841,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m1 mult rdy", false,-1);
        vcdp->declQuad(c+3753,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m1 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+3769,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m1 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m2 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m2 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m2 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m2 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m2 reset", false,-1);
        vcdp->declBit(c+11753,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m2 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m2 send_rdy", false,-1);
        vcdp->declBus(c+11785,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m2 a", false,-1, 31,0);
        vcdp->declBus(c+11801,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m2 b", false,-1, 31,0);
        vcdp->declBus(c+11697,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m2 c", false,-1, 31,0);
        vcdp->declBit(c+11737,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m2 send_val", false,-1);
        vcdp->declBit(c+11769,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m2 recv_rdy", false,-1);
        vcdp->declBus(c+11849,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m2 hb", false,-1, 31,0);
        vcdp->declBus(c+14401,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m2 hc", false,-1, 31,0);
        vcdp->declQuad(c+11857,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m2 ha", false,-1, 47,0);
        vcdp->declBit(c+11873,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m2 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m2 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m2 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m2 mult sign", false,-1, 31,0);
        vcdp->declBus(c+11849,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m2 mult b", false,-1, 31,0);
        vcdp->declQuad(c+11857,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m2 mult a", false,-1, 47,0);
        vcdp->declBit(c+11873,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m2 mult rdy", false,-1);
        vcdp->declQuad(c+3785,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m2 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+3801,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m2 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m3 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m3 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m3 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m3 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m3 reset", false,-1);
        vcdp->declBit(c+11753,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m3 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m3 send_rdy", false,-1);
        vcdp->declBus(c+11713,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m3 a", false,-1, 31,0);
        vcdp->declBus(c+11721,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m3 b", false,-1, 31,0);
        vcdp->declBus(c+11705,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m3 c", false,-1, 31,0);
        vcdp->declBit(c+11745,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m3 send_val", false,-1);
        vcdp->declBit(c+11777,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m3 recv_rdy", false,-1);
        vcdp->declBus(c+11881,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m3 hb", false,-1, 31,0);
        vcdp->declBus(c+14409,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m3 hc", false,-1, 31,0);
        vcdp->declQuad(c+11889,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m3 ha", false,-1, 47,0);
        vcdp->declBit(c+11905,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m3 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m3 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m3 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m3 mult sign", false,-1, 31,0);
        vcdp->declBus(c+11881,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m3 mult b", false,-1, 31,0);
        vcdp->declQuad(c+11889,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m3 mult a", false,-1, 47,0);
        vcdp->declBit(c+11905,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m3 mult rdy", false,-1);
        vcdp->declQuad(c+3817,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m3 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+3833,"CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m3 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in mult", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in reset", false,-1);
        vcdp->declBit(c+9041,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in recv_val", false,-1);
        vcdp->declBit(c+9049,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in send_rdy", false,-1);
        vcdp->declBus(c+9057,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in ar", false,-1, 31,0);
        vcdp->declBus(c+3849,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in ac", false,-1, 31,0);
        vcdp->declBus(c+9065,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in br", false,-1, 31,0);
        vcdp->declBus(c+3857,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in bc", false,-1, 31,0);
        vcdp->declBus(c+721,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in wr", false,-1, 31,0);
        vcdp->declBus(c+729,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in wc", false,-1, 31,0);
        vcdp->declBit(c+11913,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in send_val", false,-1);
        vcdp->declBit(c+11921,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in recv_rdy", false,-1);
        vcdp->declBus(c+11929,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in cr", false,-1, 31,0);
        vcdp->declBus(c+11937,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in cc", false,-1, 31,0);
        vcdp->declBus(c+11945,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in dr", false,-1, 31,0);
        vcdp->declBus(c+11953,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in dc", false,-1, 31,0);
        vcdp->declBit(c+11961,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in mul_rdy", false,-1);
        vcdp->declBus(c+3865,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in tr", false,-1, 31,0);
        vcdp->declBus(c+3873,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in tc", false,-1, 31,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul d", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul reset", false,-1);
        vcdp->declBit(c+9041,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul send_rdy", false,-1);
        vcdp->declBus(c+9065,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul ar", false,-1, 31,0);
        vcdp->declBus(c+3857,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul ac", false,-1, 31,0);
        vcdp->declBus(c+721,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul br", false,-1, 31,0);
        vcdp->declBus(c+729,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul bc", false,-1, 31,0);
        vcdp->declBit(c+11961,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul send_val", false,-1);
        vcdp->declBit(c+3881,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul recv_rdy", false,-1);
        vcdp->declBus(c+3865,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul cr", false,-1, 31,0);
        vcdp->declBus(c+3873,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul cc", false,-1, 31,0);
        vcdp->declBus(c+11969,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul arbr", false,-1, 31,0);
        vcdp->declBus(c+11977,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul acbc", false,-1, 31,0);
        vcdp->declBus(c+11985,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul ab", false,-1, 31,0);
        vcdp->declBus(c+11993,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul a", false,-1, 31,0);
        vcdp->declBus(c+12001,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul b", false,-1, 31,0);
        vcdp->declBit(c+12009,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul arbr_rdy", false,-1);
        vcdp->declBit(c+12017,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul acbc_rdy", false,-1);
        vcdp->declBit(c+12025,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul ab_rdy", false,-1);
        vcdp->declBit(c+12033,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul sab_rdy", false,-1);
        vcdp->declBit(c+12041,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m1_recv_rdy", false,-1);
        vcdp->declBit(c+12049,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m2_recv_rdy", false,-1);
        vcdp->declBit(c+12057,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m3_recv_rdy", false,-1);
        vcdp->declBus(c+12065,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul act", false,-1, 31,0);
        vcdp->declBus(c+12073,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul art", false,-1, 31,0);
        vcdp->declBus(c+12081,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul bct", false,-1, 31,0);
        vcdp->declBus(c+12089,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul brt", false,-1, 31,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m1 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m1 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m1 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m1 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m1 reset", false,-1);
        vcdp->declBit(c+12033,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m1 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m1 send_rdy", false,-1);
        vcdp->declBus(c+12073,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m1 a", false,-1, 31,0);
        vcdp->declBus(c+12089,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m1 b", false,-1, 31,0);
        vcdp->declBus(c+11969,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m1 c", false,-1, 31,0);
        vcdp->declBit(c+12009,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m1 send_val", false,-1);
        vcdp->declBit(c+12041,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m1 recv_rdy", false,-1);
        vcdp->declBus(c+12097,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m1 hb", false,-1, 31,0);
        vcdp->declBus(c+14417,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m1 hc", false,-1, 31,0);
        vcdp->declQuad(c+12105,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m1 ha", false,-1, 47,0);
        vcdp->declBit(c+12121,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m1 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m1 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m1 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m1 mult sign", false,-1, 31,0);
        vcdp->declBus(c+12097,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m1 mult b", false,-1, 31,0);
        vcdp->declQuad(c+12105,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m1 mult a", false,-1, 47,0);
        vcdp->declBit(c+12121,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m1 mult rdy", false,-1);
        vcdp->declQuad(c+3889,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m1 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+3905,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m1 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m2 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m2 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m2 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m2 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m2 reset", false,-1);
        vcdp->declBit(c+12033,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m2 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m2 send_rdy", false,-1);
        vcdp->declBus(c+12065,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m2 a", false,-1, 31,0);
        vcdp->declBus(c+12081,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m2 b", false,-1, 31,0);
        vcdp->declBus(c+11977,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m2 c", false,-1, 31,0);
        vcdp->declBit(c+12017,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m2 send_val", false,-1);
        vcdp->declBit(c+12049,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m2 recv_rdy", false,-1);
        vcdp->declBus(c+12129,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m2 hb", false,-1, 31,0);
        vcdp->declBus(c+14425,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m2 hc", false,-1, 31,0);
        vcdp->declQuad(c+12137,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m2 ha", false,-1, 47,0);
        vcdp->declBit(c+12153,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m2 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m2 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m2 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m2 mult sign", false,-1, 31,0);
        vcdp->declBus(c+12129,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m2 mult b", false,-1, 31,0);
        vcdp->declQuad(c+12137,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m2 mult a", false,-1, 47,0);
        vcdp->declBit(c+12153,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m2 mult rdy", false,-1);
        vcdp->declQuad(c+3921,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m2 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+3937,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m2 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m3 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m3 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m3 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m3 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m3 reset", false,-1);
        vcdp->declBit(c+12033,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m3 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m3 send_rdy", false,-1);
        vcdp->declBus(c+11993,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m3 a", false,-1, 31,0);
        vcdp->declBus(c+12001,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m3 b", false,-1, 31,0);
        vcdp->declBus(c+11985,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m3 c", false,-1, 31,0);
        vcdp->declBit(c+12025,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m3 send_val", false,-1);
        vcdp->declBit(c+12057,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m3 recv_rdy", false,-1);
        vcdp->declBus(c+12161,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m3 hb", false,-1, 31,0);
        vcdp->declBus(c+14433,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m3 hc", false,-1, 31,0);
        vcdp->declQuad(c+12169,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m3 ha", false,-1, 47,0);
        vcdp->declBit(c+12185,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m3 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m3 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m3 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m3 mult sign", false,-1, 31,0);
        vcdp->declBus(c+12161,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m3 mult b", false,-1, 31,0);
        vcdp->declQuad(c+12169,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m3 mult a", false,-1, 47,0);
        vcdp->declBit(c+12185,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m3 mult rdy", false,-1);
        vcdp->declQuad(c+3953,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m3 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+3969,"CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m3 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in mult", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in reset", false,-1);
        vcdp->declBit(c+9073,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in recv_val", false,-1);
        vcdp->declBit(c+9081,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in send_rdy", false,-1);
        vcdp->declBus(c+9089,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in ar", false,-1, 31,0);
        vcdp->declBus(c+3985,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in ac", false,-1, 31,0);
        vcdp->declBus(c+9097,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in br", false,-1, 31,0);
        vcdp->declBus(c+3993,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in bc", false,-1, 31,0);
        vcdp->declBus(c+737,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in wr", false,-1, 31,0);
        vcdp->declBus(c+745,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in wc", false,-1, 31,0);
        vcdp->declBit(c+12193,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in send_val", false,-1);
        vcdp->declBit(c+12201,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in recv_rdy", false,-1);
        vcdp->declBus(c+12209,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in cr", false,-1, 31,0);
        vcdp->declBus(c+12217,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in cc", false,-1, 31,0);
        vcdp->declBus(c+12225,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in dr", false,-1, 31,0);
        vcdp->declBus(c+12233,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in dc", false,-1, 31,0);
        vcdp->declBit(c+12241,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in mul_rdy", false,-1);
        vcdp->declBus(c+4001,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in tr", false,-1, 31,0);
        vcdp->declBus(c+4009,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in tc", false,-1, 31,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul d", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul reset", false,-1);
        vcdp->declBit(c+9073,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul send_rdy", false,-1);
        vcdp->declBus(c+9097,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul ar", false,-1, 31,0);
        vcdp->declBus(c+3993,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul ac", false,-1, 31,0);
        vcdp->declBus(c+737,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul br", false,-1, 31,0);
        vcdp->declBus(c+745,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul bc", false,-1, 31,0);
        vcdp->declBit(c+12241,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul send_val", false,-1);
        vcdp->declBit(c+4017,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul recv_rdy", false,-1);
        vcdp->declBus(c+4001,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul cr", false,-1, 31,0);
        vcdp->declBus(c+4009,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul cc", false,-1, 31,0);
        vcdp->declBus(c+12249,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul arbr", false,-1, 31,0);
        vcdp->declBus(c+12257,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul acbc", false,-1, 31,0);
        vcdp->declBus(c+12265,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul ab", false,-1, 31,0);
        vcdp->declBus(c+12273,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul a", false,-1, 31,0);
        vcdp->declBus(c+12281,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul b", false,-1, 31,0);
        vcdp->declBit(c+12289,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul arbr_rdy", false,-1);
        vcdp->declBit(c+12297,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul acbc_rdy", false,-1);
        vcdp->declBit(c+12305,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul ab_rdy", false,-1);
        vcdp->declBit(c+12313,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul sab_rdy", false,-1);
        vcdp->declBit(c+12321,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m1_recv_rdy", false,-1);
        vcdp->declBit(c+12329,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m2_recv_rdy", false,-1);
        vcdp->declBit(c+12337,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m3_recv_rdy", false,-1);
        vcdp->declBus(c+12345,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul act", false,-1, 31,0);
        vcdp->declBus(c+12353,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul art", false,-1, 31,0);
        vcdp->declBus(c+12361,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul bct", false,-1, 31,0);
        vcdp->declBus(c+12369,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul brt", false,-1, 31,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m1 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m1 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m1 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m1 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m1 reset", false,-1);
        vcdp->declBit(c+12313,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m1 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m1 send_rdy", false,-1);
        vcdp->declBus(c+12353,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m1 a", false,-1, 31,0);
        vcdp->declBus(c+12369,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m1 b", false,-1, 31,0);
        vcdp->declBus(c+12249,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m1 c", false,-1, 31,0);
        vcdp->declBit(c+12289,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m1 send_val", false,-1);
        vcdp->declBit(c+12321,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m1 recv_rdy", false,-1);
        vcdp->declBus(c+12377,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m1 hb", false,-1, 31,0);
        vcdp->declBus(c+14441,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m1 hc", false,-1, 31,0);
        vcdp->declQuad(c+12385,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m1 ha", false,-1, 47,0);
        vcdp->declBit(c+12401,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m1 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m1 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m1 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m1 mult sign", false,-1, 31,0);
        vcdp->declBus(c+12377,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m1 mult b", false,-1, 31,0);
        vcdp->declQuad(c+12385,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m1 mult a", false,-1, 47,0);
        vcdp->declBit(c+12401,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m1 mult rdy", false,-1);
        vcdp->declQuad(c+4025,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m1 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+4041,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m1 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m2 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m2 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m2 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m2 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m2 reset", false,-1);
        vcdp->declBit(c+12313,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m2 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m2 send_rdy", false,-1);
        vcdp->declBus(c+12345,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m2 a", false,-1, 31,0);
        vcdp->declBus(c+12361,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m2 b", false,-1, 31,0);
        vcdp->declBus(c+12257,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m2 c", false,-1, 31,0);
        vcdp->declBit(c+12297,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m2 send_val", false,-1);
        vcdp->declBit(c+12329,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m2 recv_rdy", false,-1);
        vcdp->declBus(c+12409,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m2 hb", false,-1, 31,0);
        vcdp->declBus(c+14449,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m2 hc", false,-1, 31,0);
        vcdp->declQuad(c+12417,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m2 ha", false,-1, 47,0);
        vcdp->declBit(c+12433,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m2 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m2 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m2 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m2 mult sign", false,-1, 31,0);
        vcdp->declBus(c+12409,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m2 mult b", false,-1, 31,0);
        vcdp->declQuad(c+12417,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m2 mult a", false,-1, 47,0);
        vcdp->declBit(c+12433,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m2 mult rdy", false,-1);
        vcdp->declQuad(c+4057,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m2 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+4073,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m2 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m3 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m3 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m3 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m3 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m3 reset", false,-1);
        vcdp->declBit(c+12313,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m3 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m3 send_rdy", false,-1);
        vcdp->declBus(c+12273,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m3 a", false,-1, 31,0);
        vcdp->declBus(c+12281,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m3 b", false,-1, 31,0);
        vcdp->declBus(c+12265,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m3 c", false,-1, 31,0);
        vcdp->declBit(c+12305,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m3 send_val", false,-1);
        vcdp->declBit(c+12337,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m3 recv_rdy", false,-1);
        vcdp->declBus(c+12441,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m3 hb", false,-1, 31,0);
        vcdp->declBus(c+14457,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m3 hc", false,-1, 31,0);
        vcdp->declQuad(c+12449,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m3 ha", false,-1, 47,0);
        vcdp->declBit(c+12465,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m3 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m3 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m3 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m3 mult sign", false,-1, 31,0);
        vcdp->declBus(c+12441,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m3 mult b", false,-1, 31,0);
        vcdp->declQuad(c+12449,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m3 mult a", false,-1, 47,0);
        vcdp->declBit(c+12465,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m3 mult rdy", false,-1);
        vcdp->declQuad(c+4089,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m3 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+4105,"CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m3 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in mult", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in reset", false,-1);
        vcdp->declBit(c+9105,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in recv_val", false,-1);
        vcdp->declBit(c+9113,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in send_rdy", false,-1);
        vcdp->declBus(c+9121,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in ar", false,-1, 31,0);
        vcdp->declBus(c+4121,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in ac", false,-1, 31,0);
        vcdp->declBus(c+9129,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in br", false,-1, 31,0);
        vcdp->declBus(c+4129,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in bc", false,-1, 31,0);
        vcdp->declBus(c+753,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in wr", false,-1, 31,0);
        vcdp->declBus(c+761,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in wc", false,-1, 31,0);
        vcdp->declBit(c+12473,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in send_val", false,-1);
        vcdp->declBit(c+12481,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in recv_rdy", false,-1);
        vcdp->declBus(c+12489,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in cr", false,-1, 31,0);
        vcdp->declBus(c+12497,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in cc", false,-1, 31,0);
        vcdp->declBus(c+12505,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in dr", false,-1, 31,0);
        vcdp->declBus(c+12513,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in dc", false,-1, 31,0);
        vcdp->declBit(c+12521,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in mul_rdy", false,-1);
        vcdp->declBus(c+4137,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in tr", false,-1, 31,0);
        vcdp->declBus(c+4145,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in tc", false,-1, 31,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul d", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul reset", false,-1);
        vcdp->declBit(c+9105,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul send_rdy", false,-1);
        vcdp->declBus(c+9129,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul ar", false,-1, 31,0);
        vcdp->declBus(c+4129,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul ac", false,-1, 31,0);
        vcdp->declBus(c+753,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul br", false,-1, 31,0);
        vcdp->declBus(c+761,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul bc", false,-1, 31,0);
        vcdp->declBit(c+12521,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul send_val", false,-1);
        vcdp->declBit(c+4153,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul recv_rdy", false,-1);
        vcdp->declBus(c+4137,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul cr", false,-1, 31,0);
        vcdp->declBus(c+4145,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul cc", false,-1, 31,0);
        vcdp->declBus(c+12529,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul arbr", false,-1, 31,0);
        vcdp->declBus(c+12537,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul acbc", false,-1, 31,0);
        vcdp->declBus(c+12545,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul ab", false,-1, 31,0);
        vcdp->declBus(c+12553,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul a", false,-1, 31,0);
        vcdp->declBus(c+12561,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul b", false,-1, 31,0);
        vcdp->declBit(c+12569,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul arbr_rdy", false,-1);
        vcdp->declBit(c+12577,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul acbc_rdy", false,-1);
        vcdp->declBit(c+12585,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul ab_rdy", false,-1);
        vcdp->declBit(c+12593,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul sab_rdy", false,-1);
        vcdp->declBit(c+12601,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m1_recv_rdy", false,-1);
        vcdp->declBit(c+12609,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m2_recv_rdy", false,-1);
        vcdp->declBit(c+12617,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m3_recv_rdy", false,-1);
        vcdp->declBus(c+12625,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul act", false,-1, 31,0);
        vcdp->declBus(c+12633,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul art", false,-1, 31,0);
        vcdp->declBus(c+12641,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul bct", false,-1, 31,0);
        vcdp->declBus(c+12649,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul brt", false,-1, 31,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m1 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m1 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m1 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m1 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m1 reset", false,-1);
        vcdp->declBit(c+12593,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m1 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m1 send_rdy", false,-1);
        vcdp->declBus(c+12633,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m1 a", false,-1, 31,0);
        vcdp->declBus(c+12649,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m1 b", false,-1, 31,0);
        vcdp->declBus(c+12529,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m1 c", false,-1, 31,0);
        vcdp->declBit(c+12569,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m1 send_val", false,-1);
        vcdp->declBit(c+12601,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m1 recv_rdy", false,-1);
        vcdp->declBus(c+12657,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m1 hb", false,-1, 31,0);
        vcdp->declBus(c+14465,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m1 hc", false,-1, 31,0);
        vcdp->declQuad(c+12665,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m1 ha", false,-1, 47,0);
        vcdp->declBit(c+12681,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m1 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m1 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m1 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m1 mult sign", false,-1, 31,0);
        vcdp->declBus(c+12657,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m1 mult b", false,-1, 31,0);
        vcdp->declQuad(c+12665,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m1 mult a", false,-1, 47,0);
        vcdp->declBit(c+12681,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m1 mult rdy", false,-1);
        vcdp->declQuad(c+4161,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m1 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+4177,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m1 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m2 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m2 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m2 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m2 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m2 reset", false,-1);
        vcdp->declBit(c+12593,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m2 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m2 send_rdy", false,-1);
        vcdp->declBus(c+12625,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m2 a", false,-1, 31,0);
        vcdp->declBus(c+12641,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m2 b", false,-1, 31,0);
        vcdp->declBus(c+12537,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m2 c", false,-1, 31,0);
        vcdp->declBit(c+12577,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m2 send_val", false,-1);
        vcdp->declBit(c+12609,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m2 recv_rdy", false,-1);
        vcdp->declBus(c+12689,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m2 hb", false,-1, 31,0);
        vcdp->declBus(c+14473,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m2 hc", false,-1, 31,0);
        vcdp->declQuad(c+12697,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m2 ha", false,-1, 47,0);
        vcdp->declBit(c+12713,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m2 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m2 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m2 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m2 mult sign", false,-1, 31,0);
        vcdp->declBus(c+12689,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m2 mult b", false,-1, 31,0);
        vcdp->declQuad(c+12697,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m2 mult a", false,-1, 47,0);
        vcdp->declBit(c+12713,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m2 mult rdy", false,-1);
        vcdp->declQuad(c+4193,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m2 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+4209,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m2 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m3 n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m3 d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m3 sign", false,-1, 31,0);
        vcdp->declBit(c+13905,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m3 clk", false,-1);
        vcdp->declBit(c+13913,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m3 reset", false,-1);
        vcdp->declBit(c+12593,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m3 recv_val", false,-1);
        vcdp->declBit(c+14137,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m3 send_rdy", false,-1);
        vcdp->declBus(c+12553,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m3 a", false,-1, 31,0);
        vcdp->declBus(c+12561,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m3 b", false,-1, 31,0);
        vcdp->declBus(c+12545,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m3 c", false,-1, 31,0);
        vcdp->declBit(c+12585,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m3 send_val", false,-1);
        vcdp->declBit(c+12617,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m3 recv_rdy", false,-1);
        vcdp->declBus(c+12721,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m3 hb", false,-1, 31,0);
        vcdp->declBus(c+14481,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m3 hc", false,-1, 31,0);
        vcdp->declQuad(c+12729,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m3 ha", false,-1, 47,0);
        vcdp->declBit(c+12745,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m3 rdy", false,-1);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m3 mult n", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m3 mult d", false,-1, 31,0);
        vcdp->declBus(c+14129,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m3 mult sign", false,-1, 31,0);
        vcdp->declBus(c+12721,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m3 mult b", false,-1, 31,0);
        vcdp->declQuad(c+12729,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m3 mult a", false,-1, 47,0);
        vcdp->declBit(c+12745,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m3 mult rdy", false,-1);
        vcdp->declQuad(c+4225,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m3 mult tmp", false,-1, 47,0);
        vcdp->declQuad(c+4241,"CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m3 mult tt", false,-1, 63,0);
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] xbar_out_1 BIT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+14097,"CombinationalFFT v comb_fft genblk3[2] xbar_out_1 SIZE_FFT", false,-1, 31,0);
        vcdp->declBus(c+14385,"CombinationalFFT v comb_fft genblk3[2] xbar_out_1 STAGE_FFT", false,-1, 31,0);
        vcdp->declBus(c+14241,"CombinationalFFT v comb_fft genblk3[2] xbar_out_1 FRONT", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+4257+i*1,"CombinationalFFT v comb_fft genblk3[2] xbar_out_1 recv_real", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+4321+i*1,"CombinationalFFT v comb_fft genblk3[2] xbar_out_1 recv_imaginary", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+9137+i*1,"CombinationalFFT v comb_fft genblk3[2] xbar_out_1 recv_val", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+9201+i*1,"CombinationalFFT v comb_fft genblk3[2] xbar_out_1 recv_rdy", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+4385+i*1,"CombinationalFFT v comb_fft genblk3[2] xbar_out_1 send_real", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+4449+i*1,"CombinationalFFT v comb_fft genblk3[2] xbar_out_1 send_imaginary", true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+9265+i*1,"CombinationalFFT v comb_fft genblk3[2] xbar_out_1 send_val", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+9329+i*1,"CombinationalFFT v comb_fft genblk3[2] xbar_out_1 send_rdy", true,(i+0));}}
        vcdp->declBus(c+14081,"CombinationalFFT v comb_fft genblk3[2] twiddle_generator BIT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+14089,"CombinationalFFT v comb_fft genblk3[2] twiddle_generator DECIMAL_PT", false,-1, 31,0);
        vcdp->declBus(c+14097,"CombinationalFFT v comb_fft genblk3[2] twiddle_generator SIZE_FFT", false,-1, 31,0);
        vcdp->declBus(c+14385,"CombinationalFFT v comb_fft genblk3[2] twiddle_generator STAGE_FFT", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+769+i*1,"CombinationalFFT v comb_fft genblk3[2] twiddle_generator sine_wave_in", true,(i+0), 31,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+833+i*1,"CombinationalFFT v comb_fft genblk3[2] twiddle_generator twiddle_real", true,(i+0), 31,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+865+i*1,"CombinationalFFT v comb_fft genblk3[2] twiddle_generator twiddle_imaginary", true,(i+0), 31,0);}}
        vcdp->declBus(c+14249,"CombinationalFFT v comb_fft genblk3[2] twiddle_generator trace", false,-1, 31,0);
        vcdp->declBus(c+14489,"CombinationalFFT v comb_fft genblk3[2] twiddle_generator trace2", false,-1, 31,0);
        vcdp->declBus(c+14369,"CombinationalFFT v comb_fft genblk3[2] twiddle_generator trace3", false,-1, 31,0);
        vcdp->declBus(c+14497,"CombinationalFFT v comb_fft genblk3[2] twiddle_generator trace4", false,-1, 31,0);
        vlTOPp->traceInitThis__1__2(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m1 cinI");
        vlTOPp->traceInitThis__1__2(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m1 mult in");
        vlTOPp->traceInitThis__1__3(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m1 ctI");
        vlTOPp->traceInitThis__1__3(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m1 mult out");
        vlTOPp->traceInitThis__1__4(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m2 cinI");
        vlTOPp->traceInitThis__1__4(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m2 mult in");
        vlTOPp->traceInitThis__1__5(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m2 ctI");
        vlTOPp->traceInitThis__1__5(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m2 mult out");
        vlTOPp->traceInitThis__1__6(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m3 cinI");
        vlTOPp->traceInitThis__1__6(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m3 mult in");
        vlTOPp->traceInitThis__1__7(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m3 ctI");
        vlTOPp->traceInitThis__1__7(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[0] bfu_in genblk1 mul m3 mult out");
        vlTOPp->traceInitThis__1__8(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m1 cinI");
        vlTOPp->traceInitThis__1__8(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m1 mult in");
        vlTOPp->traceInitThis__1__9(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m1 ctI");
        vlTOPp->traceInitThis__1__9(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m1 mult out");
        vlTOPp->traceInitThis__1__10(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m2 cinI");
        vlTOPp->traceInitThis__1__10(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m2 mult in");
        vlTOPp->traceInitThis__1__11(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m2 ctI");
        vlTOPp->traceInitThis__1__11(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m2 mult out");
        vlTOPp->traceInitThis__1__12(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m3 cinI");
        vlTOPp->traceInitThis__1__12(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m3 mult in");
        vlTOPp->traceInitThis__1__13(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m3 ctI");
        vlTOPp->traceInitThis__1__13(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[1] bfu_in genblk1 mul m3 mult out");
        vlTOPp->traceInitThis__1__14(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m1 cinI");
        vlTOPp->traceInitThis__1__14(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m1 mult in");
        vlTOPp->traceInitThis__1__15(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m1 ctI");
        vlTOPp->traceInitThis__1__15(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m1 mult out");
        vlTOPp->traceInitThis__1__16(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m2 cinI");
        vlTOPp->traceInitThis__1__16(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m2 mult in");
        vlTOPp->traceInitThis__1__17(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m2 ctI");
        vlTOPp->traceInitThis__1__17(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m2 mult out");
        vlTOPp->traceInitThis__1__18(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m3 cinI");
        vlTOPp->traceInitThis__1__18(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m3 mult in");
        vlTOPp->traceInitThis__1__19(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m3 ctI");
        vlTOPp->traceInitThis__1__19(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[2] bfu_in genblk1 mul m3 mult out");
        vlTOPp->traceInitThis__1__20(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m1 cinI");
        vlTOPp->traceInitThis__1__20(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m1 mult in");
        vlTOPp->traceInitThis__1__21(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m1 ctI");
        vlTOPp->traceInitThis__1__21(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m1 mult out");
        vlTOPp->traceInitThis__1__22(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m2 cinI");
        vlTOPp->traceInitThis__1__22(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m2 mult in");
        vlTOPp->traceInitThis__1__23(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m2 ctI");
        vlTOPp->traceInitThis__1__23(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m2 mult out");
        vlTOPp->traceInitThis__1__24(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m3 cinI");
        vlTOPp->traceInitThis__1__24(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m3 mult in");
        vlTOPp->traceInitThis__1__25(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m3 ctI");
        vlTOPp->traceInitThis__1__25(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[0] genblk1[3] bfu_in genblk1 mul m3 mult out");
        vlTOPp->traceInitThis__1__26(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m1 cinI");
        vlTOPp->traceInitThis__1__26(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m1 mult in");
        vlTOPp->traceInitThis__1__27(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m1 ctI");
        vlTOPp->traceInitThis__1__27(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m1 mult out");
        vlTOPp->traceInitThis__1__28(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m2 cinI");
        vlTOPp->traceInitThis__1__28(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m2 mult in");
        vlTOPp->traceInitThis__1__29(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m2 ctI");
        vlTOPp->traceInitThis__1__29(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m2 mult out");
        vlTOPp->traceInitThis__1__30(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m3 cinI");
        vlTOPp->traceInitThis__1__30(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m3 mult in");
        vlTOPp->traceInitThis__1__31(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m3 ctI");
        vlTOPp->traceInitThis__1__31(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[0] bfu_in genblk1 mul m3 mult out");
        vlTOPp->traceInitThis__1__32(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m1 cinI");
        vlTOPp->traceInitThis__1__32(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m1 mult in");
        vlTOPp->traceInitThis__1__33(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m1 ctI");
        vlTOPp->traceInitThis__1__33(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m1 mult out");
        vlTOPp->traceInitThis__1__34(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m2 cinI");
        vlTOPp->traceInitThis__1__34(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m2 mult in");
        vlTOPp->traceInitThis__1__35(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m2 ctI");
        vlTOPp->traceInitThis__1__35(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m2 mult out");
        vlTOPp->traceInitThis__1__36(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m3 cinI");
        vlTOPp->traceInitThis__1__36(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m3 mult in");
        vlTOPp->traceInitThis__1__37(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m3 ctI");
        vlTOPp->traceInitThis__1__37(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[1] bfu_in genblk1 mul m3 mult out");
        vlTOPp->traceInitThis__1__38(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m1 cinI");
        vlTOPp->traceInitThis__1__38(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m1 mult in");
        vlTOPp->traceInitThis__1__39(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m1 ctI");
        vlTOPp->traceInitThis__1__39(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m1 mult out");
        vlTOPp->traceInitThis__1__40(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m2 cinI");
        vlTOPp->traceInitThis__1__40(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m2 mult in");
        vlTOPp->traceInitThis__1__41(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m2 ctI");
        vlTOPp->traceInitThis__1__41(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m2 mult out");
        vlTOPp->traceInitThis__1__42(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m3 cinI");
        vlTOPp->traceInitThis__1__42(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m3 mult in");
        vlTOPp->traceInitThis__1__43(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m3 ctI");
        vlTOPp->traceInitThis__1__43(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[2] bfu_in genblk1 mul m3 mult out");
        vlTOPp->traceInitThis__1__44(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m1 cinI");
        vlTOPp->traceInitThis__1__44(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m1 mult in");
        vlTOPp->traceInitThis__1__45(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m1 ctI");
        vlTOPp->traceInitThis__1__45(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m1 mult out");
        vlTOPp->traceInitThis__1__46(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m2 cinI");
        vlTOPp->traceInitThis__1__46(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m2 mult in");
        vlTOPp->traceInitThis__1__47(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m2 ctI");
        vlTOPp->traceInitThis__1__47(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m2 mult out");
        vlTOPp->traceInitThis__1__48(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m3 cinI");
        vlTOPp->traceInitThis__1__48(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m3 mult in");
        vlTOPp->traceInitThis__1__49(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m3 ctI");
        vlTOPp->traceInitThis__1__49(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[1] genblk1[3] bfu_in genblk1 mul m3 mult out");
        vlTOPp->traceInitThis__1__50(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m1 cinI");
        vlTOPp->traceInitThis__1__50(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m1 mult in");
        vlTOPp->traceInitThis__1__51(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m1 ctI");
        vlTOPp->traceInitThis__1__51(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m1 mult out");
        vlTOPp->traceInitThis__1__52(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m2 cinI");
        vlTOPp->traceInitThis__1__52(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m2 mult in");
        vlTOPp->traceInitThis__1__53(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m2 ctI");
        vlTOPp->traceInitThis__1__53(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m2 mult out");
        vlTOPp->traceInitThis__1__54(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m3 cinI");
        vlTOPp->traceInitThis__1__54(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m3 mult in");
        vlTOPp->traceInitThis__1__55(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m3 ctI");
        vlTOPp->traceInitThis__1__55(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[0] bfu_in genblk1 mul m3 mult out");
        vlTOPp->traceInitThis__1__56(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m1 cinI");
        vlTOPp->traceInitThis__1__56(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m1 mult in");
        vlTOPp->traceInitThis__1__57(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m1 ctI");
        vlTOPp->traceInitThis__1__57(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m1 mult out");
        vlTOPp->traceInitThis__1__58(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m2 cinI");
        vlTOPp->traceInitThis__1__58(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m2 mult in");
        vlTOPp->traceInitThis__1__59(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m2 ctI");
        vlTOPp->traceInitThis__1__59(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m2 mult out");
        vlTOPp->traceInitThis__1__60(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m3 cinI");
        vlTOPp->traceInitThis__1__60(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m3 mult in");
        vlTOPp->traceInitThis__1__61(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m3 ctI");
        vlTOPp->traceInitThis__1__61(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[1] bfu_in genblk1 mul m3 mult out");
        vlTOPp->traceInitThis__1__62(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m1 cinI");
        vlTOPp->traceInitThis__1__62(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m1 mult in");
        vlTOPp->traceInitThis__1__63(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m1 ctI");
        vlTOPp->traceInitThis__1__63(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m1 mult out");
        vlTOPp->traceInitThis__1__64(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m2 cinI");
        vlTOPp->traceInitThis__1__64(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m2 mult in");
        vlTOPp->traceInitThis__1__65(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m2 ctI");
        vlTOPp->traceInitThis__1__65(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m2 mult out");
        vlTOPp->traceInitThis__1__66(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m3 cinI");
        vlTOPp->traceInitThis__1__66(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m3 mult in");
        vlTOPp->traceInitThis__1__67(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m3 ctI");
        vlTOPp->traceInitThis__1__67(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[2] bfu_in genblk1 mul m3 mult out");
        vlTOPp->traceInitThis__1__68(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m1 cinI");
        vlTOPp->traceInitThis__1__68(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m1 mult in");
        vlTOPp->traceInitThis__1__69(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m1 ctI");
        vlTOPp->traceInitThis__1__69(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m1 mult out");
        vlTOPp->traceInitThis__1__70(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m2 cinI");
        vlTOPp->traceInitThis__1__70(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m2 mult in");
        vlTOPp->traceInitThis__1__71(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m2 ctI");
        vlTOPp->traceInitThis__1__71(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m2 mult out");
        vlTOPp->traceInitThis__1__72(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m3 cinI");
        vlTOPp->traceInitThis__1__72(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m3 mult in");
        vlTOPp->traceInitThis__1__73(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m3 ctI");
        vlTOPp->traceInitThis__1__73(vlSymsp, vcdp, code, "CombinationalFFT v comb_fft genblk3[2] genblk1[3] bfu_in genblk1 mul m3 mult out");
    }
}

void VCombinationalFFT::traceInitThis__1__2(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+12753,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+12769,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__3(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4513,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+12777,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__4(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+12785,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+12801,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__5(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4529,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+12809,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__6(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+12817,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+12833,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__7(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4545,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+12841,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__8(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+12849,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+12865,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__9(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4561,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+12873,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__10(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+12881,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+12897,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__11(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4577,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+12905,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__12(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+12913,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+12929,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__13(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4593,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+12937,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__14(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+12945,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+12961,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__15(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4609,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+12969,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__16(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+12977,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+12993,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__17(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4625,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13001,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__18(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+13009,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13025,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__19(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4641,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13033,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__20(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+13041,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13057,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__21(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4657,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13065,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__22(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+13073,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13089,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__23(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4673,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13097,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__24(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+13105,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13121,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__25(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4689,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13129,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__26(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+13137,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13153,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__27(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4705,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13161,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__28(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+13169,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13185,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__29(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4721,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13193,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__30(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+13201,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13217,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__31(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4737,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13225,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__32(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+13233,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13249,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__33(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4753,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13257,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__34(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+13265,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13281,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__35(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4769,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13289,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__36(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+13297,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13313,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__37(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4785,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13321,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__38(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+13329,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13345,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__39(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4801,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13353,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__40(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+13361,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13377,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__41(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4817,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13385,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__42(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+13393,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13409,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__43(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4833,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13417,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__44(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+13425,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13441,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__45(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4849,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13449,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__46(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+13457,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13473,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__47(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4865,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13481,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__48(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+13489,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13505,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__49(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4881,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13513,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__50(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+13521,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13537,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__51(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4897,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13545,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__52(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+13553,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13569,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__53(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4913,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13577,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__54(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+13585,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13601,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__55(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4929,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13609,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__56(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+13617,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13633,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__57(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4945,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13641,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__58(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+13649,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13665,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__59(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4961,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13673,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__60(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+13681,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13697,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__61(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4977,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13705,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__62(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+13713,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13729,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__63(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+4993,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13737,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__64(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+13745,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13761,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__65(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+5009,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13769,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__66(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+13777,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13793,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__67(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+5025,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13801,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__68(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+13809,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13825,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__69(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+5041,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13833,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__70(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+13841,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13857,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__71(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+5057,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13865,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__72(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+13873,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13889,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceInitThis__1__73(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code, const char* scopep) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+14081,Verilated::catName(scopep,"n"," "), false,-1, 31,0);
        vcdp->declBus(c+14089,Verilated::catName(scopep,"d"," "), false,-1, 31,0);
        vcdp->declQuad(c+5073,Verilated::catName(scopep,"acc"," "), false,-1, 47,0);
        vcdp->declBus(c+13897,Verilated::catName(scopep,"counter"," "), false,-1, 5,0);
    }
}

void VCombinationalFFT::traceFullThis__1(VCombinationalFFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCombinationalFFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__sine_wave_out[0]),32);
        vcdp->fullBus(c+2,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__sine_wave_out[1]),32);
        vcdp->fullBus(c+3,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__sine_wave_out[2]),32);
        vcdp->fullBus(c+4,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__sine_wave_out[3]),32);
        vcdp->fullBus(c+5,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__sine_wave_out[4]),32);
        vcdp->fullBus(c+6,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__sine_wave_out[5]),32);
        vcdp->fullBus(c+7,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__sine_wave_out[6]),32);
        vcdp->fullBus(c+8,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__sine_wave_out[7]),32);
        vcdp->fullBus(c+65,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__twiddle_real[0]),32);
        vcdp->fullBus(c+66,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__twiddle_real[1]),32);
        vcdp->fullBus(c+67,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__twiddle_real[2]),32);
        vcdp->fullBus(c+68,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__twiddle_real[3]),32);
        vcdp->fullBus(c+97,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__twiddle_imaginary[0]),32);
        vcdp->fullBus(c+98,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__twiddle_imaginary[1]),32);
        vcdp->fullBus(c+99,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__twiddle_imaginary[2]),32);
        vcdp->fullBus(c+100,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__twiddle_imaginary[3]),32);
        vcdp->fullBus(c+129,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__twiddle_real[0]),32);
        vcdp->fullBus(c+130,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__twiddle_real[1]),32);
        vcdp->fullBus(c+131,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__twiddle_real[2]),32);
        vcdp->fullBus(c+132,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__twiddle_real[3]),32);
        vcdp->fullBus(c+161,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__twiddle_imaginary[0]),32);
        vcdp->fullBus(c+162,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__twiddle_imaginary[1]),32);
        vcdp->fullBus(c+163,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__twiddle_imaginary[2]),32);
        vcdp->fullBus(c+164,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__twiddle_imaginary[3]),32);
        vcdp->fullBus(c+193,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__twiddle_real[0]),32);
        vcdp->fullBus(c+194,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__twiddle_real[1]),32);
        vcdp->fullBus(c+195,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__twiddle_real[2]),32);
        vcdp->fullBus(c+196,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__twiddle_real[3]),32);
        vcdp->fullBus(c+225,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__twiddle_imaginary[0]),32);
        vcdp->fullBus(c+226,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__twiddle_imaginary[1]),32);
        vcdp->fullBus(c+227,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__twiddle_imaginary[2]),32);
        vcdp->fullBus(c+228,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__twiddle_imaginary[3]),32);
        vcdp->fullBus(c+257,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk1__DOT__SineWave__sine_wave_out[0]),32);
        vcdp->fullBus(c+258,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk1__DOT__SineWave__sine_wave_out[1]),32);
        vcdp->fullBus(c+259,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk1__DOT__SineWave__sine_wave_out[2]),32);
        vcdp->fullBus(c+260,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk1__DOT__SineWave__sine_wave_out[3]),32);
        vcdp->fullBus(c+261,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk1__DOT__SineWave__sine_wave_out[4]),32);
        vcdp->fullBus(c+262,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk1__DOT__SineWave__sine_wave_out[5]),32);
        vcdp->fullBus(c+263,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk1__DOT__SineWave__sine_wave_out[6]),32);
        vcdp->fullBus(c+264,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk1__DOT__SineWave__sine_wave_out[7]),32);
        vcdp->fullBus(c+321,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__twiddle_real
                             [0U]),32);
        vcdp->fullBus(c+329,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__twiddle_imaginary
                             [0U]),32);
        vcdp->fullBus(c+337,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__twiddle_real
                             [1U]),32);
        vcdp->fullBus(c+345,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__twiddle_imaginary
                             [1U]),32);
        vcdp->fullBus(c+353,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__twiddle_real
                             [2U]),32);
        vcdp->fullBus(c+361,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__twiddle_imaginary
                             [2U]),32);
        vcdp->fullBus(c+369,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__twiddle_real
                             [3U]),32);
        vcdp->fullBus(c+377,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__twiddle_imaginary
                             [3U]),32);
        vcdp->fullBus(c+385,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__twiddle_generator__sine_wave_in[0]),32);
        vcdp->fullBus(c+386,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__twiddle_generator__sine_wave_in[1]),32);
        vcdp->fullBus(c+387,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__twiddle_generator__sine_wave_in[2]),32);
        vcdp->fullBus(c+388,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__twiddle_generator__sine_wave_in[3]),32);
        vcdp->fullBus(c+389,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__twiddle_generator__sine_wave_in[4]),32);
        vcdp->fullBus(c+390,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__twiddle_generator__sine_wave_in[5]),32);
        vcdp->fullBus(c+391,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__twiddle_generator__sine_wave_in[6]),32);
        vcdp->fullBus(c+392,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__twiddle_generator__sine_wave_in[7]),32);
        vcdp->fullBus(c+449,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__twiddle_generator__twiddle_real[0]),32);
        vcdp->fullBus(c+450,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__twiddle_generator__twiddle_real[1]),32);
        vcdp->fullBus(c+451,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__twiddle_generator__twiddle_real[2]),32);
        vcdp->fullBus(c+452,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__twiddle_generator__twiddle_real[3]),32);
        vcdp->fullBus(c+481,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__twiddle_generator__twiddle_imaginary[0]),32);
        vcdp->fullBus(c+482,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__twiddle_generator__twiddle_imaginary[1]),32);
        vcdp->fullBus(c+483,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__twiddle_generator__twiddle_imaginary[2]),32);
        vcdp->fullBus(c+484,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__twiddle_generator__twiddle_imaginary[3]),32);
        vcdp->fullBus(c+513,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__twiddle_real
                             [0U]),32);
        vcdp->fullBus(c+521,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__twiddle_imaginary
                             [0U]),32);
        vcdp->fullBus(c+529,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__twiddle_real
                             [1U]),32);
        vcdp->fullBus(c+537,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__twiddle_imaginary
                             [1U]),32);
        vcdp->fullBus(c+545,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__twiddle_real
                             [2U]),32);
        vcdp->fullBus(c+553,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__twiddle_imaginary
                             [2U]),32);
        vcdp->fullBus(c+561,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__twiddle_real
                             [3U]),32);
        vcdp->fullBus(c+569,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__twiddle_imaginary
                             [3U]),32);
        vcdp->fullBus(c+577,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__twiddle_generator__sine_wave_in[0]),32);
        vcdp->fullBus(c+578,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__twiddle_generator__sine_wave_in[1]),32);
        vcdp->fullBus(c+579,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__twiddle_generator__sine_wave_in[2]),32);
        vcdp->fullBus(c+580,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__twiddle_generator__sine_wave_in[3]),32);
        vcdp->fullBus(c+581,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__twiddle_generator__sine_wave_in[4]),32);
        vcdp->fullBus(c+582,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__twiddle_generator__sine_wave_in[5]),32);
        vcdp->fullBus(c+583,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__twiddle_generator__sine_wave_in[6]),32);
        vcdp->fullBus(c+584,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__twiddle_generator__sine_wave_in[7]),32);
        vcdp->fullBus(c+641,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__twiddle_generator__twiddle_real[0]),32);
        vcdp->fullBus(c+642,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__twiddle_generator__twiddle_real[1]),32);
        vcdp->fullBus(c+643,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__twiddle_generator__twiddle_real[2]),32);
        vcdp->fullBus(c+644,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__twiddle_generator__twiddle_real[3]),32);
        vcdp->fullBus(c+673,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__twiddle_generator__twiddle_imaginary[0]),32);
        vcdp->fullBus(c+674,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__twiddle_generator__twiddle_imaginary[1]),32);
        vcdp->fullBus(c+675,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__twiddle_generator__twiddle_imaginary[2]),32);
        vcdp->fullBus(c+676,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__twiddle_generator__twiddle_imaginary[3]),32);
        vcdp->fullBus(c+705,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__twiddle_real
                             [0U]),32);
        vcdp->fullBus(c+713,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__twiddle_imaginary
                             [0U]),32);
        vcdp->fullBus(c+721,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__twiddle_real
                             [1U]),32);
        vcdp->fullBus(c+729,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__twiddle_imaginary
                             [1U]),32);
        vcdp->fullBus(c+737,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__twiddle_real
                             [2U]),32);
        vcdp->fullBus(c+745,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__twiddle_imaginary
                             [2U]),32);
        vcdp->fullBus(c+753,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__twiddle_real
                             [3U]),32);
        vcdp->fullBus(c+761,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__twiddle_imaginary
                             [3U]),32);
        vcdp->fullBus(c+769,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__twiddle_generator__sine_wave_in[0]),32);
        vcdp->fullBus(c+770,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__twiddle_generator__sine_wave_in[1]),32);
        vcdp->fullBus(c+771,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__twiddle_generator__sine_wave_in[2]),32);
        vcdp->fullBus(c+772,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__twiddle_generator__sine_wave_in[3]),32);
        vcdp->fullBus(c+773,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__twiddle_generator__sine_wave_in[4]),32);
        vcdp->fullBus(c+774,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__twiddle_generator__sine_wave_in[5]),32);
        vcdp->fullBus(c+775,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__twiddle_generator__sine_wave_in[6]),32);
        vcdp->fullBus(c+776,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__twiddle_generator__sine_wave_in[7]),32);
        vcdp->fullBus(c+833,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__twiddle_generator__twiddle_real[0]),32);
        vcdp->fullBus(c+834,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__twiddle_generator__twiddle_real[1]),32);
        vcdp->fullBus(c+835,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__twiddle_generator__twiddle_real[2]),32);
        vcdp->fullBus(c+836,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__twiddle_generator__twiddle_real[3]),32);
        vcdp->fullBus(c+865,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__twiddle_generator__twiddle_imaginary[0]),32);
        vcdp->fullBus(c+866,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__twiddle_generator__twiddle_imaginary[1]),32);
        vcdp->fullBus(c+867,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__twiddle_generator__twiddle_imaginary[2]),32);
        vcdp->fullBus(c+868,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__twiddle_generator__twiddle_imaginary[3]),32);
        vcdp->fullBus(c+897,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                             [0U][0U]),32);
        vcdp->fullBus(c+905,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                             [0U][1U]),32);
        vcdp->fullBus(c+913,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                             [0U][2U]),32);
        vcdp->fullBus(c+921,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                             [0U][3U]),32);
        vcdp->fullBus(c+929,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                             [0U][4U]),32);
        vcdp->fullBus(c+937,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                             [0U][5U]),32);
        vcdp->fullBus(c+945,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                             [0U][6U]),32);
        vcdp->fullBus(c+953,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                             [0U][7U]),32);
        vcdp->fullBus(c+961,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                             [1U][0U]),32);
        vcdp->fullBus(c+969,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                             [1U][1U]),32);
        vcdp->fullBus(c+977,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                             [1U][2U]),32);
        vcdp->fullBus(c+985,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                             [1U][3U]),32);
        vcdp->fullBus(c+993,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                             [1U][4U]),32);
        vcdp->fullBus(c+1001,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                              [1U][5U]),32);
        vcdp->fullBus(c+1009,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                              [1U][6U]),32);
        vcdp->fullBus(c+1017,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                              [1U][7U]),32);
        vcdp->fullBus(c+1025,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                              [2U][0U]),32);
        vcdp->fullBus(c+1033,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                              [2U][1U]),32);
        vcdp->fullBus(c+1041,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                              [2U][2U]),32);
        vcdp->fullBus(c+1049,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                              [2U][3U]),32);
        vcdp->fullBus(c+1057,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                              [2U][4U]),32);
        vcdp->fullBus(c+1065,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                              [2U][5U]),32);
        vcdp->fullBus(c+1073,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                              [2U][6U]),32);
        vcdp->fullBus(c+1081,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                              [2U][7U]),32);
        vcdp->fullBus(c+1089,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                              [3U][0U]),32);
        vcdp->fullBus(c+1097,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                              [3U][1U]),32);
        vcdp->fullBus(c+1105,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                              [3U][2U]),32);
        vcdp->fullBus(c+1113,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                              [3U][3U]),32);
        vcdp->fullBus(c+1121,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                              [3U][4U]),32);
        vcdp->fullBus(c+1129,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                              [3U][5U]),32);
        vcdp->fullBus(c+1137,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                              [3U][6U]),32);
        vcdp->fullBus(c+1145,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__complex_msg
                              [3U][7U]),32);
        vcdp->fullBus(c+1153,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_out_real[0]),32);
        vcdp->fullBus(c+1154,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_out_real[1]),32);
        vcdp->fullBus(c+1155,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_out_real[2]),32);
        vcdp->fullBus(c+1156,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_out_real[3]),32);
        vcdp->fullBus(c+1157,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_out_real[4]),32);
        vcdp->fullBus(c+1158,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_out_real[5]),32);
        vcdp->fullBus(c+1159,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_out_real[6]),32);
        vcdp->fullBus(c+1160,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_out_real[7]),32);
        vcdp->fullBus(c+1217,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_imaginary[0]),32);
        vcdp->fullBus(c+1218,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_imaginary[1]),32);
        vcdp->fullBus(c+1219,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_imaginary[2]),32);
        vcdp->fullBus(c+1220,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_imaginary[3]),32);
        vcdp->fullBus(c+1221,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_imaginary[4]),32);
        vcdp->fullBus(c+1222,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_imaginary[5]),32);
        vcdp->fullBus(c+1223,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_imaginary[6]),32);
        vcdp->fullBus(c+1224,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_imaginary[7]),32);
        vcdp->fullBus(c+1281,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_out_imaginary[0]),32);
        vcdp->fullBus(c+1282,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_out_imaginary[1]),32);
        vcdp->fullBus(c+1283,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_out_imaginary[2]),32);
        vcdp->fullBus(c+1284,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_out_imaginary[3]),32);
        vcdp->fullBus(c+1285,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_out_imaginary[4]),32);
        vcdp->fullBus(c+1286,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_out_imaginary[5]),32);
        vcdp->fullBus(c+1287,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_out_imaginary[6]),32);
        vcdp->fullBus(c+1288,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_out_imaginary[7]),32);
        vcdp->fullBus(c+1345,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_out_real[0]),32);
        vcdp->fullBus(c+1346,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_out_real[1]),32);
        vcdp->fullBus(c+1347,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_out_real[2]),32);
        vcdp->fullBus(c+1348,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_out_real[3]),32);
        vcdp->fullBus(c+1349,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_out_real[4]),32);
        vcdp->fullBus(c+1350,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_out_real[5]),32);
        vcdp->fullBus(c+1351,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_out_real[6]),32);
        vcdp->fullBus(c+1352,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_out_real[7]),32);
        vcdp->fullBus(c+1409,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_imaginary[0]),32);
        vcdp->fullBus(c+1410,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_imaginary[1]),32);
        vcdp->fullBus(c+1411,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_imaginary[2]),32);
        vcdp->fullBus(c+1412,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_imaginary[3]),32);
        vcdp->fullBus(c+1413,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_imaginary[4]),32);
        vcdp->fullBus(c+1414,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_imaginary[5]),32);
        vcdp->fullBus(c+1415,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_imaginary[6]),32);
        vcdp->fullBus(c+1416,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_imaginary[7]),32);
        vcdp->fullBus(c+1473,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_out_imaginary[0]),32);
        vcdp->fullBus(c+1474,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_out_imaginary[1]),32);
        vcdp->fullBus(c+1475,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_out_imaginary[2]),32);
        vcdp->fullBus(c+1476,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_out_imaginary[3]),32);
        vcdp->fullBus(c+1477,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_out_imaginary[4]),32);
        vcdp->fullBus(c+1478,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_out_imaginary[5]),32);
        vcdp->fullBus(c+1479,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_out_imaginary[6]),32);
        vcdp->fullBus(c+1480,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_out_imaginary[7]),32);
        vcdp->fullBus(c+1537,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_out_real[0]),32);
        vcdp->fullBus(c+1538,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_out_real[1]),32);
        vcdp->fullBus(c+1539,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_out_real[2]),32);
        vcdp->fullBus(c+1540,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_out_real[3]),32);
        vcdp->fullBus(c+1541,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_out_real[4]),32);
        vcdp->fullBus(c+1542,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_out_real[5]),32);
        vcdp->fullBus(c+1543,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_out_real[6]),32);
        vcdp->fullBus(c+1544,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_out_real[7]),32);
        vcdp->fullBus(c+1601,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_imaginary[0]),32);
        vcdp->fullBus(c+1602,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_imaginary[1]),32);
        vcdp->fullBus(c+1603,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_imaginary[2]),32);
        vcdp->fullBus(c+1604,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_imaginary[3]),32);
        vcdp->fullBus(c+1605,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_imaginary[4]),32);
        vcdp->fullBus(c+1606,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_imaginary[5]),32);
        vcdp->fullBus(c+1607,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_imaginary[6]),32);
        vcdp->fullBus(c+1608,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_imaginary[7]),32);
        vcdp->fullBus(c+1665,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_out_imaginary[0]),32);
        vcdp->fullBus(c+1666,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_out_imaginary[1]),32);
        vcdp->fullBus(c+1667,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_out_imaginary[2]),32);
        vcdp->fullBus(c+1668,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_out_imaginary[3]),32);
        vcdp->fullBus(c+1669,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_out_imaginary[4]),32);
        vcdp->fullBus(c+1670,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_out_imaginary[5]),32);
        vcdp->fullBus(c+1671,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_out_imaginary[6]),32);
        vcdp->fullBus(c+1672,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_out_imaginary[7]),32);
        vcdp->fullBus(c+1729,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_imaginary[0]),32);
        vcdp->fullBus(c+1730,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_imaginary[1]),32);
        vcdp->fullBus(c+1731,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_imaginary[2]),32);
        vcdp->fullBus(c+1732,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_imaginary[3]),32);
        vcdp->fullBus(c+1733,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_imaginary[4]),32);
        vcdp->fullBus(c+1734,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_imaginary[5]),32);
        vcdp->fullBus(c+1735,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_imaginary[6]),32);
        vcdp->fullBus(c+1736,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_imaginary[7]),32);
        vcdp->fullBus(c+1793,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__send_imaginary[0]),32);
        vcdp->fullBus(c+1794,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__send_imaginary[1]),32);
        vcdp->fullBus(c+1795,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__send_imaginary[2]),32);
        vcdp->fullBus(c+1796,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__send_imaginary[3]),32);
        vcdp->fullBus(c+1797,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__send_imaginary[4]),32);
        vcdp->fullBus(c+1798,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__send_imaginary[5]),32);
        vcdp->fullBus(c+1799,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__send_imaginary[6]),32);
        vcdp->fullBus(c+1800,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__send_imaginary[7]),32);
        vcdp->fullBus(c+1857,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_imaginary
                              [0U]),32);
        vcdp->fullBus(c+1865,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_imaginary
                              [1U]),32);
        vcdp->fullBus(c+1873,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__tr),32);
        vcdp->fullBus(c+1881,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__tc),32);
        vcdp->fullBit(c+1889,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__recv_rdy));
        vcdp->fullQuad(c+1897,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+1913,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__mult__DOT__tt),64);
        vcdp->fullQuad(c+1929,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+1945,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__mult__DOT__tt),64);
        vcdp->fullQuad(c+1961,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+1977,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__mult__DOT__tt),64);
        vcdp->fullBus(c+1993,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_imaginary
                              [2U]),32);
        vcdp->fullBus(c+2001,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_imaginary
                              [3U]),32);
        vcdp->fullBus(c+2009,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__tr),32);
        vcdp->fullBus(c+2017,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__tc),32);
        vcdp->fullBit(c+2025,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__recv_rdy));
        vcdp->fullQuad(c+2033,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+2049,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__mult__DOT__tt),64);
        vcdp->fullQuad(c+2065,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+2081,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__mult__DOT__tt),64);
        vcdp->fullQuad(c+2097,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+2113,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__mult__DOT__tt),64);
        vcdp->fullBus(c+2129,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_imaginary
                              [4U]),32);
        vcdp->fullBus(c+2137,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_imaginary
                              [5U]),32);
        vcdp->fullBus(c+2145,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__tr),32);
        vcdp->fullBus(c+2153,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__tc),32);
        vcdp->fullBit(c+2161,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__recv_rdy));
        vcdp->fullQuad(c+2169,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+2185,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__mult__DOT__tt),64);
        vcdp->fullQuad(c+2201,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+2217,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__mult__DOT__tt),64);
        vcdp->fullQuad(c+2233,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+2249,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__mult__DOT__tt),64);
        vcdp->fullBus(c+2265,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_imaginary
                              [6U]),32);
        vcdp->fullBus(c+2273,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_imaginary
                              [7U]),32);
        vcdp->fullBus(c+2281,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__tr),32);
        vcdp->fullBus(c+2289,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__tc),32);
        vcdp->fullBit(c+2297,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__recv_rdy));
        vcdp->fullQuad(c+2305,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+2321,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__mult__DOT__tt),64);
        vcdp->fullQuad(c+2337,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+2353,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__mult__DOT__tt),64);
        vcdp->fullQuad(c+2369,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+2385,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__mult__DOT__tt),64);
        vcdp->fullBus(c+2401,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_real[0]),32);
        vcdp->fullBus(c+2402,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_real[1]),32);
        vcdp->fullBus(c+2403,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_real[2]),32);
        vcdp->fullBus(c+2404,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_real[3]),32);
        vcdp->fullBus(c+2405,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_real[4]),32);
        vcdp->fullBus(c+2406,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_real[5]),32);
        vcdp->fullBus(c+2407,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_real[6]),32);
        vcdp->fullBus(c+2408,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_real[7]),32);
        vcdp->fullBus(c+2465,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_imaginary[0]),32);
        vcdp->fullBus(c+2466,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_imaginary[1]),32);
        vcdp->fullBus(c+2467,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_imaginary[2]),32);
        vcdp->fullBus(c+2468,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_imaginary[3]),32);
        vcdp->fullBus(c+2469,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_imaginary[4]),32);
        vcdp->fullBus(c+2470,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_imaginary[5]),32);
        vcdp->fullBus(c+2471,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_imaginary[6]),32);
        vcdp->fullBus(c+2472,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_imaginary[7]),32);
        vcdp->fullBus(c+2529,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__send_real[0]),32);
        vcdp->fullBus(c+2530,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__send_real[1]),32);
        vcdp->fullBus(c+2531,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__send_real[2]),32);
        vcdp->fullBus(c+2532,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__send_real[3]),32);
        vcdp->fullBus(c+2533,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__send_real[4]),32);
        vcdp->fullBus(c+2534,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__send_real[5]),32);
        vcdp->fullBus(c+2535,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__send_real[6]),32);
        vcdp->fullBus(c+2536,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__send_real[7]),32);
        vcdp->fullBus(c+2593,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__send_imaginary[0]),32);
        vcdp->fullBus(c+2594,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__send_imaginary[1]),32);
        vcdp->fullBus(c+2595,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__send_imaginary[2]),32);
        vcdp->fullBus(c+2596,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__send_imaginary[3]),32);
        vcdp->fullBus(c+2597,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__send_imaginary[4]),32);
        vcdp->fullBus(c+2598,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__send_imaginary[5]),32);
        vcdp->fullBus(c+2599,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__send_imaginary[6]),32);
        vcdp->fullBus(c+2600,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__send_imaginary[7]),32);
        vcdp->fullBus(c+2657,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_imaginary[0]),32);
        vcdp->fullBus(c+2658,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_imaginary[1]),32);
        vcdp->fullBus(c+2659,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_imaginary[2]),32);
        vcdp->fullBus(c+2660,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_imaginary[3]),32);
        vcdp->fullBus(c+2661,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_imaginary[4]),32);
        vcdp->fullBus(c+2662,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_imaginary[5]),32);
        vcdp->fullBus(c+2663,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_imaginary[6]),32);
        vcdp->fullBus(c+2664,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_imaginary[7]),32);
        vcdp->fullBus(c+2721,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__send_imaginary[0]),32);
        vcdp->fullBus(c+2722,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__send_imaginary[1]),32);
        vcdp->fullBus(c+2723,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__send_imaginary[2]),32);
        vcdp->fullBus(c+2724,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__send_imaginary[3]),32);
        vcdp->fullBus(c+2725,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__send_imaginary[4]),32);
        vcdp->fullBus(c+2726,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__send_imaginary[5]),32);
        vcdp->fullBus(c+2727,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__send_imaginary[6]),32);
        vcdp->fullBus(c+2728,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__send_imaginary[7]),32);
        vcdp->fullBus(c+2785,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_imaginary
                              [0U]),32);
        vcdp->fullBus(c+2793,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_imaginary
                              [1U]),32);
        vcdp->fullBus(c+2801,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__tr),32);
        vcdp->fullBus(c+2809,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__tc),32);
        vcdp->fullBit(c+2817,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__recv_rdy));
        vcdp->fullQuad(c+2825,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+2841,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__mult__DOT__tt),64);
        vcdp->fullQuad(c+2857,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+2873,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__mult__DOT__tt),64);
        vcdp->fullQuad(c+2889,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+2905,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__mult__DOT__tt),64);
        vcdp->fullBus(c+2921,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_imaginary
                              [2U]),32);
        vcdp->fullBus(c+2929,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_imaginary
                              [3U]),32);
        vcdp->fullBus(c+2937,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__tr),32);
        vcdp->fullBus(c+2945,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__tc),32);
        vcdp->fullBit(c+2953,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__recv_rdy));
        vcdp->fullQuad(c+2961,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+2977,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__mult__DOT__tt),64);
        vcdp->fullQuad(c+2993,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+3009,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__mult__DOT__tt),64);
        vcdp->fullQuad(c+3025,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+3041,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__mult__DOT__tt),64);
        vcdp->fullBus(c+3057,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_imaginary
                              [4U]),32);
        vcdp->fullBus(c+3065,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_imaginary
                              [5U]),32);
        vcdp->fullBus(c+3073,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__tr),32);
        vcdp->fullBus(c+3081,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__tc),32);
        vcdp->fullBit(c+3089,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__recv_rdy));
        vcdp->fullQuad(c+3097,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+3113,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__mult__DOT__tt),64);
        vcdp->fullQuad(c+3129,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+3145,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__mult__DOT__tt),64);
        vcdp->fullQuad(c+3161,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+3177,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__mult__DOT__tt),64);
        vcdp->fullBus(c+3193,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_imaginary
                              [6U]),32);
        vcdp->fullBus(c+3201,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_imaginary
                              [7U]),32);
        vcdp->fullBus(c+3209,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__tr),32);
        vcdp->fullBus(c+3217,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__tc),32);
        vcdp->fullBit(c+3225,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__recv_rdy));
        vcdp->fullQuad(c+3233,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+3249,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__mult__DOT__tt),64);
        vcdp->fullQuad(c+3265,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+3281,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__mult__DOT__tt),64);
        vcdp->fullQuad(c+3297,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+3313,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__mult__DOT__tt),64);
        vcdp->fullBus(c+3329,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_real[0]),32);
        vcdp->fullBus(c+3330,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_real[1]),32);
        vcdp->fullBus(c+3331,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_real[2]),32);
        vcdp->fullBus(c+3332,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_real[3]),32);
        vcdp->fullBus(c+3333,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_real[4]),32);
        vcdp->fullBus(c+3334,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_real[5]),32);
        vcdp->fullBus(c+3335,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_real[6]),32);
        vcdp->fullBus(c+3336,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_real[7]),32);
        vcdp->fullBus(c+3393,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_imaginary[0]),32);
        vcdp->fullBus(c+3394,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_imaginary[1]),32);
        vcdp->fullBus(c+3395,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_imaginary[2]),32);
        vcdp->fullBus(c+3396,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_imaginary[3]),32);
        vcdp->fullBus(c+3397,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_imaginary[4]),32);
        vcdp->fullBus(c+3398,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_imaginary[5]),32);
        vcdp->fullBus(c+3399,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_imaginary[6]),32);
        vcdp->fullBus(c+3400,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_imaginary[7]),32);
        vcdp->fullBus(c+3457,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__send_real[0]),32);
        vcdp->fullBus(c+3458,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__send_real[1]),32);
        vcdp->fullBus(c+3459,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__send_real[2]),32);
        vcdp->fullBus(c+3460,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__send_real[3]),32);
        vcdp->fullBus(c+3461,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__send_real[4]),32);
        vcdp->fullBus(c+3462,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__send_real[5]),32);
        vcdp->fullBus(c+3463,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__send_real[6]),32);
        vcdp->fullBus(c+3464,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__send_real[7]),32);
        vcdp->fullBus(c+3521,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__send_imaginary[0]),32);
        vcdp->fullBus(c+3522,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__send_imaginary[1]),32);
        vcdp->fullBus(c+3523,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__send_imaginary[2]),32);
        vcdp->fullBus(c+3524,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__send_imaginary[3]),32);
        vcdp->fullBus(c+3525,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__send_imaginary[4]),32);
        vcdp->fullBus(c+3526,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__send_imaginary[5]),32);
        vcdp->fullBus(c+3527,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__send_imaginary[6]),32);
        vcdp->fullBus(c+3528,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__send_imaginary[7]),32);
        vcdp->fullBus(c+3585,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_imaginary[0]),32);
        vcdp->fullBus(c+3586,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_imaginary[1]),32);
        vcdp->fullBus(c+3587,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_imaginary[2]),32);
        vcdp->fullBus(c+3588,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_imaginary[3]),32);
        vcdp->fullBus(c+3589,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_imaginary[4]),32);
        vcdp->fullBus(c+3590,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_imaginary[5]),32);
        vcdp->fullBus(c+3591,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_imaginary[6]),32);
        vcdp->fullBus(c+3592,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_imaginary[7]),32);
        vcdp->fullBus(c+3649,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__send_imaginary[0]),32);
        vcdp->fullBus(c+3650,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__send_imaginary[1]),32);
        vcdp->fullBus(c+3651,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__send_imaginary[2]),32);
        vcdp->fullBus(c+3652,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__send_imaginary[3]),32);
        vcdp->fullBus(c+3653,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__send_imaginary[4]),32);
        vcdp->fullBus(c+3654,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__send_imaginary[5]),32);
        vcdp->fullBus(c+3655,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__send_imaginary[6]),32);
        vcdp->fullBus(c+3656,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__send_imaginary[7]),32);
        vcdp->fullBus(c+3713,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_imaginary
                              [0U]),32);
        vcdp->fullBus(c+3721,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_imaginary
                              [1U]),32);
        vcdp->fullBus(c+3729,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__tr),32);
        vcdp->fullBus(c+3737,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__tc),32);
        vcdp->fullBit(c+3745,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__recv_rdy));
        vcdp->fullQuad(c+3753,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+3769,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__mult__DOT__tt),64);
        vcdp->fullQuad(c+3785,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+3801,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__mult__DOT__tt),64);
        vcdp->fullQuad(c+3817,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+3833,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__mult__DOT__tt),64);
        vcdp->fullBus(c+3849,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_imaginary
                              [2U]),32);
        vcdp->fullBus(c+3857,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_imaginary
                              [3U]),32);
        vcdp->fullBus(c+3865,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__tr),32);
        vcdp->fullBus(c+3873,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__tc),32);
        vcdp->fullBit(c+3881,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__recv_rdy));
        vcdp->fullQuad(c+3889,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+3905,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__mult__DOT__tt),64);
        vcdp->fullQuad(c+3921,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+3937,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__mult__DOT__tt),64);
        vcdp->fullQuad(c+3953,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+3969,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__mult__DOT__tt),64);
        vcdp->fullBus(c+3985,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_imaginary
                              [4U]),32);
        vcdp->fullBus(c+3993,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_imaginary
                              [5U]),32);
        vcdp->fullBus(c+4001,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__tr),32);
        vcdp->fullBus(c+4009,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__tc),32);
        vcdp->fullBit(c+4017,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__recv_rdy));
        vcdp->fullQuad(c+4025,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+4041,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__mult__DOT__tt),64);
        vcdp->fullQuad(c+4057,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+4073,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__mult__DOT__tt),64);
        vcdp->fullQuad(c+4089,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+4105,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__mult__DOT__tt),64);
        vcdp->fullBus(c+4121,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_imaginary
                              [6U]),32);
        vcdp->fullBus(c+4129,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_imaginary
                              [7U]),32);
        vcdp->fullBus(c+4137,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__tr),32);
        vcdp->fullBus(c+4145,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__tc),32);
        vcdp->fullBit(c+4153,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__recv_rdy));
        vcdp->fullQuad(c+4161,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+4177,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__mult__DOT__tt),64);
        vcdp->fullQuad(c+4193,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+4209,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__mult__DOT__tt),64);
        vcdp->fullQuad(c+4225,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__mult__DOT__tmp),48);
        vcdp->fullQuad(c+4241,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__mult__DOT__tt),64);
        vcdp->fullBus(c+4257,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_real[0]),32);
        vcdp->fullBus(c+4258,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_real[1]),32);
        vcdp->fullBus(c+4259,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_real[2]),32);
        vcdp->fullBus(c+4260,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_real[3]),32);
        vcdp->fullBus(c+4261,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_real[4]),32);
        vcdp->fullBus(c+4262,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_real[5]),32);
        vcdp->fullBus(c+4263,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_real[6]),32);
        vcdp->fullBus(c+4264,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_real[7]),32);
        vcdp->fullBus(c+4321,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_imaginary[0]),32);
        vcdp->fullBus(c+4322,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_imaginary[1]),32);
        vcdp->fullBus(c+4323,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_imaginary[2]),32);
        vcdp->fullBus(c+4324,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_imaginary[3]),32);
        vcdp->fullBus(c+4325,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_imaginary[4]),32);
        vcdp->fullBus(c+4326,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_imaginary[5]),32);
        vcdp->fullBus(c+4327,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_imaginary[6]),32);
        vcdp->fullBus(c+4328,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_imaginary[7]),32);
        vcdp->fullBus(c+4385,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__send_real[0]),32);
        vcdp->fullBus(c+4386,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__send_real[1]),32);
        vcdp->fullBus(c+4387,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__send_real[2]),32);
        vcdp->fullBus(c+4388,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__send_real[3]),32);
        vcdp->fullBus(c+4389,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__send_real[4]),32);
        vcdp->fullBus(c+4390,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__send_real[5]),32);
        vcdp->fullBus(c+4391,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__send_real[6]),32);
        vcdp->fullBus(c+4392,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__send_real[7]),32);
        vcdp->fullBus(c+4449,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__send_imaginary[0]),32);
        vcdp->fullBus(c+4450,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__send_imaginary[1]),32);
        vcdp->fullBus(c+4451,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__send_imaginary[2]),32);
        vcdp->fullBus(c+4452,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__send_imaginary[3]),32);
        vcdp->fullBus(c+4453,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__send_imaginary[4]),32);
        vcdp->fullBus(c+4454,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__send_imaginary[5]),32);
        vcdp->fullBus(c+4455,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__send_imaginary[6]),32);
        vcdp->fullBus(c+4456,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__send_imaginary[7]),32);
        vcdp->fullQuad(c+4513,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__ctI.acc),48);
        vcdp->fullQuad(c+4529,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__ctI.acc),48);
        vcdp->fullQuad(c+4545,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__ctI.acc),48);
        vcdp->fullQuad(c+4561,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__ctI.acc),48);
        vcdp->fullQuad(c+4577,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__ctI.acc),48);
        vcdp->fullQuad(c+4593,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__ctI.acc),48);
        vcdp->fullQuad(c+4609,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__ctI.acc),48);
        vcdp->fullQuad(c+4625,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__ctI.acc),48);
        vcdp->fullQuad(c+4641,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__ctI.acc),48);
        vcdp->fullQuad(c+4657,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__ctI.acc),48);
        vcdp->fullQuad(c+4673,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__ctI.acc),48);
        vcdp->fullQuad(c+4689,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__ctI.acc),48);
        vcdp->fullQuad(c+4705,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__ctI.acc),48);
        vcdp->fullQuad(c+4721,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__ctI.acc),48);
        vcdp->fullQuad(c+4737,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__ctI.acc),48);
        vcdp->fullQuad(c+4753,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__ctI.acc),48);
        vcdp->fullQuad(c+4769,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__ctI.acc),48);
        vcdp->fullQuad(c+4785,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__ctI.acc),48);
        vcdp->fullQuad(c+4801,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__ctI.acc),48);
        vcdp->fullQuad(c+4817,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__ctI.acc),48);
        vcdp->fullQuad(c+4833,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__ctI.acc),48);
        vcdp->fullQuad(c+4849,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__ctI.acc),48);
        vcdp->fullQuad(c+4865,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__ctI.acc),48);
        vcdp->fullQuad(c+4881,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__ctI.acc),48);
        vcdp->fullQuad(c+4897,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__ctI.acc),48);
        vcdp->fullQuad(c+4913,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__ctI.acc),48);
        vcdp->fullQuad(c+4929,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__ctI.acc),48);
        vcdp->fullQuad(c+4945,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__ctI.acc),48);
        vcdp->fullQuad(c+4961,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__ctI.acc),48);
        vcdp->fullQuad(c+4977,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__ctI.acc),48);
        vcdp->fullQuad(c+4993,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__ctI.acc),48);
        vcdp->fullQuad(c+5009,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__ctI.acc),48);
        vcdp->fullQuad(c+5025,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__ctI.acc),48);
        vcdp->fullQuad(c+5041,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__ctI.acc),48);
        vcdp->fullQuad(c+5057,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__ctI.acc),48);
        vcdp->fullQuad(c+5073,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__ctI.acc),48);
        vcdp->fullBus(c+5089,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [0U][0U]),32);
        vcdp->fullBus(c+5097,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [0U][1U]),32);
        vcdp->fullBus(c+5105,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [0U][2U]),32);
        vcdp->fullBus(c+5113,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [0U][3U]),32);
        vcdp->fullBus(c+5121,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [0U][4U]),32);
        vcdp->fullBus(c+5129,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [0U][5U]),32);
        vcdp->fullBus(c+5137,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [0U][6U]),32);
        vcdp->fullBus(c+5145,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [0U][7U]),32);
        vcdp->fullBus(c+5153,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [1U][0U]),32);
        vcdp->fullBus(c+5161,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [1U][1U]),32);
        vcdp->fullBus(c+5169,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [1U][2U]),32);
        vcdp->fullBus(c+5177,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [1U][3U]),32);
        vcdp->fullBus(c+5185,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [1U][4U]),32);
        vcdp->fullBus(c+5193,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [1U][5U]),32);
        vcdp->fullBus(c+5201,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [1U][6U]),32);
        vcdp->fullBus(c+5209,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [1U][7U]),32);
        vcdp->fullBus(c+5217,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [2U][0U]),32);
        vcdp->fullBus(c+5225,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [2U][1U]),32);
        vcdp->fullBus(c+5233,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [2U][2U]),32);
        vcdp->fullBus(c+5241,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [2U][3U]),32);
        vcdp->fullBus(c+5249,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [2U][4U]),32);
        vcdp->fullBus(c+5257,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [2U][5U]),32);
        vcdp->fullBus(c+5265,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [2U][6U]),32);
        vcdp->fullBus(c+5273,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [2U][7U]),32);
        vcdp->fullBus(c+5281,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [3U][0U]),32);
        vcdp->fullBus(c+5289,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [3U][1U]),32);
        vcdp->fullBus(c+5297,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [3U][2U]),32);
        vcdp->fullBus(c+5305,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [3U][3U]),32);
        vcdp->fullBus(c+5313,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [3U][4U]),32);
        vcdp->fullBus(c+5321,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [3U][5U]),32);
        vcdp->fullBus(c+5329,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [3U][6U]),32);
        vcdp->fullBus(c+5337,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__real_msg
                              [3U][7U]),32);
        vcdp->fullBit(c+5345,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__rdy_interior_in[0]));
        vcdp->fullBit(c+5346,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__rdy_interior_in[1]));
        vcdp->fullBit(c+5347,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__rdy_interior_in[2]));
        vcdp->fullBit(c+5348,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__rdy_interior_in[3]));
        vcdp->fullBit(c+5349,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__rdy_interior_in[4]));
        vcdp->fullBit(c+5350,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__rdy_interior_in[5]));
        vcdp->fullBit(c+5351,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__rdy_interior_in[6]));
        vcdp->fullBit(c+5352,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__rdy_interior_in[7]));
        vcdp->fullBit(c+5409,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__val_interior_out[0]));
        vcdp->fullBit(c+5410,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__val_interior_out[1]));
        vcdp->fullBit(c+5411,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__val_interior_out[2]));
        vcdp->fullBit(c+5412,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__val_interior_out[3]));
        vcdp->fullBit(c+5413,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__val_interior_out[4]));
        vcdp->fullBit(c+5414,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__val_interior_out[5]));
        vcdp->fullBit(c+5415,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__val_interior_out[6]));
        vcdp->fullBit(c+5416,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__val_interior_out[7]));
        vcdp->fullBit(c+5473,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__rdy_interior_in[0]));
        vcdp->fullBit(c+5474,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__rdy_interior_in[1]));
        vcdp->fullBit(c+5475,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__rdy_interior_in[2]));
        vcdp->fullBit(c+5476,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__rdy_interior_in[3]));
        vcdp->fullBit(c+5477,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__rdy_interior_in[4]));
        vcdp->fullBit(c+5478,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__rdy_interior_in[5]));
        vcdp->fullBit(c+5479,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__rdy_interior_in[6]));
        vcdp->fullBit(c+5480,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__rdy_interior_in[7]));
        vcdp->fullBit(c+5537,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__val_interior_out[0]));
        vcdp->fullBit(c+5538,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__val_interior_out[1]));
        vcdp->fullBit(c+5539,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__val_interior_out[2]));
        vcdp->fullBit(c+5540,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__val_interior_out[3]));
        vcdp->fullBit(c+5541,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__val_interior_out[4]));
        vcdp->fullBit(c+5542,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__val_interior_out[5]));
        vcdp->fullBit(c+5543,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__val_interior_out[6]));
        vcdp->fullBit(c+5544,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__val_interior_out[7]));
        vcdp->fullBit(c+5601,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__rdy_interior_in[0]));
        vcdp->fullBit(c+5602,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__rdy_interior_in[1]));
        vcdp->fullBit(c+5603,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__rdy_interior_in[2]));
        vcdp->fullBit(c+5604,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__rdy_interior_in[3]));
        vcdp->fullBit(c+5605,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__rdy_interior_in[4]));
        vcdp->fullBit(c+5606,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__rdy_interior_in[5]));
        vcdp->fullBit(c+5607,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__rdy_interior_in[6]));
        vcdp->fullBit(c+5608,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__rdy_interior_in[7]));
        vcdp->fullBit(c+5665,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__val_interior_out[0]));
        vcdp->fullBit(c+5666,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__val_interior_out[1]));
        vcdp->fullBit(c+5667,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__val_interior_out[2]));
        vcdp->fullBit(c+5668,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__val_interior_out[3]));
        vcdp->fullBit(c+5669,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__val_interior_out[4]));
        vcdp->fullBit(c+5670,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__val_interior_out[5]));
        vcdp->fullBit(c+5671,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__val_interior_out[6]));
        vcdp->fullBit(c+5672,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__val_interior_out[7]));
        vcdp->fullBus(c+5729,(vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate[0]),32);
        vcdp->fullBus(c+5730,(vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate[1]),32);
        vcdp->fullBus(c+5731,(vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate[2]),32);
        vcdp->fullBus(c+5732,(vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate[3]),32);
        vcdp->fullBus(c+5733,(vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate[4]),32);
        vcdp->fullBus(c+5734,(vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate[5]),32);
        vcdp->fullBus(c+5735,(vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate[6]),32);
        vcdp->fullBus(c+5736,(vlTOPp->CombinationalFFT__DOT__v__DOT__recv_msg_intermediate[7]),32);
        vcdp->fullBus(c+5793,(vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate[0]),32);
        vcdp->fullBus(c+5794,(vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate[1]),32);
        vcdp->fullBus(c+5795,(vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate[2]),32);
        vcdp->fullBus(c+5796,(vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate[3]),32);
        vcdp->fullBus(c+5797,(vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate[4]),32);
        vcdp->fullBus(c+5798,(vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate[5]),32);
        vcdp->fullBus(c+5799,(vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate[6]),32);
        vcdp->fullBus(c+5800,(vlTOPp->CombinationalFFT__DOT__v__DOT__send_msg_intermediate[7]),32);
        vcdp->fullBus(c+5857,(vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg[0]),32);
        vcdp->fullBus(c+5858,(vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg[1]),32);
        vcdp->fullBus(c+5859,(vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg[2]),32);
        vcdp->fullBus(c+5860,(vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg[3]),32);
        vcdp->fullBus(c+5861,(vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg[4]),32);
        vcdp->fullBus(c+5862,(vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg[5]),32);
        vcdp->fullBus(c+5863,(vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg[6]),32);
        vcdp->fullBus(c+5864,(vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellinp__comb_fft__recv_msg[7]),32);
        vcdp->fullBus(c+5921,(vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg[0]),32);
        vcdp->fullBus(c+5922,(vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg[1]),32);
        vcdp->fullBus(c+5923,(vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg[2]),32);
        vcdp->fullBus(c+5924,(vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg[3]),32);
        vcdp->fullBus(c+5925,(vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg[4]),32);
        vcdp->fullBus(c+5926,(vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg[5]),32);
        vcdp->fullBus(c+5927,(vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg[6]),32);
        vcdp->fullBus(c+5928,(vlTOPp->CombinationalFFT__DOT__v__DOT____Vcellout__comb_fft__send_msg[7]),32);
        vcdp->fullBit(c+5985,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [0U][0U]));
        vcdp->fullBit(c+5993,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [0U][1U]));
        vcdp->fullBit(c+6001,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [0U][2U]));
        vcdp->fullBit(c+6009,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [0U][3U]));
        vcdp->fullBit(c+6017,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [0U][4U]));
        vcdp->fullBit(c+6025,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [0U][5U]));
        vcdp->fullBit(c+6033,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [0U][6U]));
        vcdp->fullBit(c+6041,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [0U][7U]));
        vcdp->fullBit(c+6049,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [1U][0U]));
        vcdp->fullBit(c+6057,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [1U][1U]));
        vcdp->fullBit(c+6065,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [1U][2U]));
        vcdp->fullBit(c+6073,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [1U][3U]));
        vcdp->fullBit(c+6081,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [1U][4U]));
        vcdp->fullBit(c+6089,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [1U][5U]));
        vcdp->fullBit(c+6097,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [1U][6U]));
        vcdp->fullBit(c+6105,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [1U][7U]));
        vcdp->fullBit(c+6113,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [2U][0U]));
        vcdp->fullBit(c+6121,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [2U][1U]));
        vcdp->fullBit(c+6129,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [2U][2U]));
        vcdp->fullBit(c+6137,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [2U][3U]));
        vcdp->fullBit(c+6145,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [2U][4U]));
        vcdp->fullBit(c+6153,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [2U][5U]));
        vcdp->fullBit(c+6161,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [2U][6U]));
        vcdp->fullBit(c+6169,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [2U][7U]));
        vcdp->fullBit(c+6177,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [3U][0U]));
        vcdp->fullBit(c+6185,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [3U][1U]));
        vcdp->fullBit(c+6193,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [3U][2U]));
        vcdp->fullBit(c+6201,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [3U][3U]));
        vcdp->fullBit(c+6209,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [3U][4U]));
        vcdp->fullBit(c+6217,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [3U][5U]));
        vcdp->fullBit(c+6225,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [3U][6U]));
        vcdp->fullBit(c+6233,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__val_in
                              [3U][7U]));
        vcdp->fullBit(c+6241,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [0U][0U]));
        vcdp->fullBit(c+6249,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [0U][1U]));
        vcdp->fullBit(c+6257,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [0U][2U]));
        vcdp->fullBit(c+6265,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [0U][3U]));
        vcdp->fullBit(c+6273,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [0U][4U]));
        vcdp->fullBit(c+6281,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [0U][5U]));
        vcdp->fullBit(c+6289,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [0U][6U]));
        vcdp->fullBit(c+6297,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [0U][7U]));
        vcdp->fullBit(c+6305,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [1U][0U]));
        vcdp->fullBit(c+6313,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [1U][1U]));
        vcdp->fullBit(c+6321,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [1U][2U]));
        vcdp->fullBit(c+6329,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [1U][3U]));
        vcdp->fullBit(c+6337,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [1U][4U]));
        vcdp->fullBit(c+6345,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [1U][5U]));
        vcdp->fullBit(c+6353,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [1U][6U]));
        vcdp->fullBit(c+6361,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [1U][7U]));
        vcdp->fullBit(c+6369,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [2U][0U]));
        vcdp->fullBit(c+6377,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [2U][1U]));
        vcdp->fullBit(c+6385,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [2U][2U]));
        vcdp->fullBit(c+6393,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [2U][3U]));
        vcdp->fullBit(c+6401,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [2U][4U]));
        vcdp->fullBit(c+6409,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [2U][5U]));
        vcdp->fullBit(c+6417,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [2U][6U]));
        vcdp->fullBit(c+6425,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [2U][7U]));
        vcdp->fullBit(c+6433,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [3U][0U]));
        vcdp->fullBit(c+6441,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [3U][1U]));
        vcdp->fullBit(c+6449,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [3U][2U]));
        vcdp->fullBit(c+6457,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [3U][3U]));
        vcdp->fullBit(c+6465,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [3U][4U]));
        vcdp->fullBit(c+6473,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [3U][5U]));
        vcdp->fullBit(c+6481,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [3U][6U]));
        vcdp->fullBit(c+6489,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__rdy_in
                              [3U][7U]));
        vcdp->fullBus(c+6497,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__imm),8);
        vcdp->fullBus(c+6505,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__imm2),8);
        vcdp->fullBus(c+6513,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_real[0]),32);
        vcdp->fullBus(c+6514,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_real[1]),32);
        vcdp->fullBus(c+6515,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_real[2]),32);
        vcdp->fullBus(c+6516,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_real[3]),32);
        vcdp->fullBus(c+6517,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_real[4]),32);
        vcdp->fullBus(c+6518,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_real[5]),32);
        vcdp->fullBus(c+6519,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_real[6]),32);
        vcdp->fullBus(c+6520,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_real[7]),32);
        vcdp->fullBit(c+6577,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__val_interior_in[0]));
        vcdp->fullBit(c+6578,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__val_interior_in[1]));
        vcdp->fullBit(c+6579,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__val_interior_in[2]));
        vcdp->fullBit(c+6580,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__val_interior_in[3]));
        vcdp->fullBit(c+6581,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__val_interior_in[4]));
        vcdp->fullBit(c+6582,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__val_interior_in[5]));
        vcdp->fullBit(c+6583,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__val_interior_in[6]));
        vcdp->fullBit(c+6584,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__val_interior_in[7]));
        vcdp->fullBit(c+6641,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__rdy_interior_out[0]));
        vcdp->fullBit(c+6642,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__rdy_interior_out[1]));
        vcdp->fullBit(c+6643,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__rdy_interior_out[2]));
        vcdp->fullBit(c+6644,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__rdy_interior_out[3]));
        vcdp->fullBit(c+6645,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__rdy_interior_out[4]));
        vcdp->fullBit(c+6646,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__rdy_interior_out[5]));
        vcdp->fullBit(c+6647,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__rdy_interior_out[6]));
        vcdp->fullBit(c+6648,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__rdy_interior_out[7]));
        vcdp->fullBus(c+6705,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_real[0]),32);
        vcdp->fullBus(c+6706,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_real[1]),32);
        vcdp->fullBus(c+6707,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_real[2]),32);
        vcdp->fullBus(c+6708,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_real[3]),32);
        vcdp->fullBus(c+6709,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_real[4]),32);
        vcdp->fullBus(c+6710,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_real[5]),32);
        vcdp->fullBus(c+6711,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_real[6]),32);
        vcdp->fullBus(c+6712,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_real[7]),32);
        vcdp->fullBit(c+6769,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__val_interior_in[0]));
        vcdp->fullBit(c+6770,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__val_interior_in[1]));
        vcdp->fullBit(c+6771,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__val_interior_in[2]));
        vcdp->fullBit(c+6772,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__val_interior_in[3]));
        vcdp->fullBit(c+6773,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__val_interior_in[4]));
        vcdp->fullBit(c+6774,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__val_interior_in[5]));
        vcdp->fullBit(c+6775,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__val_interior_in[6]));
        vcdp->fullBit(c+6776,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__val_interior_in[7]));
        vcdp->fullBit(c+6833,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__rdy_interior_out[0]));
        vcdp->fullBit(c+6834,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__rdy_interior_out[1]));
        vcdp->fullBit(c+6835,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__rdy_interior_out[2]));
        vcdp->fullBit(c+6836,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__rdy_interior_out[3]));
        vcdp->fullBit(c+6837,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__rdy_interior_out[4]));
        vcdp->fullBit(c+6838,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__rdy_interior_out[5]));
        vcdp->fullBit(c+6839,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__rdy_interior_out[6]));
        vcdp->fullBit(c+6840,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__rdy_interior_out[7]));
        vcdp->fullBus(c+6897,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_real[0]),32);
        vcdp->fullBus(c+6898,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_real[1]),32);
        vcdp->fullBus(c+6899,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_real[2]),32);
        vcdp->fullBus(c+6900,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_real[3]),32);
        vcdp->fullBus(c+6901,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_real[4]),32);
        vcdp->fullBus(c+6902,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_real[5]),32);
        vcdp->fullBus(c+6903,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_real[6]),32);
        vcdp->fullBus(c+6904,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_real[7]),32);
        vcdp->fullBit(c+6961,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__val_interior_in[0]));
        vcdp->fullBit(c+6962,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__val_interior_in[1]));
        vcdp->fullBit(c+6963,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__val_interior_in[2]));
        vcdp->fullBit(c+6964,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__val_interior_in[3]));
        vcdp->fullBit(c+6965,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__val_interior_in[4]));
        vcdp->fullBit(c+6966,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__val_interior_in[5]));
        vcdp->fullBit(c+6967,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__val_interior_in[6]));
        vcdp->fullBit(c+6968,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__val_interior_in[7]));
        vcdp->fullBit(c+7025,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__rdy_interior_out[0]));
        vcdp->fullBit(c+7026,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__rdy_interior_out[1]));
        vcdp->fullBit(c+7027,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__rdy_interior_out[2]));
        vcdp->fullBit(c+7028,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__rdy_interior_out[3]));
        vcdp->fullBit(c+7029,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__rdy_interior_out[4]));
        vcdp->fullBit(c+7030,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__rdy_interior_out[5]));
        vcdp->fullBit(c+7031,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__rdy_interior_out[6]));
        vcdp->fullBit(c+7032,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__rdy_interior_out[7]));
        vcdp->fullBus(c+7089,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_real[0]),32);
        vcdp->fullBus(c+7090,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_real[1]),32);
        vcdp->fullBus(c+7091,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_real[2]),32);
        vcdp->fullBus(c+7092,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_real[3]),32);
        vcdp->fullBus(c+7093,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_real[4]),32);
        vcdp->fullBus(c+7094,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_real[5]),32);
        vcdp->fullBus(c+7095,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_real[6]),32);
        vcdp->fullBus(c+7096,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_real[7]),32);
        vcdp->fullBit(c+7153,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_val[0]));
        vcdp->fullBit(c+7154,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_val[1]));
        vcdp->fullBit(c+7155,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_val[2]));
        vcdp->fullBit(c+7156,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_val[3]));
        vcdp->fullBit(c+7157,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_val[4]));
        vcdp->fullBit(c+7158,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_val[5]));
        vcdp->fullBit(c+7159,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_val[6]));
        vcdp->fullBit(c+7160,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_val[7]));
        vcdp->fullBit(c+7217,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_rdy[0]));
        vcdp->fullBit(c+7218,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_rdy[1]));
        vcdp->fullBit(c+7219,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_rdy[2]));
        vcdp->fullBit(c+7220,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_rdy[3]));
        vcdp->fullBit(c+7221,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_rdy[4]));
        vcdp->fullBit(c+7222,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_rdy[5]));
        vcdp->fullBit(c+7223,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_rdy[6]));
        vcdp->fullBit(c+7224,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__recv_rdy[7]));
        vcdp->fullBus(c+7281,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__send_real[0]),32);
        vcdp->fullBus(c+7282,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__send_real[1]),32);
        vcdp->fullBus(c+7283,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__send_real[2]),32);
        vcdp->fullBus(c+7284,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__send_real[3]),32);
        vcdp->fullBus(c+7285,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__send_real[4]),32);
        vcdp->fullBus(c+7286,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__send_real[5]),32);
        vcdp->fullBus(c+7287,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__send_real[6]),32);
        vcdp->fullBus(c+7288,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__send_real[7]),32);
        vcdp->fullBit(c+7345,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__send_val[0]));
        vcdp->fullBit(c+7346,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__send_val[1]));
        vcdp->fullBit(c+7347,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__send_val[2]));
        vcdp->fullBit(c+7348,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__send_val[3]));
        vcdp->fullBit(c+7349,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__send_val[4]));
        vcdp->fullBit(c+7350,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__send_val[5]));
        vcdp->fullBit(c+7351,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__send_val[6]));
        vcdp->fullBit(c+7352,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_in_1__send_val[7]));
        vcdp->fullBit(c+7409,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__send_rdy[0]));
        vcdp->fullBit(c+7410,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__send_rdy[1]));
        vcdp->fullBit(c+7411,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__send_rdy[2]));
        vcdp->fullBit(c+7412,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__send_rdy[3]));
        vcdp->fullBit(c+7413,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__send_rdy[4]));
        vcdp->fullBit(c+7414,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__send_rdy[5]));
        vcdp->fullBit(c+7415,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__send_rdy[6]));
        vcdp->fullBit(c+7416,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_in_1__send_rdy[7]));
        vcdp->fullBit(c+7473,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__recv_val));
        vcdp->fullBit(c+7481,((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__rdy_interior_out
                               [0U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__rdy_interior_out
                               [1U])));
        vcdp->fullBus(c+7489,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_real
                              [0U]),32);
        vcdp->fullBus(c+7497,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_real
                              [1U]),32);
        vcdp->fullBit(c+7505,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__recv_val));
        vcdp->fullBit(c+7513,((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__rdy_interior_out
                               [2U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__rdy_interior_out
                               [3U])));
        vcdp->fullBus(c+7521,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_real
                              [2U]),32);
        vcdp->fullBus(c+7529,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_real
                              [3U]),32);
        vcdp->fullBit(c+7537,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__recv_val));
        vcdp->fullBit(c+7545,((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__rdy_interior_out
                               [4U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__rdy_interior_out
                               [5U])));
        vcdp->fullBus(c+7553,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_real
                              [4U]),32);
        vcdp->fullBus(c+7561,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_real
                              [5U]),32);
        vcdp->fullBit(c+7569,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__recv_val));
        vcdp->fullBit(c+7577,((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__rdy_interior_out
                               [6U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__rdy_interior_out
                               [7U])));
        vcdp->fullBus(c+7585,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_real
                              [6U]),32);
        vcdp->fullBus(c+7593,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__butterfly_in_real
                              [7U]),32);
        vcdp->fullBit(c+7601,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_val[0]));
        vcdp->fullBit(c+7602,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_val[1]));
        vcdp->fullBit(c+7603,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_val[2]));
        vcdp->fullBit(c+7604,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_val[3]));
        vcdp->fullBit(c+7605,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_val[4]));
        vcdp->fullBit(c+7606,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_val[5]));
        vcdp->fullBit(c+7607,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_val[6]));
        vcdp->fullBit(c+7608,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_val[7]));
        vcdp->fullBit(c+7665,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_rdy[0]));
        vcdp->fullBit(c+7666,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_rdy[1]));
        vcdp->fullBit(c+7667,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_rdy[2]));
        vcdp->fullBit(c+7668,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_rdy[3]));
        vcdp->fullBit(c+7669,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_rdy[4]));
        vcdp->fullBit(c+7670,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_rdy[5]));
        vcdp->fullBit(c+7671,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_rdy[6]));
        vcdp->fullBit(c+7672,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__recv_rdy[7]));
        vcdp->fullBit(c+7729,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__send_val[0]));
        vcdp->fullBit(c+7730,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__send_val[1]));
        vcdp->fullBit(c+7731,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__send_val[2]));
        vcdp->fullBit(c+7732,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__send_val[3]));
        vcdp->fullBit(c+7733,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__send_val[4]));
        vcdp->fullBit(c+7734,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__send_val[5]));
        vcdp->fullBit(c+7735,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__send_val[6]));
        vcdp->fullBit(c+7736,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__xbar_out_1__send_val[7]));
        vcdp->fullBit(c+7793,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__send_rdy[0]));
        vcdp->fullBit(c+7794,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__send_rdy[1]));
        vcdp->fullBit(c+7795,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__send_rdy[2]));
        vcdp->fullBit(c+7796,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__send_rdy[3]));
        vcdp->fullBit(c+7797,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__send_rdy[4]));
        vcdp->fullBit(c+7798,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__send_rdy[5]));
        vcdp->fullBit(c+7799,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__send_rdy[6]));
        vcdp->fullBit(c+7800,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__xbar_out_1__send_rdy[7]));
        vcdp->fullBus(c+7857,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_real[0]),32);
        vcdp->fullBus(c+7858,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_real[1]),32);
        vcdp->fullBus(c+7859,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_real[2]),32);
        vcdp->fullBus(c+7860,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_real[3]),32);
        vcdp->fullBus(c+7861,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_real[4]),32);
        vcdp->fullBus(c+7862,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_real[5]),32);
        vcdp->fullBus(c+7863,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_real[6]),32);
        vcdp->fullBus(c+7864,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_real[7]),32);
        vcdp->fullBit(c+7921,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_val[0]));
        vcdp->fullBit(c+7922,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_val[1]));
        vcdp->fullBit(c+7923,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_val[2]));
        vcdp->fullBit(c+7924,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_val[3]));
        vcdp->fullBit(c+7925,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_val[4]));
        vcdp->fullBit(c+7926,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_val[5]));
        vcdp->fullBit(c+7927,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_val[6]));
        vcdp->fullBit(c+7928,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_val[7]));
        vcdp->fullBit(c+7985,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_rdy[0]));
        vcdp->fullBit(c+7986,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_rdy[1]));
        vcdp->fullBit(c+7987,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_rdy[2]));
        vcdp->fullBit(c+7988,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_rdy[3]));
        vcdp->fullBit(c+7989,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_rdy[4]));
        vcdp->fullBit(c+7990,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_rdy[5]));
        vcdp->fullBit(c+7991,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_rdy[6]));
        vcdp->fullBit(c+7992,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__recv_rdy[7]));
        vcdp->fullBus(c+8049,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__send_real[0]),32);
        vcdp->fullBus(c+8050,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__send_real[1]),32);
        vcdp->fullBus(c+8051,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__send_real[2]),32);
        vcdp->fullBus(c+8052,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__send_real[3]),32);
        vcdp->fullBus(c+8053,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__send_real[4]),32);
        vcdp->fullBus(c+8054,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__send_real[5]),32);
        vcdp->fullBus(c+8055,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__send_real[6]),32);
        vcdp->fullBus(c+8056,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__send_real[7]),32);
        vcdp->fullBit(c+8113,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__send_val[0]));
        vcdp->fullBit(c+8114,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__send_val[1]));
        vcdp->fullBit(c+8115,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__send_val[2]));
        vcdp->fullBit(c+8116,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__send_val[3]));
        vcdp->fullBit(c+8117,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__send_val[4]));
        vcdp->fullBit(c+8118,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__send_val[5]));
        vcdp->fullBit(c+8119,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__send_val[6]));
        vcdp->fullBit(c+8120,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_in_1__send_val[7]));
        vcdp->fullBit(c+8177,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__send_rdy[0]));
        vcdp->fullBit(c+8178,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__send_rdy[1]));
        vcdp->fullBit(c+8179,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__send_rdy[2]));
        vcdp->fullBit(c+8180,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__send_rdy[3]));
        vcdp->fullBit(c+8181,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__send_rdy[4]));
        vcdp->fullBit(c+8182,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__send_rdy[5]));
        vcdp->fullBit(c+8183,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__send_rdy[6]));
        vcdp->fullBit(c+8184,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_in_1__send_rdy[7]));
        vcdp->fullBit(c+8241,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__recv_val));
        vcdp->fullBit(c+8249,((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__rdy_interior_out
                               [0U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__rdy_interior_out
                               [1U])));
        vcdp->fullBus(c+8257,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_real
                              [0U]),32);
        vcdp->fullBus(c+8265,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_real
                              [1U]),32);
        vcdp->fullBit(c+8273,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__recv_val));
        vcdp->fullBit(c+8281,((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__rdy_interior_out
                               [2U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__rdy_interior_out
                               [3U])));
        vcdp->fullBus(c+8289,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_real
                              [2U]),32);
        vcdp->fullBus(c+8297,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_real
                              [3U]),32);
        vcdp->fullBit(c+8305,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__recv_val));
        vcdp->fullBit(c+8313,((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__rdy_interior_out
                               [4U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__rdy_interior_out
                               [5U])));
        vcdp->fullBus(c+8321,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_real
                              [4U]),32);
        vcdp->fullBus(c+8329,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_real
                              [5U]),32);
        vcdp->fullBit(c+8337,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__recv_val));
        vcdp->fullBit(c+8345,((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__rdy_interior_out
                               [6U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__rdy_interior_out
                               [7U])));
        vcdp->fullBus(c+8353,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_real
                              [6U]),32);
        vcdp->fullBus(c+8361,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__butterfly_in_real
                              [7U]),32);
        vcdp->fullBit(c+8369,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_val[0]));
        vcdp->fullBit(c+8370,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_val[1]));
        vcdp->fullBit(c+8371,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_val[2]));
        vcdp->fullBit(c+8372,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_val[3]));
        vcdp->fullBit(c+8373,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_val[4]));
        vcdp->fullBit(c+8374,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_val[5]));
        vcdp->fullBit(c+8375,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_val[6]));
        vcdp->fullBit(c+8376,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_val[7]));
        vcdp->fullBit(c+8433,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_rdy[0]));
        vcdp->fullBit(c+8434,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_rdy[1]));
        vcdp->fullBit(c+8435,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_rdy[2]));
        vcdp->fullBit(c+8436,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_rdy[3]));
        vcdp->fullBit(c+8437,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_rdy[4]));
        vcdp->fullBit(c+8438,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_rdy[5]));
        vcdp->fullBit(c+8439,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_rdy[6]));
        vcdp->fullBit(c+8440,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__recv_rdy[7]));
        vcdp->fullBit(c+8497,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__send_val[0]));
        vcdp->fullBit(c+8498,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__send_val[1]));
        vcdp->fullBit(c+8499,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__send_val[2]));
        vcdp->fullBit(c+8500,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__send_val[3]));
        vcdp->fullBit(c+8501,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__send_val[4]));
        vcdp->fullBit(c+8502,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__send_val[5]));
        vcdp->fullBit(c+8503,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__send_val[6]));
        vcdp->fullBit(c+8504,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__xbar_out_1__send_val[7]));
        vcdp->fullBit(c+8561,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__send_rdy[0]));
        vcdp->fullBit(c+8562,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__send_rdy[1]));
        vcdp->fullBit(c+8563,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__send_rdy[2]));
        vcdp->fullBit(c+8564,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__send_rdy[3]));
        vcdp->fullBit(c+8565,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__send_rdy[4]));
        vcdp->fullBit(c+8566,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__send_rdy[5]));
        vcdp->fullBit(c+8567,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__send_rdy[6]));
        vcdp->fullBit(c+8568,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__1__KET____DOT__xbar_out_1__send_rdy[7]));
        vcdp->fullBus(c+8625,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_real[0]),32);
        vcdp->fullBus(c+8626,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_real[1]),32);
        vcdp->fullBus(c+8627,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_real[2]),32);
        vcdp->fullBus(c+8628,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_real[3]),32);
        vcdp->fullBus(c+8629,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_real[4]),32);
        vcdp->fullBus(c+8630,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_real[5]),32);
        vcdp->fullBus(c+8631,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_real[6]),32);
        vcdp->fullBus(c+8632,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_real[7]),32);
        vcdp->fullBit(c+8689,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_val[0]));
        vcdp->fullBit(c+8690,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_val[1]));
        vcdp->fullBit(c+8691,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_val[2]));
        vcdp->fullBit(c+8692,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_val[3]));
        vcdp->fullBit(c+8693,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_val[4]));
        vcdp->fullBit(c+8694,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_val[5]));
        vcdp->fullBit(c+8695,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_val[6]));
        vcdp->fullBit(c+8696,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_val[7]));
        vcdp->fullBit(c+8753,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_rdy[0]));
        vcdp->fullBit(c+8754,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_rdy[1]));
        vcdp->fullBit(c+8755,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_rdy[2]));
        vcdp->fullBit(c+8756,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_rdy[3]));
        vcdp->fullBit(c+8757,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_rdy[4]));
        vcdp->fullBit(c+8758,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_rdy[5]));
        vcdp->fullBit(c+8759,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_rdy[6]));
        vcdp->fullBit(c+8760,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__recv_rdy[7]));
        vcdp->fullBus(c+8817,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__send_real[0]),32);
        vcdp->fullBus(c+8818,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__send_real[1]),32);
        vcdp->fullBus(c+8819,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__send_real[2]),32);
        vcdp->fullBus(c+8820,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__send_real[3]),32);
        vcdp->fullBus(c+8821,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__send_real[4]),32);
        vcdp->fullBus(c+8822,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__send_real[5]),32);
        vcdp->fullBus(c+8823,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__send_real[6]),32);
        vcdp->fullBus(c+8824,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__send_real[7]),32);
        vcdp->fullBit(c+8881,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__send_val[0]));
        vcdp->fullBit(c+8882,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__send_val[1]));
        vcdp->fullBit(c+8883,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__send_val[2]));
        vcdp->fullBit(c+8884,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__send_val[3]));
        vcdp->fullBit(c+8885,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__send_val[4]));
        vcdp->fullBit(c+8886,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__send_val[5]));
        vcdp->fullBit(c+8887,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__send_val[6]));
        vcdp->fullBit(c+8888,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_in_1__send_val[7]));
        vcdp->fullBit(c+8945,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__send_rdy[0]));
        vcdp->fullBit(c+8946,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__send_rdy[1]));
        vcdp->fullBit(c+8947,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__send_rdy[2]));
        vcdp->fullBit(c+8948,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__send_rdy[3]));
        vcdp->fullBit(c+8949,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__send_rdy[4]));
        vcdp->fullBit(c+8950,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__send_rdy[5]));
        vcdp->fullBit(c+8951,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__send_rdy[6]));
        vcdp->fullBit(c+8952,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_in_1__send_rdy[7]));
        vcdp->fullBit(c+9009,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__recv_val));
        vcdp->fullBit(c+9017,((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__rdy_interior_out
                               [0U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__rdy_interior_out
                               [1U])));
        vcdp->fullBus(c+9025,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_real
                              [0U]),32);
        vcdp->fullBus(c+9033,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_real
                              [1U]),32);
        vcdp->fullBit(c+9041,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__recv_val));
        vcdp->fullBit(c+9049,((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__rdy_interior_out
                               [2U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__rdy_interior_out
                               [3U])));
        vcdp->fullBus(c+9057,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_real
                              [2U]),32);
        vcdp->fullBus(c+9065,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_real
                              [3U]),32);
        vcdp->fullBit(c+9073,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__recv_val));
        vcdp->fullBit(c+9081,((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__rdy_interior_out
                               [4U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__rdy_interior_out
                               [5U])));
        vcdp->fullBus(c+9089,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_real
                              [4U]),32);
        vcdp->fullBus(c+9097,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_real
                              [5U]),32);
        vcdp->fullBit(c+9105,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__recv_val));
        vcdp->fullBit(c+9113,((vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__rdy_interior_out
                               [6U] & vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__rdy_interior_out
                               [7U])));
        vcdp->fullBus(c+9121,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_real
                              [6U]),32);
        vcdp->fullBus(c+9129,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__butterfly_in_real
                              [7U]),32);
        vcdp->fullBit(c+9137,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_val[0]));
        vcdp->fullBit(c+9138,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_val[1]));
        vcdp->fullBit(c+9139,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_val[2]));
        vcdp->fullBit(c+9140,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_val[3]));
        vcdp->fullBit(c+9141,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_val[4]));
        vcdp->fullBit(c+9142,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_val[5]));
        vcdp->fullBit(c+9143,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_val[6]));
        vcdp->fullBit(c+9144,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_val[7]));
        vcdp->fullBit(c+9201,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_rdy[0]));
        vcdp->fullBit(c+9202,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_rdy[1]));
        vcdp->fullBit(c+9203,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_rdy[2]));
        vcdp->fullBit(c+9204,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_rdy[3]));
        vcdp->fullBit(c+9205,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_rdy[4]));
        vcdp->fullBit(c+9206,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_rdy[5]));
        vcdp->fullBit(c+9207,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_rdy[6]));
        vcdp->fullBit(c+9208,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__recv_rdy[7]));
        vcdp->fullBit(c+9265,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__send_val[0]));
        vcdp->fullBit(c+9266,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__send_val[1]));
        vcdp->fullBit(c+9267,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__send_val[2]));
        vcdp->fullBit(c+9268,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__send_val[3]));
        vcdp->fullBit(c+9269,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__send_val[4]));
        vcdp->fullBit(c+9270,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__send_val[5]));
        vcdp->fullBit(c+9271,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__send_val[6]));
        vcdp->fullBit(c+9272,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__xbar_out_1__send_val[7]));
        vcdp->fullBit(c+9329,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__send_rdy[0]));
        vcdp->fullBit(c+9330,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__send_rdy[1]));
        vcdp->fullBit(c+9331,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__send_rdy[2]));
        vcdp->fullBit(c+9332,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__send_rdy[3]));
        vcdp->fullBit(c+9333,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__send_rdy[4]));
        vcdp->fullBit(c+9334,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__send_rdy[5]));
        vcdp->fullBit(c+9335,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__send_rdy[6]));
        vcdp->fullBit(c+9336,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellinp__genblk3__BRA__2__KET____DOT__xbar_out_1__send_rdy[7]));
        vcdp->fullBit(c+9393,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__send_val));
        vcdp->fullBit(c+9401,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__recv_rdy));
        vcdp->fullBus(c+9409,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__cr),32);
        vcdp->fullBus(c+9417,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__cc),32);
        vcdp->fullBus(c+9425,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__dr),32);
        vcdp->fullBus(c+9433,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__dc),32);
        vcdp->fullBit(c+9441,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul_rdy));
        vcdp->fullBus(c+9449,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__arbr),32);
        vcdp->fullBus(c+9457,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__acbc),32);
        vcdp->fullBus(c+9465,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__ab),32);
        vcdp->fullBus(c+9473,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__a),32);
        vcdp->fullBus(c+9481,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__b),32);
        vcdp->fullBit(c+9489,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__arbr_rdy));
        vcdp->fullBit(c+9497,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__acbc_rdy));
        vcdp->fullBit(c+9505,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__ab_rdy));
        vcdp->fullBit(c+9513,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__sab_rdy));
        vcdp->fullBit(c+9521,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1_recv_rdy));
        vcdp->fullBit(c+9529,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2_recv_rdy));
        vcdp->fullBit(c+9537,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3_recv_rdy));
        vcdp->fullBus(c+9545,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__act),32);
        vcdp->fullBus(c+9553,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__art),32);
        vcdp->fullBus(c+9561,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__bct),32);
        vcdp->fullBus(c+9569,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__brt),32);
        vcdp->fullBus(c+9577,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__hb),32);
        vcdp->fullQuad(c+9585,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__ha),48);
        vcdp->fullBit(c+9601,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter))));
        vcdp->fullBus(c+9609,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__hb),32);
        vcdp->fullQuad(c+9617,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__ha),48);
        vcdp->fullBit(c+9633,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter))));
        vcdp->fullBus(c+9641,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__hb),32);
        vcdp->fullQuad(c+9649,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__ha),48);
        vcdp->fullBit(c+9665,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter))));
        vcdp->fullBit(c+9673,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__send_val));
        vcdp->fullBit(c+9681,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__recv_rdy));
        vcdp->fullBus(c+9689,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__cr),32);
        vcdp->fullBus(c+9697,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__cc),32);
        vcdp->fullBus(c+9705,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__dr),32);
        vcdp->fullBus(c+9713,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__dc),32);
        vcdp->fullBit(c+9721,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul_rdy));
        vcdp->fullBus(c+9729,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__arbr),32);
        vcdp->fullBus(c+9737,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__acbc),32);
        vcdp->fullBus(c+9745,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__ab),32);
        vcdp->fullBus(c+9753,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__a),32);
        vcdp->fullBus(c+9761,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__b),32);
        vcdp->fullBit(c+9769,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__arbr_rdy));
        vcdp->fullBit(c+9777,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__acbc_rdy));
        vcdp->fullBit(c+9785,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__ab_rdy));
        vcdp->fullBit(c+9793,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__sab_rdy));
        vcdp->fullBit(c+9801,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1_recv_rdy));
        vcdp->fullBit(c+9809,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2_recv_rdy));
        vcdp->fullBit(c+9817,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3_recv_rdy));
        vcdp->fullBus(c+9825,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__act),32);
        vcdp->fullBus(c+9833,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__art),32);
        vcdp->fullBus(c+9841,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__bct),32);
        vcdp->fullBus(c+9849,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__brt),32);
        vcdp->fullBus(c+9857,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__hb),32);
        vcdp->fullQuad(c+9865,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__ha),48);
        vcdp->fullBit(c+9881,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter))));
        vcdp->fullBus(c+9889,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__hb),32);
        vcdp->fullQuad(c+9897,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__ha),48);
        vcdp->fullBit(c+9913,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter))));
        vcdp->fullBus(c+9921,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__hb),32);
        vcdp->fullQuad(c+9929,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__ha),48);
        vcdp->fullBit(c+9945,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter))));
        vcdp->fullBit(c+9953,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__send_val));
        vcdp->fullBit(c+9961,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__recv_rdy));
        vcdp->fullBus(c+9969,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__cr),32);
        vcdp->fullBus(c+9977,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__cc),32);
        vcdp->fullBus(c+9985,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__dr),32);
        vcdp->fullBus(c+9993,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__dc),32);
        vcdp->fullBit(c+10001,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul_rdy));
        vcdp->fullBus(c+10009,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__arbr),32);
        vcdp->fullBus(c+10017,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__acbc),32);
        vcdp->fullBus(c+10025,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__ab),32);
        vcdp->fullBus(c+10033,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__a),32);
        vcdp->fullBus(c+10041,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__b),32);
        vcdp->fullBit(c+10049,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__arbr_rdy));
        vcdp->fullBit(c+10057,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__acbc_rdy));
        vcdp->fullBit(c+10065,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__ab_rdy));
        vcdp->fullBit(c+10073,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__sab_rdy));
        vcdp->fullBit(c+10081,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1_recv_rdy));
        vcdp->fullBit(c+10089,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2_recv_rdy));
        vcdp->fullBit(c+10097,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3_recv_rdy));
        vcdp->fullBus(c+10105,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__act),32);
        vcdp->fullBus(c+10113,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__art),32);
        vcdp->fullBus(c+10121,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__bct),32);
        vcdp->fullBus(c+10129,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__brt),32);
        vcdp->fullBus(c+10137,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__hb),32);
        vcdp->fullQuad(c+10145,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__ha),48);
        vcdp->fullBit(c+10161,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter))));
        vcdp->fullBus(c+10169,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__hb),32);
        vcdp->fullQuad(c+10177,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__ha),48);
        vcdp->fullBit(c+10193,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter))));
        vcdp->fullBus(c+10201,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__hb),32);
        vcdp->fullQuad(c+10209,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__ha),48);
        vcdp->fullBit(c+10225,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter))));
        vcdp->fullBit(c+10233,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__send_val));
        vcdp->fullBit(c+10241,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__recv_rdy));
        vcdp->fullBus(c+10249,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__cr),32);
        vcdp->fullBus(c+10257,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__cc),32);
        vcdp->fullBus(c+10265,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__dr),32);
        vcdp->fullBus(c+10273,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__dc),32);
        vcdp->fullBit(c+10281,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul_rdy));
        vcdp->fullBus(c+10289,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__arbr),32);
        vcdp->fullBus(c+10297,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__acbc),32);
        vcdp->fullBus(c+10305,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__ab),32);
        vcdp->fullBus(c+10313,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__a),32);
        vcdp->fullBus(c+10321,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__b),32);
        vcdp->fullBit(c+10329,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__arbr_rdy));
        vcdp->fullBit(c+10337,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__acbc_rdy));
        vcdp->fullBit(c+10345,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__ab_rdy));
        vcdp->fullBit(c+10353,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__sab_rdy));
        vcdp->fullBit(c+10361,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1_recv_rdy));
        vcdp->fullBit(c+10369,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2_recv_rdy));
        vcdp->fullBit(c+10377,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3_recv_rdy));
        vcdp->fullBus(c+10385,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__act),32);
        vcdp->fullBus(c+10393,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__art),32);
        vcdp->fullBus(c+10401,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__bct),32);
        vcdp->fullBus(c+10409,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__brt),32);
        vcdp->fullBus(c+10417,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__hb),32);
        vcdp->fullQuad(c+10425,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__ha),48);
        vcdp->fullBit(c+10441,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter))));
        vcdp->fullBus(c+10449,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__hb),32);
        vcdp->fullQuad(c+10457,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__ha),48);
        vcdp->fullBit(c+10473,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter))));
        vcdp->fullBus(c+10481,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__hb),32);
        vcdp->fullQuad(c+10489,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__ha),48);
        vcdp->fullBit(c+10505,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter))));
        vcdp->fullBit(c+10513,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__send_val));
        vcdp->fullBit(c+10521,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__recv_rdy));
        vcdp->fullBus(c+10529,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__cr),32);
        vcdp->fullBus(c+10537,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__cc),32);
        vcdp->fullBus(c+10545,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__dr),32);
        vcdp->fullBus(c+10553,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__dc),32);
        vcdp->fullBit(c+10561,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul_rdy));
        vcdp->fullBus(c+10569,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__arbr),32);
        vcdp->fullBus(c+10577,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__acbc),32);
        vcdp->fullBus(c+10585,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__ab),32);
        vcdp->fullBus(c+10593,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__a),32);
        vcdp->fullBus(c+10601,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__b),32);
        vcdp->fullBit(c+10609,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__arbr_rdy));
        vcdp->fullBit(c+10617,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__acbc_rdy));
        vcdp->fullBit(c+10625,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__ab_rdy));
        vcdp->fullBit(c+10633,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__sab_rdy));
        vcdp->fullBit(c+10641,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1_recv_rdy));
        vcdp->fullBit(c+10649,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2_recv_rdy));
        vcdp->fullBit(c+10657,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3_recv_rdy));
        vcdp->fullBus(c+10665,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__act),32);
        vcdp->fullBus(c+10673,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__art),32);
        vcdp->fullBus(c+10681,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__bct),32);
        vcdp->fullBus(c+10689,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__brt),32);
        vcdp->fullBus(c+10697,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__hb),32);
        vcdp->fullQuad(c+10705,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__ha),48);
        vcdp->fullBit(c+10721,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter))));
        vcdp->fullBus(c+10729,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__hb),32);
        vcdp->fullQuad(c+10737,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__ha),48);
        vcdp->fullBit(c+10753,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter))));
        vcdp->fullBus(c+10761,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__hb),32);
        vcdp->fullQuad(c+10769,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__ha),48);
        vcdp->fullBit(c+10785,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter))));
        vcdp->fullBit(c+10793,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__send_val));
        vcdp->fullBit(c+10801,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__recv_rdy));
        vcdp->fullBus(c+10809,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__cr),32);
        vcdp->fullBus(c+10817,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__cc),32);
        vcdp->fullBus(c+10825,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__dr),32);
        vcdp->fullBus(c+10833,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__dc),32);
        vcdp->fullBit(c+10841,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul_rdy));
        vcdp->fullBus(c+10849,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__arbr),32);
        vcdp->fullBus(c+10857,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__acbc),32);
        vcdp->fullBus(c+10865,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__ab),32);
        vcdp->fullBus(c+10873,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__a),32);
        vcdp->fullBus(c+10881,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__b),32);
        vcdp->fullBit(c+10889,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__arbr_rdy));
        vcdp->fullBit(c+10897,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__acbc_rdy));
        vcdp->fullBit(c+10905,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__ab_rdy));
        vcdp->fullBit(c+10913,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__sab_rdy));
        vcdp->fullBit(c+10921,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1_recv_rdy));
        vcdp->fullBit(c+10929,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2_recv_rdy));
        vcdp->fullBit(c+10937,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3_recv_rdy));
        vcdp->fullBus(c+10945,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__act),32);
        vcdp->fullBus(c+10953,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__art),32);
        vcdp->fullBus(c+10961,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__bct),32);
        vcdp->fullBus(c+10969,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__brt),32);
        vcdp->fullBus(c+10977,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__hb),32);
        vcdp->fullQuad(c+10985,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__ha),48);
        vcdp->fullBit(c+11001,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter))));
        vcdp->fullBus(c+11009,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__hb),32);
        vcdp->fullQuad(c+11017,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__ha),48);
        vcdp->fullBit(c+11033,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter))));
        vcdp->fullBus(c+11041,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__hb),32);
        vcdp->fullQuad(c+11049,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__ha),48);
        vcdp->fullBit(c+11065,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter))));
        vcdp->fullBit(c+11073,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__send_val));
        vcdp->fullBit(c+11081,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__recv_rdy));
        vcdp->fullBus(c+11089,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__cr),32);
        vcdp->fullBus(c+11097,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__cc),32);
        vcdp->fullBus(c+11105,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__dr),32);
        vcdp->fullBus(c+11113,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__dc),32);
        vcdp->fullBit(c+11121,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul_rdy));
        vcdp->fullBus(c+11129,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__arbr),32);
        vcdp->fullBus(c+11137,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__acbc),32);
        vcdp->fullBus(c+11145,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__ab),32);
        vcdp->fullBus(c+11153,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__a),32);
        vcdp->fullBus(c+11161,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__b),32);
        vcdp->fullBit(c+11169,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__arbr_rdy));
        vcdp->fullBit(c+11177,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__acbc_rdy));
        vcdp->fullBit(c+11185,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__ab_rdy));
        vcdp->fullBit(c+11193,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__sab_rdy));
        vcdp->fullBit(c+11201,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1_recv_rdy));
        vcdp->fullBit(c+11209,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2_recv_rdy));
        vcdp->fullBit(c+11217,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3_recv_rdy));
        vcdp->fullBus(c+11225,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__act),32);
        vcdp->fullBus(c+11233,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__art),32);
        vcdp->fullBus(c+11241,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__bct),32);
        vcdp->fullBus(c+11249,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__brt),32);
        vcdp->fullBus(c+11257,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__hb),32);
        vcdp->fullQuad(c+11265,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__ha),48);
        vcdp->fullBit(c+11281,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter))));
        vcdp->fullBus(c+11289,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__hb),32);
        vcdp->fullQuad(c+11297,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__ha),48);
        vcdp->fullBit(c+11313,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter))));
        vcdp->fullBus(c+11321,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__hb),32);
        vcdp->fullQuad(c+11329,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__ha),48);
        vcdp->fullBit(c+11345,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter))));
        vcdp->fullBit(c+11353,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__send_val));
        vcdp->fullBit(c+11361,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__recv_rdy));
        vcdp->fullBus(c+11369,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__cr),32);
        vcdp->fullBus(c+11377,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__cc),32);
        vcdp->fullBus(c+11385,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__dr),32);
        vcdp->fullBus(c+11393,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__dc),32);
        vcdp->fullBit(c+11401,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul_rdy));
        vcdp->fullBus(c+11409,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__arbr),32);
        vcdp->fullBus(c+11417,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__acbc),32);
        vcdp->fullBus(c+11425,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__ab),32);
        vcdp->fullBus(c+11433,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__a),32);
        vcdp->fullBus(c+11441,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__b),32);
        vcdp->fullBit(c+11449,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__arbr_rdy));
        vcdp->fullBit(c+11457,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__acbc_rdy));
        vcdp->fullBit(c+11465,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__ab_rdy));
        vcdp->fullBit(c+11473,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__sab_rdy));
        vcdp->fullBit(c+11481,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1_recv_rdy));
        vcdp->fullBit(c+11489,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2_recv_rdy));
        vcdp->fullBit(c+11497,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3_recv_rdy));
        vcdp->fullBus(c+11505,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__act),32);
        vcdp->fullBus(c+11513,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__art),32);
        vcdp->fullBus(c+11521,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__bct),32);
        vcdp->fullBus(c+11529,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__brt),32);
        vcdp->fullBus(c+11537,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__hb),32);
        vcdp->fullQuad(c+11545,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__ha),48);
        vcdp->fullBit(c+11561,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter))));
        vcdp->fullBus(c+11569,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__hb),32);
        vcdp->fullQuad(c+11577,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__ha),48);
        vcdp->fullBit(c+11593,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter))));
        vcdp->fullBus(c+11601,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__hb),32);
        vcdp->fullQuad(c+11609,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__ha),48);
        vcdp->fullBit(c+11625,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter))));
        vcdp->fullBit(c+11633,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__send_val));
        vcdp->fullBit(c+11641,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__recv_rdy));
        vcdp->fullBus(c+11649,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__cr),32);
        vcdp->fullBus(c+11657,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__cc),32);
        vcdp->fullBus(c+11665,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__dr),32);
        vcdp->fullBus(c+11673,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__dc),32);
        vcdp->fullBit(c+11681,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__mul_rdy));
        vcdp->fullBus(c+11689,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__arbr),32);
        vcdp->fullBus(c+11697,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__acbc),32);
        vcdp->fullBus(c+11705,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__ab),32);
        vcdp->fullBus(c+11713,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__a),32);
        vcdp->fullBus(c+11721,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__b),32);
        vcdp->fullBit(c+11729,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__arbr_rdy));
        vcdp->fullBit(c+11737,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__acbc_rdy));
        vcdp->fullBit(c+11745,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__ab_rdy));
        vcdp->fullBit(c+11753,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__sab_rdy));
        vcdp->fullBit(c+11761,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1_recv_rdy));
        vcdp->fullBit(c+11769,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2_recv_rdy));
        vcdp->fullBit(c+11777,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3_recv_rdy));
        vcdp->fullBus(c+11785,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__act),32);
        vcdp->fullBus(c+11793,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__art),32);
        vcdp->fullBus(c+11801,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__bct),32);
        vcdp->fullBus(c+11809,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__brt),32);
        vcdp->fullBus(c+11817,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__hb),32);
        vcdp->fullQuad(c+11825,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__ha),48);
        vcdp->fullBit(c+11841,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter))));
        vcdp->fullBus(c+11849,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__hb),32);
        vcdp->fullQuad(c+11857,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__ha),48);
        vcdp->fullBit(c+11873,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter))));
        vcdp->fullBus(c+11881,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__hb),32);
        vcdp->fullQuad(c+11889,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__ha),48);
        vcdp->fullBit(c+11905,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter))));
        vcdp->fullBit(c+11913,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__send_val));
        vcdp->fullBit(c+11921,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__recv_rdy));
        vcdp->fullBus(c+11929,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__cr),32);
        vcdp->fullBus(c+11937,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__cc),32);
        vcdp->fullBus(c+11945,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__dr),32);
        vcdp->fullBus(c+11953,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__dc),32);
        vcdp->fullBit(c+11961,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__mul_rdy));
        vcdp->fullBus(c+11969,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__arbr),32);
        vcdp->fullBus(c+11977,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__acbc),32);
        vcdp->fullBus(c+11985,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__ab),32);
        vcdp->fullBus(c+11993,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__a),32);
        vcdp->fullBus(c+12001,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__b),32);
        vcdp->fullBit(c+12009,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__arbr_rdy));
        vcdp->fullBit(c+12017,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__acbc_rdy));
        vcdp->fullBit(c+12025,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__ab_rdy));
        vcdp->fullBit(c+12033,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__sab_rdy));
        vcdp->fullBit(c+12041,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1_recv_rdy));
        vcdp->fullBit(c+12049,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2_recv_rdy));
        vcdp->fullBit(c+12057,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3_recv_rdy));
        vcdp->fullBus(c+12065,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__act),32);
        vcdp->fullBus(c+12073,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__art),32);
        vcdp->fullBus(c+12081,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__bct),32);
        vcdp->fullBus(c+12089,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__brt),32);
        vcdp->fullBus(c+12097,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__hb),32);
        vcdp->fullQuad(c+12105,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__ha),48);
        vcdp->fullBit(c+12121,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter))));
        vcdp->fullBus(c+12129,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__hb),32);
        vcdp->fullQuad(c+12137,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__ha),48);
        vcdp->fullBit(c+12153,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter))));
        vcdp->fullBus(c+12161,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__hb),32);
        vcdp->fullQuad(c+12169,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__ha),48);
        vcdp->fullBit(c+12185,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter))));
        vcdp->fullBit(c+12193,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__send_val));
        vcdp->fullBit(c+12201,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__recv_rdy));
        vcdp->fullBus(c+12209,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__cr),32);
        vcdp->fullBus(c+12217,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__cc),32);
        vcdp->fullBus(c+12225,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__dr),32);
        vcdp->fullBus(c+12233,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__dc),32);
        vcdp->fullBit(c+12241,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__mul_rdy));
        vcdp->fullBus(c+12249,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__arbr),32);
        vcdp->fullBus(c+12257,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__acbc),32);
        vcdp->fullBus(c+12265,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__ab),32);
        vcdp->fullBus(c+12273,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__a),32);
        vcdp->fullBus(c+12281,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__b),32);
        vcdp->fullBit(c+12289,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__arbr_rdy));
        vcdp->fullBit(c+12297,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__acbc_rdy));
        vcdp->fullBit(c+12305,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__ab_rdy));
        vcdp->fullBit(c+12313,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__sab_rdy));
        vcdp->fullBit(c+12321,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1_recv_rdy));
        vcdp->fullBit(c+12329,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2_recv_rdy));
        vcdp->fullBit(c+12337,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3_recv_rdy));
        vcdp->fullBus(c+12345,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__act),32);
        vcdp->fullBus(c+12353,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__art),32);
        vcdp->fullBus(c+12361,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__bct),32);
        vcdp->fullBus(c+12369,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__brt),32);
        vcdp->fullBus(c+12377,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__hb),32);
        vcdp->fullQuad(c+12385,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__ha),48);
        vcdp->fullBit(c+12401,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter))));
        vcdp->fullBus(c+12409,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__hb),32);
        vcdp->fullQuad(c+12417,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__ha),48);
        vcdp->fullBit(c+12433,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter))));
        vcdp->fullBus(c+12441,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__hb),32);
        vcdp->fullQuad(c+12449,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__ha),48);
        vcdp->fullBit(c+12465,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter))));
        vcdp->fullBit(c+12473,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__send_val));
        vcdp->fullBit(c+12481,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__recv_rdy));
        vcdp->fullBus(c+12489,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__cr),32);
        vcdp->fullBus(c+12497,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__cc),32);
        vcdp->fullBus(c+12505,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__dr),32);
        vcdp->fullBus(c+12513,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT____Vcellout__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__dc),32);
        vcdp->fullBit(c+12521,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__mul_rdy));
        vcdp->fullBus(c+12529,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__arbr),32);
        vcdp->fullBus(c+12537,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__acbc),32);
        vcdp->fullBus(c+12545,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__ab),32);
        vcdp->fullBus(c+12553,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__a),32);
        vcdp->fullBus(c+12561,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__b),32);
        vcdp->fullBit(c+12569,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__arbr_rdy));
        vcdp->fullBit(c+12577,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__acbc_rdy));
        vcdp->fullBit(c+12585,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__ab_rdy));
        vcdp->fullBit(c+12593,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__sab_rdy));
        vcdp->fullBit(c+12601,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1_recv_rdy));
        vcdp->fullBit(c+12609,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2_recv_rdy));
        vcdp->fullBit(c+12617,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3_recv_rdy));
        vcdp->fullBus(c+12625,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__act),32);
        vcdp->fullBus(c+12633,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__art),32);
        vcdp->fullBus(c+12641,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__bct),32);
        vcdp->fullBus(c+12649,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__brt),32);
        vcdp->fullBus(c+12657,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__hb),32);
        vcdp->fullQuad(c+12665,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__ha),48);
        vcdp->fullBit(c+12681,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter))));
        vcdp->fullBus(c+12689,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__hb),32);
        vcdp->fullQuad(c+12697,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__ha),48);
        vcdp->fullBit(c+12713,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter))));
        vcdp->fullBus(c+12721,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__hb),32);
        vcdp->fullQuad(c+12729,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__ha),48);
        vcdp->fullBit(c+12745,((0x1fU == (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter))));
        vcdp->fullQuad(c+12753,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.acc),48);
        vcdp->fullBus(c+12769,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter),6);
        vcdp->fullBus(c+12777,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+12785,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.acc),48);
        vcdp->fullBus(c+12801,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter),6);
        vcdp->fullBus(c+12809,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+12817,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.acc),48);
        vcdp->fullBus(c+12833,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter),6);
        vcdp->fullBus(c+12841,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+12849,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.acc),48);
        vcdp->fullBus(c+12865,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter),6);
        vcdp->fullBus(c+12873,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+12881,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.acc),48);
        vcdp->fullBus(c+12897,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter),6);
        vcdp->fullBus(c+12905,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+12913,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.acc),48);
        vcdp->fullBus(c+12929,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter),6);
        vcdp->fullBus(c+12937,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+12945,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.acc),48);
        vcdp->fullBus(c+12961,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter),6);
        vcdp->fullBus(c+12969,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+12977,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.acc),48);
        vcdp->fullBus(c+12993,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter),6);
        vcdp->fullBus(c+13001,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+13009,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.acc),48);
        vcdp->fullBus(c+13025,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter),6);
        vcdp->fullBus(c+13033,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+13041,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.acc),48);
        vcdp->fullBus(c+13057,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter),6);
        vcdp->fullBus(c+13065,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+13073,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.acc),48);
        vcdp->fullBus(c+13089,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter),6);
        vcdp->fullBus(c+13097,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+13105,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.acc),48);
        vcdp->fullBus(c+13121,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter),6);
        vcdp->fullBus(c+13129,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+13137,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.acc),48);
        vcdp->fullBus(c+13153,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter),6);
        vcdp->fullBus(c+13161,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+13169,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.acc),48);
        vcdp->fullBus(c+13185,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter),6);
        vcdp->fullBus(c+13193,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+13201,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.acc),48);
        vcdp->fullBus(c+13217,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter),6);
        vcdp->fullBus(c+13225,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+13233,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.acc),48);
        vcdp->fullBus(c+13249,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter),6);
        vcdp->fullBus(c+13257,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+13265,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.acc),48);
        vcdp->fullBus(c+13281,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter),6);
        vcdp->fullBus(c+13289,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+13297,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.acc),48);
        vcdp->fullBus(c+13313,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter),6);
        vcdp->fullBus(c+13321,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+13329,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.acc),48);
        vcdp->fullBus(c+13345,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter),6);
        vcdp->fullBus(c+13353,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+13361,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.acc),48);
        vcdp->fullBus(c+13377,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter),6);
        vcdp->fullBus(c+13385,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+13393,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.acc),48);
        vcdp->fullBus(c+13409,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter),6);
        vcdp->fullBus(c+13417,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+13425,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.acc),48);
        vcdp->fullBus(c+13441,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter),6);
        vcdp->fullBus(c+13449,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+13457,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.acc),48);
        vcdp->fullBus(c+13473,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter),6);
        vcdp->fullBus(c+13481,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+13489,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.acc),48);
        vcdp->fullBus(c+13505,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter),6);
        vcdp->fullBus(c+13513,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+13521,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.acc),48);
        vcdp->fullBus(c+13537,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter),6);
        vcdp->fullBus(c+13545,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+13553,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.acc),48);
        vcdp->fullBus(c+13569,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter),6);
        vcdp->fullBus(c+13577,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+13585,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.acc),48);
        vcdp->fullBus(c+13601,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter),6);
        vcdp->fullBus(c+13609,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+13617,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.acc),48);
        vcdp->fullBus(c+13633,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter),6);
        vcdp->fullBus(c+13641,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+13649,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.acc),48);
        vcdp->fullBus(c+13665,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter),6);
        vcdp->fullBus(c+13673,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+13681,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.acc),48);
        vcdp->fullBus(c+13697,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter),6);
        vcdp->fullBus(c+13705,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+13713,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.acc),48);
        vcdp->fullBus(c+13729,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter),6);
        vcdp->fullBus(c+13737,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+13745,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.acc),48);
        vcdp->fullBus(c+13761,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter),6);
        vcdp->fullBus(c+13769,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+13777,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.acc),48);
        vcdp->fullBus(c+13793,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter),6);
        vcdp->fullBus(c+13801,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+13809,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.acc),48);
        vcdp->fullBus(c+13825,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter),6);
        vcdp->fullBus(c+13833,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+13841,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.acc),48);
        vcdp->fullBus(c+13857,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter),6);
        vcdp->fullBus(c+13865,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__cinI.counter)))),6);
        vcdp->fullQuad(c+13873,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.acc),48);
        vcdp->fullBus(c+13889,(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter),6);
        vcdp->fullBus(c+13897,((0x3fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__cinI.counter)))),6);
        vcdp->fullBit(c+13905,(vlTOPp->clk));
        vcdp->fullBit(c+13913,(vlTOPp->reset));
        vcdp->fullArray(c+13921,(vlTOPp->recv_msg),256);
        vcdp->fullBit(c+13985,(vlTOPp->recv_rdy));
        vcdp->fullBit(c+13993,(vlTOPp->recv_val));
        vcdp->fullArray(c+14001,(vlTOPp->send_msg),256);
        vcdp->fullBit(c+14065,(vlTOPp->send_rdy));
        vcdp->fullBit(c+14073,(vlTOPp->send_val));
        vcdp->fullBus(c+14081,(0x20U),32);
        vcdp->fullBus(c+14089,(0x10U),32);
        vcdp->fullBus(c+14097,(8U),32);
        vcdp->fullBus(c+14105,(8U),32);
        vcdp->fullBus(c+14113,(8U),32);
        vcdp->fullBus(c+14121,(0U),32);
        vcdp->fullBus(c+14129,(1U),32);
        vcdp->fullBit(c+14137,(1U));
        vcdp->fullBus(c+14145,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__hc),32);
        vcdp->fullBus(c+14153,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__hc),32);
        vcdp->fullBus(c+14161,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__hc),32);
        vcdp->fullBus(c+14169,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__hc),32);
        vcdp->fullBus(c+14177,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__hc),32);
        vcdp->fullBus(c+14185,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__hc),32);
        vcdp->fullBus(c+14193,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__hc),32);
        vcdp->fullBus(c+14201,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__hc),32);
        vcdp->fullBus(c+14209,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__hc),32);
        vcdp->fullBus(c+14217,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__hc),32);
        vcdp->fullBus(c+14225,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__hc),32);
        vcdp->fullBus(c+14233,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__hc),32);
        vcdp->fullBus(c+14241,(0U),32);
        vcdp->fullBus(c+14249,(0U),32);
        vcdp->fullBus(c+14257,(4U),32);
        vcdp->fullBus(c+14265,(1U),32);
        vcdp->fullBus(c+14273,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__hc),32);
        vcdp->fullBus(c+14281,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__hc),32);
        vcdp->fullBus(c+14289,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__hc),32);
        vcdp->fullBus(c+14297,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__hc),32);
        vcdp->fullBus(c+14305,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__hc),32);
        vcdp->fullBus(c+14313,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__hc),32);
        vcdp->fullBus(c+14321,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__hc),32);
        vcdp->fullBus(c+14329,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__hc),32);
        vcdp->fullBus(c+14337,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__hc),32);
        vcdp->fullBus(c+14345,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__hc),32);
        vcdp->fullBus(c+14353,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__hc),32);
        vcdp->fullBus(c+14361,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__hc),32);
        vcdp->fullBus(c+14369,(2U),32);
        vcdp->fullBus(c+14377,(6U),32);
        vcdp->fullBus(c+14385,(2U),32);
        vcdp->fullBus(c+14393,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__hc),32);
        vcdp->fullBus(c+14401,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__hc),32);
        vcdp->fullBus(c+14409,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__hc),32);
        vcdp->fullBus(c+14417,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__hc),32);
        vcdp->fullBus(c+14425,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__hc),32);
        vcdp->fullBus(c+14433,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__hc),32);
        vcdp->fullBus(c+14441,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__hc),32);
        vcdp->fullBus(c+14449,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__hc),32);
        vcdp->fullBus(c+14457,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__hc),32);
        vcdp->fullBus(c+14465,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m1__DOT__hc),32);
        vcdp->fullBus(c+14473,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m2__DOT__hc),32);
        vcdp->fullBus(c+14481,(vlTOPp->CombinationalFFT__DOT__v__DOT__comb_fft__DOT__genblk3__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__bfu_in__DOT__genblk1__DOT__mul__DOT__m3__DOT__hc),32);
        vcdp->fullBus(c+14489,(1U),32);
        vcdp->fullBus(c+14497,(3U),32);
    }
}
