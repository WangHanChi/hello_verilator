// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdesign_under_test.h for the primary calling header

#include "verilated.h"

#include "Vdesign_under_test___024root.h"

VL_ATTR_COLD void Vdesign_under_test___024root___eval_static(Vdesign_under_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdesign_under_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_under_test___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vdesign_under_test___024root___eval_initial(Vdesign_under_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdesign_under_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_under_test___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vdesign_under_test___024root___eval_final(Vdesign_under_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdesign_under_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_under_test___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vdesign_under_test___024root___eval_triggers__stl(Vdesign_under_test___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdesign_under_test___024root___dump_triggers__stl(Vdesign_under_test___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vdesign_under_test___024root___eval_stl(Vdesign_under_test___024root* vlSelf);

VL_ATTR_COLD void Vdesign_under_test___024root___eval_settle(Vdesign_under_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdesign_under_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_under_test___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vdesign_under_test___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if ((0x64U < vlSelf->__VstlIterCount)) {
#ifdef VL_DEBUG
                Vdesign_under_test___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("design_under_test.sv", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vdesign_under_test___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdesign_under_test___024root___dump_triggers__stl(Vdesign_under_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdesign_under_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_under_test___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdesign_under_test___024root___stl_sequent__TOP__0(Vdesign_under_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdesign_under_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_under_test___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->data = (0xffU & (IData)(vlSelf->design_under_test__DOT__out_all));
    vlSelf->valid = (0U != (IData)(vlSelf->data));
}

VL_ATTR_COLD void Vdesign_under_test___024root___eval_stl(Vdesign_under_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdesign_under_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_under_test___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vdesign_under_test___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdesign_under_test___024root___dump_triggers__act(Vdesign_under_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdesign_under_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_under_test___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdesign_under_test___024root___dump_triggers__nba(Vdesign_under_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdesign_under_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_under_test___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdesign_under_test___024root___ctor_var_reset(Vdesign_under_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdesign_under_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_under_test___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->valid = VL_RAND_RESET_I(1);
    vlSelf->data = VL_RAND_RESET_I(8);
    vlSelf->design_under_test__DOT__out_all = VL_RAND_RESET_Q(40);
    vlSelf->__VstlIterCount = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst = VL_RAND_RESET_I(1);
    vlSelf->__VactIterCount = 0;
    vlSelf->__VactContinue = 0;
}
