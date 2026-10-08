// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcoral_bf16_tile_add__pch.h"

//============================================================
// Constructors

Vcoral_bf16_tile_add::Vcoral_bf16_tile_add(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcoral_bf16_tile_add__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , x0{vlSymsp->TOP.x0}
    , x1{vlSymsp->TOP.x1}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcoral_bf16_tile_add::Vcoral_bf16_tile_add(const char* _vcname__)
    : Vcoral_bf16_tile_add(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcoral_bf16_tile_add::~Vcoral_bf16_tile_add() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcoral_bf16_tile_add___024root___eval_debug_assertions(Vcoral_bf16_tile_add___024root* vlSelf);
#endif  // VL_DEBUG
void Vcoral_bf16_tile_add___024root___eval_static(Vcoral_bf16_tile_add___024root* vlSelf);
void Vcoral_bf16_tile_add___024root___eval_initial(Vcoral_bf16_tile_add___024root* vlSelf);
void Vcoral_bf16_tile_add___024root___eval_settle(Vcoral_bf16_tile_add___024root* vlSelf);
void Vcoral_bf16_tile_add___024root___eval(Vcoral_bf16_tile_add___024root* vlSelf);

void Vcoral_bf16_tile_add::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcoral_bf16_tile_add::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcoral_bf16_tile_add___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcoral_bf16_tile_add___024root___eval_static(&(vlSymsp->TOP));
        Vcoral_bf16_tile_add___024root___eval_initial(&(vlSymsp->TOP));
        Vcoral_bf16_tile_add___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcoral_bf16_tile_add___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcoral_bf16_tile_add::eventsPending() { return false; }

uint64_t Vcoral_bf16_tile_add::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcoral_bf16_tile_add::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcoral_bf16_tile_add___024root___eval_final(Vcoral_bf16_tile_add___024root* vlSelf);

VL_ATTR_COLD void Vcoral_bf16_tile_add::final() {
    Vcoral_bf16_tile_add___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcoral_bf16_tile_add::hierName() const { return vlSymsp->name(); }
const char* Vcoral_bf16_tile_add::modelName() const { return "Vcoral_bf16_tile_add"; }
unsigned Vcoral_bf16_tile_add::threads() const { return 1; }
void Vcoral_bf16_tile_add::prepareClone() const { contextp()->prepareClone(); }
void Vcoral_bf16_tile_add::atClone() const {
    contextp()->threadPoolpOnClone();
}
