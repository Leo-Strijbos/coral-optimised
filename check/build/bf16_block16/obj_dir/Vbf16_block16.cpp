// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbf16_block16__pch.h"

//============================================================
// Constructors

Vbf16_block16::Vbf16_block16(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vbf16_block16__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , a0{vlSymsp->TOP.a0}
    , a1{vlSymsp->TOP.a1}
    , a2{vlSymsp->TOP.a2}
    , a3{vlSymsp->TOP.a3}
    , a4{vlSymsp->TOP.a4}
    , a5{vlSymsp->TOP.a5}
    , a6{vlSymsp->TOP.a6}
    , a7{vlSymsp->TOP.a7}
    , a8{vlSymsp->TOP.a8}
    , a9{vlSymsp->TOP.a9}
    , a10{vlSymsp->TOP.a10}
    , a11{vlSymsp->TOP.a11}
    , a12{vlSymsp->TOP.a12}
    , a13{vlSymsp->TOP.a13}
    , a14{vlSymsp->TOP.a14}
    , a15{vlSymsp->TOP.a15}
    , b0{vlSymsp->TOP.b0}
    , b1{vlSymsp->TOP.b1}
    , b2{vlSymsp->TOP.b2}
    , b3{vlSymsp->TOP.b3}
    , b4{vlSymsp->TOP.b4}
    , b5{vlSymsp->TOP.b5}
    , b6{vlSymsp->TOP.b6}
    , b7{vlSymsp->TOP.b7}
    , b8{vlSymsp->TOP.b8}
    , b9{vlSymsp->TOP.b9}
    , b10{vlSymsp->TOP.b10}
    , b11{vlSymsp->TOP.b11}
    , b12{vlSymsp->TOP.b12}
    , b13{vlSymsp->TOP.b13}
    , b14{vlSymsp->TOP.b14}
    , b15{vlSymsp->TOP.b15}
    , c{vlSymsp->TOP.c}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vbf16_block16::Vbf16_block16(const char* _vcname__)
    : Vbf16_block16(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vbf16_block16::~Vbf16_block16() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vbf16_block16___024root___eval_debug_assertions(Vbf16_block16___024root* vlSelf);
#endif  // VL_DEBUG
void Vbf16_block16___024root___eval_static(Vbf16_block16___024root* vlSelf);
void Vbf16_block16___024root___eval_initial(Vbf16_block16___024root* vlSelf);
void Vbf16_block16___024root___eval_settle(Vbf16_block16___024root* vlSelf);
void Vbf16_block16___024root___eval(Vbf16_block16___024root* vlSelf);

void Vbf16_block16::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbf16_block16::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbf16_block16___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vbf16_block16___024root___eval_static(&(vlSymsp->TOP));
        Vbf16_block16___024root___eval_initial(&(vlSymsp->TOP));
        Vbf16_block16___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vbf16_block16___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vbf16_block16::eventsPending() { return false; }

uint64_t Vbf16_block16::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vbf16_block16::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vbf16_block16___024root___eval_final(Vbf16_block16___024root* vlSelf);

VL_ATTR_COLD void Vbf16_block16::final() {
    Vbf16_block16___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vbf16_block16::hierName() const { return vlSymsp->name(); }
const char* Vbf16_block16::modelName() const { return "Vbf16_block16"; }
unsigned Vbf16_block16::threads() const { return 1; }
void Vbf16_block16::prepareClone() const { contextp()->prepareClone(); }
void Vbf16_block16::atClone() const {
    contextp()->threadPoolpOnClone();
}
