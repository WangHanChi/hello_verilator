// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdesign_under_test.h for the primary calling header

#ifndef VERILATED_VDESIGN_UNDER_TEST___024ROOT_H_
#define VERILATED_VDESIGN_UNDER_TEST___024ROOT_H_  // guard

#include "verilated.h"

class Vdesign_under_test__Syms;

class Vdesign_under_test___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(valid,0,0);
    VL_OUT8(data,7,0);
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__rst;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    QData/*39:0*/ design_under_test__DOT__out_all;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdesign_under_test__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdesign_under_test___024root(Vdesign_under_test__Syms* symsp, const char* name);
    ~Vdesign_under_test___024root();
    VL_UNCOPYABLE(Vdesign_under_test___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
