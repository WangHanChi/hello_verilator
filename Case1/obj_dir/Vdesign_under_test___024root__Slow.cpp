// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdesign_under_test.h for the primary calling header

#include "verilated.h"

#include "Vdesign_under_test__Syms.h"
#include "Vdesign_under_test___024root.h"

void Vdesign_under_test___024root___ctor_var_reset(Vdesign_under_test___024root* vlSelf);

Vdesign_under_test___024root::Vdesign_under_test___024root(Vdesign_under_test__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdesign_under_test___024root___ctor_var_reset(this);
}

void Vdesign_under_test___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vdesign_under_test___024root::~Vdesign_under_test___024root() {
}
