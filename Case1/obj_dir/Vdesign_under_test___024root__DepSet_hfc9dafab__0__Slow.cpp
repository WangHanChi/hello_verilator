// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdesign_under_test.h for the primary calling header

#include "verilated.h"

#include "Vdesign_under_test__Syms.h"
#include "Vdesign_under_test___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdesign_under_test___024root___dump_triggers__stl(Vdesign_under_test___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdesign_under_test___024root___eval_triggers__stl(Vdesign_under_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdesign_under_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_under_test___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdesign_under_test___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
