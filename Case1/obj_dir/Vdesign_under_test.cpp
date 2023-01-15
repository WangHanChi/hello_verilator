// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdesign_under_test.h"
#include "Vdesign_under_test__Syms.h"

//============================================================
// Constructors

Vdesign_under_test::Vdesign_under_test(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdesign_under_test__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , valid{vlSymsp->TOP.valid}
    , data{vlSymsp->TOP.data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdesign_under_test::Vdesign_under_test(const char* _vcname__)
    : Vdesign_under_test(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdesign_under_test::~Vdesign_under_test() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdesign_under_test___024root___eval_debug_assertions(Vdesign_under_test___024root* vlSelf);
#endif  // VL_DEBUG
void Vdesign_under_test___024root___eval_static(Vdesign_under_test___024root* vlSelf);
void Vdesign_under_test___024root___eval_initial(Vdesign_under_test___024root* vlSelf);
void Vdesign_under_test___024root___eval_settle(Vdesign_under_test___024root* vlSelf);
void Vdesign_under_test___024root___eval(Vdesign_under_test___024root* vlSelf);

void Vdesign_under_test::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdesign_under_test::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdesign_under_test___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdesign_under_test___024root___eval_static(&(vlSymsp->TOP));
        Vdesign_under_test___024root___eval_initial(&(vlSymsp->TOP));
        Vdesign_under_test___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdesign_under_test___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
}

//============================================================
// Events and timing
bool Vdesign_under_test::eventsPending() { return false; }

uint64_t Vdesign_under_test::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdesign_under_test::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdesign_under_test___024root___eval_final(Vdesign_under_test___024root* vlSelf);

VL_ATTR_COLD void Vdesign_under_test::final() {
    Vdesign_under_test___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdesign_under_test::hierName() const { return vlSymsp->name(); }
const char* Vdesign_under_test::modelName() const { return "Vdesign_under_test"; }
unsigned Vdesign_under_test::threads() const { return 1; }
