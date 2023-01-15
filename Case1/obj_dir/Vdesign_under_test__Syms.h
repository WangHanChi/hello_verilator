// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDESIGN_UNDER_TEST__SYMS_H_
#define VERILATED_VDESIGN_UNDER_TEST__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdesign_under_test.h"

// INCLUDE MODULE CLASSES
#include "Vdesign_under_test___024root.h"

// SYMS CLASS (contains all model state)
class Vdesign_under_test__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdesign_under_test* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdesign_under_test___024root   TOP;

    // CONSTRUCTORS
    Vdesign_under_test__Syms(VerilatedContext* contextp, const char* namep, Vdesign_under_test* modelp);
    ~Vdesign_under_test__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
