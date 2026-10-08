// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vzvt_pe_adder_fp_lane.h for the primary calling header

#include "Vzvt_pe_adder_fp_lane__pch.h"
#include "Vzvt_pe_adder_fp_lane___024root.h"

VL_ATTR_COLD void Vzvt_pe_adder_fp_lane___024root___eval_static(Vzvt_pe_adder_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_adder_fp_lane___024root___eval_static\n"); );
    Vzvt_pe_adder_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__zvt_pe_adder_fp_lane__DOT__u_rounding__02estatus__0 
        = vlSelfRef.zvt_pe_adder_fp_lane__DOT__u_rounding__02estatus;
    vlSelfRef.__Vtrigprevexpr___TOP__zvt_pe_adder_fp_lane__DOT__u_rounding__02estatus__1 
        = vlSelfRef.zvt_pe_adder_fp_lane__DOT__u_rounding__02estatus;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vzvt_pe_adder_fp_lane___024root___eval_initial(Vzvt_pe_adder_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_adder_fp_lane___024root___eval_initial\n"); );
    Vzvt_pe_adder_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vzvt_pe_adder_fp_lane___024root___eval_final(Vzvt_pe_adder_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_adder_fp_lane___024root___eval_final\n"); );
    Vzvt_pe_adder_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vzvt_pe_adder_fp_lane___024root___dump_triggers__stl(Vzvt_pe_adder_fp_lane___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vzvt_pe_adder_fp_lane___024root___eval_phase__stl(Vzvt_pe_adder_fp_lane___024root* vlSelf);

VL_ATTR_COLD void Vzvt_pe_adder_fp_lane___024root___eval_settle(Vzvt_pe_adder_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_adder_fp_lane___024root___eval_settle\n"); );
    Vzvt_pe_adder_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vzvt_pe_adder_fp_lane___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/Users/leostrijbos/Desktop/Code/Projects/coral-optimised/rtl/coral-original/zvt_pe_adder_fp_lane_flat.v", 7, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vzvt_pe_adder_fp_lane___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vzvt_pe_adder_fp_lane___024root___dump_triggers__stl(Vzvt_pe_adder_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_adder_fp_lane___024root___dump_triggers__stl\n"); );
    Vzvt_pe_adder_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] zvt_pe_adder_fp_lane.u_rounding.status)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vzvt_pe_adder_fp_lane___024root___stl_sequent__TOP__0(Vzvt_pe_adder_fp_lane___024root* vlSelf);
void Vzvt_pe_adder_fp_lane___024root___act_sequent__TOP__0(Vzvt_pe_adder_fp_lane___024root* vlSelf);

VL_ATTR_COLD void Vzvt_pe_adder_fp_lane___024root___eval_stl(Vzvt_pe_adder_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_adder_fp_lane___024root___eval_stl\n"); );
    Vzvt_pe_adder_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vzvt_pe_adder_fp_lane___024root___stl_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vzvt_pe_adder_fp_lane___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vzvt_pe_adder_fp_lane___024root___eval_triggers__stl(Vzvt_pe_adder_fp_lane___024root* vlSelf);

VL_ATTR_COLD bool Vzvt_pe_adder_fp_lane___024root___eval_phase__stl(Vzvt_pe_adder_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_adder_fp_lane___024root___eval_phase__stl\n"); );
    Vzvt_pe_adder_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vzvt_pe_adder_fp_lane___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vzvt_pe_adder_fp_lane___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vzvt_pe_adder_fp_lane___024root___dump_triggers__ico(Vzvt_pe_adder_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_adder_fp_lane___024root___dump_triggers__ico\n"); );
    Vzvt_pe_adder_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vzvt_pe_adder_fp_lane___024root___dump_triggers__act(Vzvt_pe_adder_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_adder_fp_lane___024root___dump_triggers__act\n"); );
    Vzvt_pe_adder_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] zvt_pe_adder_fp_lane.u_rounding.status)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vzvt_pe_adder_fp_lane___024root___dump_triggers__nba(Vzvt_pe_adder_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_adder_fp_lane___024root___dump_triggers__nba\n"); );
    Vzvt_pe_adder_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] zvt_pe_adder_fp_lane.u_rounding.status)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vzvt_pe_adder_fp_lane___024root___ctor_var_reset(Vzvt_pe_adder_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_adder_fp_lane___024root___ctor_var_reset\n"); );
    Vzvt_pe_adder_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->reg_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 784980854705351315ull);
    vlSelf->up_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8436969872887641034ull);
    vlSelf->operands = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3916314686568990588ull);
    vlSelf->do_subtract = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8863487295400761816ull);
    vlSelf->rnd_mode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12867166465957392144ull);
    vlSelf->result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16664408842984530663ull);
    vlSelf->status = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14822974759303984767ull);
    vlSelf->down_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13022698067032527366ull);
    vlSelf->zvt_pe_adder_fp_lane__DOT___0000_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4063427546960758673ull);
    vlSelf->zvt_pe_adder_fp_lane__DOT___0002_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1123481963445532045ull);
    vlSelf->zvt_pe_adder_fp_lane__DOT___0004_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8748948133504337543ull);
    vlSelf->zvt_pe_adder_fp_lane__DOT___0010_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6585537373702876899ull);
    vlSelf->zvt_pe_adder_fp_lane__DOT___0011_ = VL_SCOPED_RAND_RESET_Q(54, __VscopeHash, 143751177940089252ull);
    vlSelf->zvt_pe_adder_fp_lane__DOT___0020_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11261839512228315654ull);
    vlSelf->zvt_pe_adder_fp_lane__DOT___0035_ = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 17285889023368547295ull);
    vlSelf->zvt_pe_adder_fp_lane__DOT___0036_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12673347697813000570ull);
    vlSelf->zvt_pe_adder_fp_lane__DOT___0042_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1273790094094781292ull);
    vlSelf->zvt_pe_adder_fp_lane__DOT___0053_ = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16196554453788611418ull);
    vlSelf->zvt_pe_adder_fp_lane__DOT___0071_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13152910916249983551ull);
    vlSelf->zvt_pe_adder_fp_lane__DOT___0105_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16261660594673414451ull);
    vlSelf->zvt_pe_adder_fp_lane__DOT___0138_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17988481659287568520ull);
    vlSelf->zvt_pe_adder_fp_lane__DOT___0186_ = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3622071337248950353ull);
    vlSelf->zvt_pe_adder_fp_lane__DOT___0209_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4030043226086971864ull);
    vlSelf->zvt_pe_adder_fp_lane__DOT___0312_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15366846740998391817ull);
    vlSelf->zvt_pe_adder_fp_lane__DOT___0314_ = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 3996081723122848631ull);
    vlSelf->zvt_pe_adder_fp_lane__DOT___0341_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4020141807767986352ull);
    vlSelf->zvt_pe_adder_fp_lane__DOT___0348_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8752681343156834254ull);
    vlSelf->zvt_pe_adder_fp_lane__DOT___0362_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15883234936658488207ull);
    vlSelf->zvt_pe_adder_fp_lane__DOT___0566_ = VL_SCOPED_RAND_RESET_Q(45, __VscopeHash, 12962664557220011128ull);
    vlSelf->zvt_pe_adder_fp_lane__DOT___0693_ = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9862973724236720187ull);
    vlSelf->zvt_pe_adder_fp_lane__DOT___0695_ = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4140675604755942728ull);
    vlSelf->zvt_pe_adder_fp_lane__DOT___0719_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16069398827173556685ull);
    vlSelf->zvt_pe_adder_fp_lane__DOT___0723_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12404968516720846136ull);
    vlSelf->zvt_pe_adder_fp_lane__DOT__fp32_inf = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6591826925486368381ull);
    vlSelf->zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq = VL_SCOPED_RAND_RESET_Q(45, __VscopeHash, 15998046443862458781ull);
    vlSelf->zvt_pe_adder_fp_lane__DOT__u_rounding__02estatus = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12086879729628895015ull);
    vlSelf->__VdfgRegularize_h7cd686f0_0_25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7165071321218535307ull);
    vlSelf->__Vtrigprevexpr___TOP__zvt_pe_adder_fp_lane__DOT__u_rounding__02estatus__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2517987614317078915ull);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__zvt_pe_adder_fp_lane__DOT__u_rounding__02estatus__1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7183444805714065219ull);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14803524876191471008ull);
    vlSelf->__VactDidInit = 0;
}
