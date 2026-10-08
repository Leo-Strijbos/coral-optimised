// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcoral_bf16_pair__pch.h"

//============================================================
// Constructors

Vcoral_bf16_pair::Vcoral_bf16_pair(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcoral_bf16_pair__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , a0{vlSymsp->TOP.a0}
    , a1{vlSymsp->TOP.a1}
    , b0{vlSymsp->TOP.b0}
    , b1{vlSymsp->TOP.b1}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcoral_bf16_pair::Vcoral_bf16_pair(const char* _vcname__)
    : Vcoral_bf16_pair(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcoral_bf16_pair::~Vcoral_bf16_pair() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcoral_bf16_pair___024root___eval_debug_assertions(Vcoral_bf16_pair___024root* vlSelf);
#endif  // VL_DEBUG
void Vcoral_bf16_pair___024root___eval_static(Vcoral_bf16_pair___024root* vlSelf);
void Vcoral_bf16_pair___024root___eval_initial(Vcoral_bf16_pair___024root* vlSelf);
void Vcoral_bf16_pair___024root___eval_settle(Vcoral_bf16_pair___024root* vlSelf);
void Vcoral_bf16_pair___024root___eval(Vcoral_bf16_pair___024root* vlSelf);

void Vcoral_bf16_pair::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcoral_bf16_pair::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcoral_bf16_pair___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcoral_bf16_pair___024root___eval_static(&(vlSymsp->TOP));
        Vcoral_bf16_pair___024root___eval_initial(&(vlSymsp->TOP));
        Vcoral_bf16_pair___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcoral_bf16_pair___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcoral_bf16_pair::eventsPending() { return false; }

uint64_t Vcoral_bf16_pair::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcoral_bf16_pair::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcoral_bf16_pair___024root___eval_final(Vcoral_bf16_pair___024root* vlSelf);

VL_ATTR_COLD void Vcoral_bf16_pair::final() {
    Vcoral_bf16_pair___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcoral_bf16_pair::hierName() const { return vlSymsp->name(); }
const char* Vcoral_bf16_pair::modelName() const { return "Vcoral_bf16_pair"; }
unsigned Vcoral_bf16_pair::threads() const { return 1; }
void Vcoral_bf16_pair::prepareClone() const { contextp()->prepareClone(); }
void Vcoral_bf16_pair::atClone() const {
    contextp()->threadPoolpOnClone();
}
