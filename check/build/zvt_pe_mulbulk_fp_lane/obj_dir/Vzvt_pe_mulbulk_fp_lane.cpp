// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vzvt_pe_mulbulk_fp_lane__pch.h"

//============================================================
// Constructors

Vzvt_pe_mulbulk_fp_lane::Vzvt_pe_mulbulk_fp_lane(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vzvt_pe_mulbulk_fp_lane__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , reg_enable{vlSymsp->TOP.reg_enable}
    , up_valid{vlSymsp->TOP.up_valid}
    , rnd_mode{vlSymsp->TOP.rnd_mode}
    , mask{vlSymsp->TOP.mask}
    , src_fmt{vlSymsp->TOP.src_fmt}
    , dst_fmt{vlSymsp->TOP.dst_fmt}
    , status{vlSymsp->TOP.status}
    , down_valid{vlSymsp->TOP.down_valid}
    , result{vlSymsp->TOP.result}
    , operands{vlSymsp->TOP.operands}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vzvt_pe_mulbulk_fp_lane::Vzvt_pe_mulbulk_fp_lane(const char* _vcname__)
    : Vzvt_pe_mulbulk_fp_lane(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vzvt_pe_mulbulk_fp_lane::~Vzvt_pe_mulbulk_fp_lane() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vzvt_pe_mulbulk_fp_lane___024root___eval_debug_assertions(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf);
#endif  // VL_DEBUG
void Vzvt_pe_mulbulk_fp_lane___024root___eval_static(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf);
void Vzvt_pe_mulbulk_fp_lane___024root___eval_initial(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf);
void Vzvt_pe_mulbulk_fp_lane___024root___eval_settle(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf);
void Vzvt_pe_mulbulk_fp_lane___024root___eval(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf);

void Vzvt_pe_mulbulk_fp_lane::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vzvt_pe_mulbulk_fp_lane::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vzvt_pe_mulbulk_fp_lane___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vzvt_pe_mulbulk_fp_lane___024root___eval_static(&(vlSymsp->TOP));
        Vzvt_pe_mulbulk_fp_lane___024root___eval_initial(&(vlSymsp->TOP));
        Vzvt_pe_mulbulk_fp_lane___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vzvt_pe_mulbulk_fp_lane___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vzvt_pe_mulbulk_fp_lane::eventsPending() { return false; }

uint64_t Vzvt_pe_mulbulk_fp_lane::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vzvt_pe_mulbulk_fp_lane::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vzvt_pe_mulbulk_fp_lane___024root___eval_final(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf);

VL_ATTR_COLD void Vzvt_pe_mulbulk_fp_lane::final() {
    Vzvt_pe_mulbulk_fp_lane___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vzvt_pe_mulbulk_fp_lane::hierName() const { return vlSymsp->name(); }
const char* Vzvt_pe_mulbulk_fp_lane::modelName() const { return "Vzvt_pe_mulbulk_fp_lane"; }
unsigned Vzvt_pe_mulbulk_fp_lane::threads() const { return 1; }
void Vzvt_pe_mulbulk_fp_lane::prepareClone() const { contextp()->prepareClone(); }
void Vzvt_pe_mulbulk_fp_lane::atClone() const {
    contextp()->threadPoolpOnClone();
}
