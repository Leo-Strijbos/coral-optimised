// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vzvt_pe_mulbulk_fp_lane.h for the primary calling header

#include "Vzvt_pe_mulbulk_fp_lane__pch.h"
#include "Vzvt_pe_mulbulk_fp_lane__Syms.h"
#include "Vzvt_pe_mulbulk_fp_lane___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vzvt_pe_mulbulk_fp_lane___024root___dump_triggers__ico(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf);
#endif  // VL_DEBUG

void Vzvt_pe_mulbulk_fp_lane___024root___eval_triggers__ico(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_mulbulk_fp_lane___024root___eval_triggers__ico\n"); );
    Vzvt_pe_mulbulk_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vzvt_pe_mulbulk_fp_lane___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vzvt_pe_mulbulk_fp_lane___024root___dump_triggers__act(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf);
#endif  // VL_DEBUG

void Vzvt_pe_mulbulk_fp_lane___024root___eval_triggers__act(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_mulbulk_fp_lane___024root___eval_triggers__act\n"); );
    Vzvt_pe_mulbulk_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02estatus) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02estatus__1)));
    vlSelfRef.__VactTriggered.setBit(1U, (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0129_ 
                                          != vlSelfRef.__Vtrigprevexpr___TOP__zvt_pe_mulbulk_fp_lane__DOT___0129___1));
    vlSelfRef.__VactTriggered.setBit(2U, (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0127_ 
                                          != vlSelfRef.__Vtrigprevexpr___TOP__zvt_pe_mulbulk_fp_lane__DOT___0127___1));
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.setBit(4U, ((~ (IData)(vlSelfRef.rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02estatus__1 
        = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02estatus;
    vlSelfRef.__Vtrigprevexpr___TOP__zvt_pe_mulbulk_fp_lane__DOT___0129___1 
        = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0129_;
    vlSelfRef.__Vtrigprevexpr___TOP__zvt_pe_mulbulk_fp_lane__DOT___0127___1 
        = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0127_;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(0U, 1U);
        vlSelfRef.__VactTriggered.setBit(1U, 1U);
        vlSelfRef.__VactTriggered.setBit(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vzvt_pe_mulbulk_fp_lane___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vzvt_pe_mulbulk_fp_lane___024root___act_comb__TOP__0(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_mulbulk_fp_lane___024root___act_comb__TOP__0\n"); );
    Vzvt_pe_mulbulk_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*28:0*/ zvt_pe_mulbulk_fp_lane__DOT___0131_;
    zvt_pe_mulbulk_fp_lane__DOT___0131_ = 0;
    IData/*28:0*/ zvt_pe_mulbulk_fp_lane__DOT___0132_;
    zvt_pe_mulbulk_fp_lane__DOT___0132_ = 0;
    IData/*28:0*/ zvt_pe_mulbulk_fp_lane__DOT___0135_;
    zvt_pe_mulbulk_fp_lane__DOT___0135_ = 0;
    IData/*28:0*/ zvt_pe_mulbulk_fp_lane__DOT___0140_;
    zvt_pe_mulbulk_fp_lane__DOT___0140_ = 0;
    IData/*28:0*/ zvt_pe_mulbulk_fp_lane__DOT___0142_;
    zvt_pe_mulbulk_fp_lane__DOT___0142_ = 0;
    IData/*28:0*/ zvt_pe_mulbulk_fp_lane__DOT___0154_;
    zvt_pe_mulbulk_fp_lane__DOT___0154_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0278_;
    zvt_pe_mulbulk_fp_lane__DOT___0278_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0285_;
    zvt_pe_mulbulk_fp_lane__DOT___0285_ = 0;
    QData/*55:0*/ zvt_pe_mulbulk_fp_lane__DOT___0286_;
    zvt_pe_mulbulk_fp_lane__DOT___0286_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0291_;
    zvt_pe_mulbulk_fp_lane__DOT___0291_ = 0;
    IData/*31:0*/ zvt_pe_mulbulk_fp_lane__DOT___0298_;
    zvt_pe_mulbulk_fp_lane__DOT___0298_ = 0;
    IData/*29:0*/ zvt_pe_mulbulk_fp_lane__DOT___0304_;
    zvt_pe_mulbulk_fp_lane__DOT___0304_ = 0;
    CData/*4:0*/ zvt_pe_mulbulk_fp_lane__DOT___0305_;
    zvt_pe_mulbulk_fp_lane__DOT___0305_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0306_;
    zvt_pe_mulbulk_fp_lane__DOT___0306_ = 0;
    IData/*22:0*/ zvt_pe_mulbulk_fp_lane__DOT___0310_;
    zvt_pe_mulbulk_fp_lane__DOT___0310_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0313_;
    zvt_pe_mulbulk_fp_lane__DOT___0313_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0318_;
    zvt_pe_mulbulk_fp_lane__DOT___0318_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0918_;
    zvt_pe_mulbulk_fp_lane__DOT___0918_ = 0;
    SData/*13:0*/ zvt_pe_mulbulk_fp_lane__DOT___1015_;
    zvt_pe_mulbulk_fp_lane__DOT___1015_ = 0;
    CData/*5:0*/ zvt_pe_mulbulk_fp_lane__DOT___1017_;
    zvt_pe_mulbulk_fp_lane__DOT___1017_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___1169_;
    zvt_pe_mulbulk_fp_lane__DOT___1169_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___1175_;
    zvt_pe_mulbulk_fp_lane__DOT___1175_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___1182_;
    zvt_pe_mulbulk_fp_lane__DOT___1182_ = 0;
    IData/*28:0*/ zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d____Vhsh1JdS19MRmss9R9mD9cjXtLmFkQB11yalnqYn3UuZ;
    zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d____Vhsh1JdS19MRmss9R9mD9cjXtLmFkQB11yalnqYn3UuZ = 0;
    IData/*28:0*/ zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d____Vhsh1v2Jsk7okbcfTdGP2e2ZBDBRnTjyBKhgBnmtG294;
    zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d____Vhsh1v2Jsk7okbcfTdGP2e2ZBDBRnTjyBKhgBnmtG294 = 0;
    VlWide<4>/*115:0*/ zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d__02eenabled__02emulti_lane__02efmt_tree_significand;
    VL_ZERO_W(116, zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d__02eenabled__02emulti_lane__02efmt_tree_significand);
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02eresult_guard_bit;
    zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02eresult_guard_bit = 0;
    CData/*4:0*/ zvt_pe_mulbulk_fp_lane__DOT__u_vec_align__02elzc_cnt_fix;
    zvt_pe_mulbulk_fp_lane__DOT__u_vec_align__02elzc_cnt_fix = 0;
    IData/*31:0*/ zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_16;
    zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_16 = 0;
    CData/*1:0*/ zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_66;
    zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_66 = 0;
    CData/*0:0*/ __Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3180___0__Vfuncout;
    __Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3180___0__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3180___0__b;
    __Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3180___0__b = 0;
    CData/*2:0*/ __Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3180___0__s;
    __Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3180___0__s = 0;
    CData/*0:0*/ __Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__Vfuncout;
    __Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b;
    __Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b = 0;
    CData/*5:0*/ __Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s;
    __Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s = 0;
    CData/*0:0*/ __Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3194___2__Vfuncout;
    __Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3194___2__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3194___2__b;
    __Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3194___2__b = 0;
    CData/*2:0*/ __Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3194___2__s;
    __Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3194___2__s = 0;
    CData/*0:0*/ __VdfgRegularize_h0dff6736_0_15;
    __VdfgRegularize_h0dff6736_0_15 = 0;
    CData/*0:0*/ __VdfgRegularize_h0dff6736_0_16;
    __VdfgRegularize_h0dff6736_0_16 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)(((2U 
                                                & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[0U])
                                                ? (0xffffffcU 
                                                   & (((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[2U] 
                                                        << 0x13U) 
                                                       | (0x7fffcU 
                                                          & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[1U] 
                                                             >> 0xdU))) 
                                                      | (4U 
                                                         & ((0xffffcU 
                                                             & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[1U] 
                                                                >> 0xcU)) 
                                                            | (0x1ffffcU 
                                                               & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[1U] 
                                                                  >> 0xbU))))))
                                                : 0U))) 
                              << 0x1dU) | (QData)((IData)(
                                                          ((1U 
                                                            & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[0U])
                                                            ? 
                                                           (0xffffffcU 
                                                            & (((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[1U] 
                                                                 << 0x1bU) 
                                                                | (0x7fffffcU 
                                                                   & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[0U] 
                                                                      >> 5U))) 
                                                               | (4U 
                                                                  & ((0xffffffcU 
                                                                      & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[0U] 
                                                                         >> 4U)) 
                                                                     | (0x1ffffffcU 
                                                                        & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[0U] 
                                                                           >> 3U))))))
                                                            : 0U)))));
    __Vtemp_1[1U] = ((((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0128_)
                        ? vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0129_
                        : vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0127_) 
                      << 0x1aU) | (IData)(((((QData)((IData)(
                                                             ((2U 
                                                               & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[0U])
                                                               ? 
                                                              (0xffffffcU 
                                                               & (((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[2U] 
                                                                    << 0x13U) 
                                                                   | (0x7fffcU 
                                                                      & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[1U] 
                                                                         >> 0xdU))) 
                                                                  | (4U 
                                                                     & ((0xffffcU 
                                                                         & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[1U] 
                                                                            >> 0xcU)) 
                                                                        | (0x1ffffcU 
                                                                           & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[1U] 
                                                                              >> 0xbU))))))
                                                               : 0U))) 
                                             << 0x1dU) 
                                            | (QData)((IData)(
                                                              ((1U 
                                                                & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[0U])
                                                                ? 
                                                               (0xffffffcU 
                                                                & (((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[1U] 
                                                                     << 0x1bU) 
                                                                    | (0x7fffffcU 
                                                                       & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[0U] 
                                                                          >> 5U))) 
                                                                   | (4U 
                                                                      & ((0xffffffcU 
                                                                          & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[0U] 
                                                                             >> 4U)) 
                                                                         | (0x1ffffffcU 
                                                                            & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[0U] 
                                                                               >> 3U))))))
                                                                : 0U)))) 
                                           >> 0x20U)));
    zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d__02eenabled__02emulti_lane__02efmt_tree_significand[0U] 
        = __Vtemp_1[0U];
    zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d__02eenabled__02emulti_lane__02efmt_tree_significand[1U] 
        = __Vtemp_1[1U];
    zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d__02eenabled__02emulti_lane__02efmt_tree_significand[2U] 
        = (((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0128_)
             ? vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0129_
             : vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0127_) 
           >> 6U);
    zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d__02eenabled__02emulti_lane__02efmt_tree_significand[3U] = 0U;
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0129_ = 
        (0xfffffffU & (((zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d__02eenabled__02emulti_lane__02efmt_tree_significand[1U] 
                         << 3U) | (zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d__02eenabled__02emulti_lane__02efmt_tree_significand[0U] 
                                   >> 0x1dU)) - zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d__02eenabled__02emulti_lane__02efmt_tree_significand[0U]));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0127_ = 
        (0x1fffffffU & (((0xfffffffU & zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d__02eenabled__02emulti_lane__02efmt_tree_significand[0U]) 
                         + (((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d____Vhsh6018fakCbUKA15zExbOYgEB9QRbLR5vBB4g2EThM) 
                             << 0x1cU) | (0xfffffffU 
                                          & ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d____Vhsh6018fakCbUKA15zExbOYgEB9QRbLR5vBB4g2EThM)
                                              ? (~ 
                                                 ((zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d__02eenabled__02emulti_lane__02efmt_tree_significand[1U] 
                                                   << 3U) 
                                                  | (zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d__02eenabled__02emulti_lane__02efmt_tree_significand[0U] 
                                                     >> 0x1dU)))
                                              : ((zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d__02eenabled__02emulti_lane__02efmt_tree_significand[1U] 
                                                  << 3U) 
                                                 | (zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d__02eenabled__02emulti_lane__02efmt_tree_significand[0U] 
                                                    >> 0x1dU)))))) 
                        + (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d____Vhsh6018fakCbUKA15zExbOYgEB9QRbLR5vBB4g2EThM)));
    zvt_pe_mulbulk_fp_lane__DOT___0306_ = (1U & ((~ 
                                                  ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq) 
                                                   >> 0xcU)) 
                                                 | (IData)(
                                                           ((0U 
                                                             == 
                                                             (0xc00U 
                                                              & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) 
                                                            & (~ 
                                                               (0U 
                                                                != 
                                                                (0x1fffffffU 
                                                                 & ((zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d__02eenabled__02emulti_lane__02efmt_tree_significand[2U] 
                                                                     << 6U) 
                                                                    | (zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d__02eenabled__02emulti_lane__02efmt_tree_significand[1U] 
                                                                       >> 0x1aU)))))))));
    zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d____Vhsh1JdS19MRmss9R9mD9cjXtLmFkQB11yalnqYn3UuZ 
        = (((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d____Vhsh6018fakCbUKA15zExbOYgEB9QRbLR5vBB4g2EThM) 
            << 0x1cU) | (0xfffffffU & ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d____Vhsh6018fakCbUKA15zExbOYgEB9QRbLR5vBB4g2EThM)
                                        ? (~ ((zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d__02eenabled__02emulti_lane__02efmt_tree_significand[1U] 
                                               << 3U) 
                                              | (zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d__02eenabled__02emulti_lane__02efmt_tree_significand[0U] 
                                                 >> 0x1dU)))
                                        : ((zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d__02eenabled__02emulti_lane__02efmt_tree_significand[1U] 
                                            << 3U) 
                                           | (zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d__02eenabled__02emulti_lane__02efmt_tree_significand[0U] 
                                              >> 0x1dU)))));
    __Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3180___0__s 
        = (((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___1173_) 
            << 2U) | (((2U == (7U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) 
                       << 1U) | (3U == (7U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq)))));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02epreround_sign 
        = (1U & ((0x1000U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
                  ? (IData)(((0U == (0xc00U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) 
                             & ((0U != (0x1fffffffU 
                                        & ((zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d__02eenabled__02emulti_lane__02efmt_tree_significand[2U] 
                                            << 6U) 
                                           | (zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d__02eenabled__02emulti_lane__02efmt_tree_significand[1U] 
                                              >> 0x1aU)))) 
                                & ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[1U] 
                                    >> 0xbU) ^ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0128_)))))
                  : (IData)(((0U == (0xc00U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) 
                             & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[1U] 
                                >> 0xbU)))));
    __Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3180___0__b 
        = ((2U & ((~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02epreround_sign)) 
                  << 1U)) | (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02epreround_sign));
    __Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3180___0__Vfuncout 
        = (1U & ((1U == (1U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3180___0__s)))
                  ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3180___0__b)
                  : ((2U == (2U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3180___0__s)))
                      ? ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3180___0__b) 
                         >> 1U) : ((4U != (4U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3180___0__s))) 
                                   || (1U & ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3180___0__b) 
                                             >> 2U))))));
    zvt_pe_mulbulk_fp_lane__DOT___0304_ = ((0x1000U 
                                            & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
                                            ? ((0x800U 
                                                & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
                                                ? 0U
                                                : (
                                                   (0x400U 
                                                    & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
                                                    ? 0U
                                                    : 
                                                   (0x3ffffffeU 
                                                    & ((zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d__02eenabled__02emulti_lane__02efmt_tree_significand[2U] 
                                                        << 7U) 
                                                       | (0x7eU 
                                                          & (zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d__02eenabled__02emulti_lane__02efmt_tree_significand[1U] 
                                                             >> 0x19U))))))
                                            : 0U);
    if ((1U & (~ VL_ONEHOT_I((((4U == (4U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3180___0__s))) 
                               << 2U) | (((2U == (2U 
                                                  & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3180___0__s))) 
                                          << 1U) | 
                                         (1U == (1U 
                                                 & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3180___0__s))))))))) {
        if ((0U != (((4U == (4U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3180___0__s))) 
                     << 2U) | (((2U == (2U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3180___0__s))) 
                                << 1U) | (1U == (1U 
                                                 & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3180___0__s))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: zvt_pe_mulbulk_fp_lane_flat.v:3808: Assertion failed in %Nzvt_pe_mulbulk_fp_lane._3180_: synthesis parallel_case, but multiple matches found for '3'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),3,
                             (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3180___0__s));
                VL_STOP_MT("/Users/leostrijbos/Desktop/Code/Projects/coral-optimised/rtl/coral-original/zvt_pe_mulbulk_fp_lane_flat.v", 3808, "");
            }
        }
    }
    zvt_pe_mulbulk_fp_lane__DOT___1169_ = __Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3180___0__Vfuncout;
    zvt_pe_mulbulk_fp_lane__DOT___0918_ = (1U & ((0x200U 
                                                  & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
                                                  ? (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02epreround_sign)
                                                  : 
                                                 ((~ 
                                                   ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq) 
                                                    >> 9U)) 
                                                  & ((0x100U 
                                                      & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
                                                      ? 
                                                     ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq) 
                                                      >> 7U)
                                                      : (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02epreround_sign)))));
    zvt_pe_mulbulk_fp_lane__DOT___0131_ = ((0xfffffffU 
                                            & zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d__02eenabled__02emulti_lane__02efmt_tree_significand[0U]) 
                                           ^ zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d____Vhsh1JdS19MRmss9R9mD9cjXtLmFkQB11yalnqYn3UuZ);
    zvt_pe_mulbulk_fp_lane__DOT___0132_ = (0xfffffffU 
                                           & (zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d__02eenabled__02emulti_lane__02efmt_tree_significand[0U] 
                                              & zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d____Vhsh1JdS19MRmss9R9mD9cjXtLmFkQB11yalnqYn3UuZ));
    zvt_pe_mulbulk_fp_lane__DOT___0135_ = (0x1fffffffU 
                                           & (~ ((0xfffffffU 
                                                  & zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d__02eenabled__02emulti_lane__02efmt_tree_significand[0U]) 
                                                 | zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d____Vhsh1JdS19MRmss9R9mD9cjXtLmFkQB11yalnqYn3UuZ)));
    zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d____Vhsh1v2Jsk7okbcfTdGP2e2ZBDBRnTjyBKhgBnmtG294 
        = (((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d____Vhsh6018fakCbUKA15zExbOYgEB9QRbLR5vBB4g2EThM) 
            << 0x1cU) | (0xfffffffU & (zvt_pe_mulbulk_fp_lane__DOT___0131_ 
                                       >> 1U)));
    zvt_pe_mulbulk_fp_lane__DOT___0142_ = (0x1fffffffU 
                                           & (~ ((0x1ffffffeU 
                                                  & (zvt_pe_mulbulk_fp_lane__DOT___0132_ 
                                                     << 1U)) 
                                                 | (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d____Vhsh6018fakCbUKA15zExbOYgEB9QRbLR5vBB4g2EThM))));
    zvt_pe_mulbulk_fp_lane__DOT___0140_ = (0x1fffffffU 
                                           & (~ ((0x1ffffffeU 
                                                  & (zvt_pe_mulbulk_fp_lane__DOT___0135_ 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d____Vhsh6018fakCbUKA15zExbOYgEB9QRbLR5vBB4g2EThM))))));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0373_ = 
        ((0x20U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
          ? ((0x10U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
              ? 0U : ((8U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
                       ? 0U : (0x7f800000U | ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0918_) 
                                              << 0x1fU))))
          : ((0x10U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
              ? (0x7c000000U | ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0918_) 
                                << 0x1fU)) : ((8U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
                                               ? (0x7ff00000U 
                                                  | ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0918_) 
                                                     << 0x1fU))
                                               : (0x7f800000U 
                                                  | ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0918_) 
                                                     << 0x1fU)))));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0377_ = 
        (((IData)(zvt_pe_mulbulk_fp_lane__DOT___1169_) 
          & ((7U & ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq) 
                    >> 0xaU)) == (7U & ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq) 
                                        >> 3U)))) ? 
         ((0x20U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
           ? ((0x10U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
               ? 0U : ((8U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
                        ? 0U : (0x7f7fffffU | ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0918_) 
                                               << 0x1fU))))
           : ((0x10U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
               ? (0x7bffffffU | ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0918_) 
                                 << 0x1fU)) : ((8U 
                                                & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
                                                ? (0x7fefffffU 
                                                   | ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0918_) 
                                                      << 0x1fU))
                                                : (0x7f7fffffU 
                                                   | ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0918_) 
                                                      << 0x1fU)))))
          : vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0373_);
    zvt_pe_mulbulk_fp_lane__DOT___0154_ = ((zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d____Vhsh1v2Jsk7okbcfTdGP2e2ZBDBRnTjyBKhgBnmtG294 
                                            & ((zvt_pe_mulbulk_fp_lane__DOT___0140_ 
                                                & zvt_pe_mulbulk_fp_lane__DOT___0132_) 
                                               | (zvt_pe_mulbulk_fp_lane__DOT___0142_ 
                                                  & zvt_pe_mulbulk_fp_lane__DOT___0135_))) 
                                           | ((~ zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d____Vhsh1v2Jsk7okbcfTdGP2e2ZBDBRnTjyBKhgBnmtG294) 
                                              & ((zvt_pe_mulbulk_fp_lane__DOT___0140_ 
                                                  & zvt_pe_mulbulk_fp_lane__DOT___0135_) 
                                                 | (zvt_pe_mulbulk_fp_lane__DOT___0142_ 
                                                    & zvt_pe_mulbulk_fp_lane__DOT___0132_))));
    __VdfgRegularize_h0dff6736_0_15 = (IData)((0U != 
                                               (0x1c0U 
                                                & zvt_pe_mulbulk_fp_lane__DOT___0154_)));
    __VdfgRegularize_h0dff6736_0_16 = (IData)((0U != 
                                               (0x1c00000U 
                                                & zvt_pe_mulbulk_fp_lane__DOT___0154_)));
    zvt_pe_mulbulk_fp_lane__DOT___0305_ = ((0x1000U 
                                            & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
                                            ? ((0x800U 
                                                & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
                                                ? 0U
                                                : (
                                                   (0x400U 
                                                    & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
                                                    ? 0U
                                                    : 
                                                   (((~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d____Vhsh6018fakCbUKA15zExbOYgEB9QRbLR5vBB4g2EThM)) 
                                                     & (zvt_pe_mulbulk_fp_lane__DOT___0131_ 
                                                        >> 0x1cU))
                                                     ? 0U
                                                     : 
                                                    ((0x10000000U 
                                                      & zvt_pe_mulbulk_fp_lane__DOT___0154_)
                                                      ? 1U
                                                      : 
                                                     ((0x8000000U 
                                                       & zvt_pe_mulbulk_fp_lane__DOT___0154_)
                                                       ? 2U
                                                       : 
                                                      ((0x4000000U 
                                                        & zvt_pe_mulbulk_fp_lane__DOT___0154_)
                                                        ? 3U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0x23fc000U 
                                                                      & zvt_pe_mulbulk_fp_lane__DOT___0154_)) 
                                                                    | (IData)(__VdfgRegularize_h0dff6736_0_16))))
                                                         ? 
                                                        ((0x2000000U 
                                                          & zvt_pe_mulbulk_fp_lane__DOT___0154_)
                                                          ? 4U
                                                          : 
                                                         ((IData)(__VdfgRegularize_h0dff6736_0_16)
                                                           ? 
                                                          ((0x1000000U 
                                                            & zvt_pe_mulbulk_fp_lane__DOT___0154_)
                                                            ? 5U
                                                            : 
                                                           ((0x800000U 
                                                             & zvt_pe_mulbulk_fp_lane__DOT___0154_)
                                                             ? 6U
                                                             : 7U))
                                                           : 
                                                          ((0x200000U 
                                                            & zvt_pe_mulbulk_fp_lane__DOT___0154_)
                                                            ? 8U
                                                            : 
                                                           ((0x100000U 
                                                             & zvt_pe_mulbulk_fp_lane__DOT___0154_)
                                                             ? 9U
                                                             : 
                                                            ((0x80000U 
                                                              & zvt_pe_mulbulk_fp_lane__DOT___0154_)
                                                              ? 0xaU
                                                              : 
                                                             ((0x40000U 
                                                               & zvt_pe_mulbulk_fp_lane__DOT___0154_)
                                                               ? 0xbU
                                                               : 
                                                              ((0x20000U 
                                                                & zvt_pe_mulbulk_fp_lane__DOT___0154_)
                                                                ? 0xcU
                                                                : 
                                                               ((0x10000U 
                                                                 & zvt_pe_mulbulk_fp_lane__DOT___0154_)
                                                                 ? 0xdU
                                                                 : 
                                                                ((0x8000U 
                                                                  & zvt_pe_mulbulk_fp_lane__DOT___0154_)
                                                                  ? 0xeU
                                                                  : 0xfU)))))))))
                                                         : 
                                                        ((0x2000U 
                                                          & zvt_pe_mulbulk_fp_lane__DOT___0154_)
                                                          ? 0x10U
                                                          : 
                                                         ((0x1000U 
                                                           & zvt_pe_mulbulk_fp_lane__DOT___0154_)
                                                           ? 0x11U
                                                           : 
                                                          ((0x800U 
                                                            & zvt_pe_mulbulk_fp_lane__DOT___0154_)
                                                            ? 0x12U
                                                            : 
                                                           ((0x400U 
                                                             & zvt_pe_mulbulk_fp_lane__DOT___0154_)
                                                             ? 0x13U
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        ((0U 
                                                                          != 
                                                                          (0x23fU 
                                                                           & zvt_pe_mulbulk_fp_lane__DOT___0154_)) 
                                                                         | (IData)(__VdfgRegularize_h0dff6736_0_15))))
                                                              ? 
                                                             ((0x200U 
                                                               & zvt_pe_mulbulk_fp_lane__DOT___0154_)
                                                               ? 0x14U
                                                               : 
                                                              ((IData)(__VdfgRegularize_h0dff6736_0_15)
                                                                ? 
                                                               ((0x100U 
                                                                 & zvt_pe_mulbulk_fp_lane__DOT___0154_)
                                                                 ? 0x15U
                                                                 : 
                                                                ((0x80U 
                                                                  & zvt_pe_mulbulk_fp_lane__DOT___0154_)
                                                                  ? 0x16U
                                                                  : 0x17U))
                                                                : 
                                                               ((0x20U 
                                                                 & zvt_pe_mulbulk_fp_lane__DOT___0154_)
                                                                 ? 0x18U
                                                                 : 
                                                                ((0x10U 
                                                                  & zvt_pe_mulbulk_fp_lane__DOT___0154_)
                                                                  ? 0x19U
                                                                  : 
                                                                 ((8U 
                                                                   & zvt_pe_mulbulk_fp_lane__DOT___0154_)
                                                                   ? 0x1aU
                                                                   : 
                                                                  ((4U 
                                                                    & zvt_pe_mulbulk_fp_lane__DOT___0154_)
                                                                    ? 0x1bU
                                                                    : 
                                                                   ((2U 
                                                                     & zvt_pe_mulbulk_fp_lane__DOT___0154_)
                                                                     ? 0x1cU
                                                                     : 
                                                                    ((1U 
                                                                      & zvt_pe_mulbulk_fp_lane__DOT___0154_)
                                                                      ? 0x1dU
                                                                      : 0U))))))))
                                                              : 0x1cU))))))))))))
                                            : 0U);
    zvt_pe_mulbulk_fp_lane__DOT__u_vec_align__02elzc_cnt_fix 
        = ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0306_)
            ? 0x1eU : (IData)(zvt_pe_mulbulk_fp_lane__DOT___0305_));
    zvt_pe_mulbulk_fp_lane__DOT___0285_ = ((~ (1U & 
                                               (((IData)(0x19U) 
                                                 + 
                                                 ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_11) 
                                                  - (IData)(1U))) 
                                                >> 0xdU))) 
                                           & ((0x3fU 
                                               & ((IData)(0x19U) 
                                                  + 
                                                  ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_11) 
                                                   - (IData)(1U)))) 
                                              >= (IData)(zvt_pe_mulbulk_fp_lane__DOT__u_vec_align__02elzc_cnt_fix)));
    zvt_pe_mulbulk_fp_lane__DOT___0278_ = ((~ (IData)(zvt_pe_mulbulk_fp_lane__DOT___0306_)) 
                                           & VL_GTES_III(14, 
                                                         (0x3fffU 
                                                          & ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_11) 
                                                             - (IData)(1U))), (IData)(zvt_pe_mulbulk_fp_lane__DOT__u_vec_align__02elzc_cnt_fix)));
    if (zvt_pe_mulbulk_fp_lane__DOT___0306_) {
        zvt_pe_mulbulk_fp_lane__DOT___1015_ = 0U;
        zvt_pe_mulbulk_fp_lane__DOT___1017_ = 0U;
    } else if (zvt_pe_mulbulk_fp_lane__DOT___0306_) {
        zvt_pe_mulbulk_fp_lane__DOT___1015_ = 0U;
        zvt_pe_mulbulk_fp_lane__DOT___1017_ = 0U;
    } else if (zvt_pe_mulbulk_fp_lane__DOT___0278_) {
        zvt_pe_mulbulk_fp_lane__DOT___1015_ = (0x3fffU 
                                               & ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_11) 
                                                  - (IData)(zvt_pe_mulbulk_fp_lane__DOT___0305_)));
        zvt_pe_mulbulk_fp_lane__DOT___1017_ = (0x3fU 
                                               & ((IData)(0x19U) 
                                                  + (IData)(zvt_pe_mulbulk_fp_lane__DOT___0305_)));
    } else {
        zvt_pe_mulbulk_fp_lane__DOT___1015_ = 0U;
        zvt_pe_mulbulk_fp_lane__DOT___1017_ = (0x3fU 
                                               & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0306_)
                                                   ? 0U
                                                   : 
                                                  ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0278_)
                                                    ? 0U
                                                    : 
                                                   ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0285_)
                                                     ? 
                                                    ((IData)(0x19U) 
                                                     + 
                                                     ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_11) 
                                                      - (IData)(1U)))
                                                     : 0U))));
    }
    zvt_pe_mulbulk_fp_lane__DOT___0291_ = (1U & (~ 
                                                 (1U 
                                                  & (((~ (IData)(zvt_pe_mulbulk_fp_lane__DOT___0306_)) 
                                                      & (~ (IData)(zvt_pe_mulbulk_fp_lane__DOT___0278_))) 
                                                     & (~ (IData)(zvt_pe_mulbulk_fp_lane__DOT___0285_))))));
    zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_16 
        = ((((((0x80000000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___1015_) 
                               << 0x12U)) | (0x40000000U 
                                             & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___1015_) 
                                                << 0x11U))) 
              | ((0x20000000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___1015_) 
                                 << 0x10U)) | (0x10000000U 
                                               & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___1015_) 
                                                  << 0xfU)))) 
             | (((0x8000000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___1015_) 
                                << 0xeU)) | (0x4000000U 
                                             & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___1015_) 
                                                << 0xdU))) 
                | ((0x2000000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___1015_) 
                                  << 0xcU)) | (0x1000000U 
                                               & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___1015_) 
                                                  << 0xbU))))) 
            | ((((0x800000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___1015_) 
                               << 0xaU)) | (0x400000U 
                                            & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___1015_) 
                                               << 9U))) 
                | ((0x200000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___1015_) 
                                 << 8U)) | (0x100000U 
                                            & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___1015_) 
                                               << 7U)))) 
               | (((0x80000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___1015_) 
                                << 6U)) | (0x40000U 
                                           & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___1015_) 
                                              << 5U))) 
                  | ((0x20000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___1015_) 
                                  << 4U)) | (0x10000U 
                                             & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___1015_) 
                                                << 3U)))))) 
           | ((0x8000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___1015_) 
                          << 2U)) | ((0x4000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___1015_) 
                                                 << 1U)) 
                                     | (IData)(zvt_pe_mulbulk_fp_lane__DOT___1015_))));
    zvt_pe_mulbulk_fp_lane__DOT___0286_ = (0xffffffffffffffULL 
                                           & ((QData)((IData)(zvt_pe_mulbulk_fp_lane__DOT___0304_)) 
                                              << (IData)(zvt_pe_mulbulk_fp_lane__DOT___1017_)));
    zvt_pe_mulbulk_fp_lane__DOT___0298_ = ((1U & (IData)(
                                                         (zvt_pe_mulbulk_fp_lane__DOT___0286_ 
                                                          >> 0x37U)))
                                            ? ((IData)(1U) 
                                               + zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_16)
                                            : ((1U 
                                                & ((~ (IData)(zvt_pe_mulbulk_fp_lane__DOT___0278_)) 
                                                   & (IData)(
                                                             (zvt_pe_mulbulk_fp_lane__DOT___0286_ 
                                                              >> 0x36U))))
                                                ? 1U
                                                : zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_16));
    if ((0x1000U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) {
        zvt_pe_mulbulk_fp_lane__DOT___0313_ = (1U & (IData)(
                                                            ((0U 
                                                              == 
                                                              (0xc00U 
                                                               & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) 
                                                             & ((1U 
                                                                 & (IData)(
                                                                           (zvt_pe_mulbulk_fp_lane__DOT___0286_ 
                                                                            >> 0x37U)))
                                                                 ? 
                                                                (0U 
                                                                 != 
                                                                 (0x7fffffffU 
                                                                  & VL_SHIFTL_III(31,31,6, (IData)((QData)((IData)(zvt_pe_mulbulk_fp_lane__DOT___0304_))), (IData)(zvt_pe_mulbulk_fp_lane__DOT___1017_))))
                                                                 : 
                                                                (0U 
                                                                 != 
                                                                 (0x3fffffffU 
                                                                  & VL_SHIFTL_III(30,30,6, zvt_pe_mulbulk_fp_lane__DOT___0304_, (IData)(zvt_pe_mulbulk_fp_lane__DOT___1017_))))))));
        if ((0x800U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) {
            zvt_pe_mulbulk_fp_lane__DOT___0310_ = (0x7fffffU 
                                                   & 0U);
            vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0311_ 
                = (0x1ffU & 0U);
        } else if ((0x400U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) {
            zvt_pe_mulbulk_fp_lane__DOT___0310_ = (0x7fffffU 
                                                   & 0U);
            vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0311_ 
                = (0x1ffU & 0U);
        } else {
            zvt_pe_mulbulk_fp_lane__DOT___0310_ = (0x7fffffU 
                                                   & (0xffffffU 
                                                      & ((1U 
                                                          & (IData)(
                                                                    (zvt_pe_mulbulk_fp_lane__DOT___0286_ 
                                                                     >> 0x37U)))
                                                          ? (IData)(
                                                                    (zvt_pe_mulbulk_fp_lane__DOT___0286_ 
                                                                     >> 0x20U))
                                                          : (IData)(
                                                                    (zvt_pe_mulbulk_fp_lane__DOT___0286_ 
                                                                     >> 0x1fU)))));
            vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0311_ 
                = (0x1ffU & zvt_pe_mulbulk_fp_lane__DOT___0298_);
        }
    } else {
        zvt_pe_mulbulk_fp_lane__DOT___0313_ = (1U & (IData)(
                                                            ((0U 
                                                              == 
                                                              (0xc00U 
                                                               & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) 
                                                             & (0U 
                                                                != 
                                                                (0xe0U 
                                                                 & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[0U])))));
        if ((0x800U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) {
            zvt_pe_mulbulk_fp_lane__DOT___0310_ = (0x7fffffU 
                                                   & 0U);
            vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0311_ 
                = (0x1ffU & 0U);
        } else if ((0x400U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) {
            zvt_pe_mulbulk_fp_lane__DOT___0310_ = (0x7fffffU 
                                                   & 0U);
            vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0311_ 
                = (0x1ffU & 0U);
        } else {
            zvt_pe_mulbulk_fp_lane__DOT___0310_ = (0x7fffffU 
                                                   & ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[0U] 
                                                       << 0x17U) 
                                                      | (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[0U] 
                                                         >> 9U)));
            vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0311_ 
                = (0x1ffU & ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[1U] 
                              << 0x1fU) | (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[1U] 
                                           >> 1U)));
        }
    }
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0316_ = (IData)(
                                                            ((0x1000U 
                                                              == 
                                                              (0x1c00U 
                                                               & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) 
                                                             & ((~ 
                                                                 (zvt_pe_mulbulk_fp_lane__DOT___0298_ 
                                                                  >> 0xdU)) 
                                                                & (0U 
                                                                   != 
                                                                   (0xfU 
                                                                    & (zvt_pe_mulbulk_fp_lane__DOT___0298_ 
                                                                       >> 9U))))));
    zvt_pe_mulbulk_fp_lane__DOT___0318_ = (IData)((
                                                   ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0311_) 
                                                    >> 8U) 
                                                   | (0xffU 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0311_)))));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0324_ = 
        ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0318_)
          ? 0U : ((zvt_pe_mulbulk_fp_lane__DOT___0310_ 
                   << 2U) | ((2U & (((0x1000U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
                                      ? (IData)(((0U 
                                                  == 
                                                  (0xc00U 
                                                   & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) 
                                                 & ((1U 
                                                     & (IData)(
                                                               (zvt_pe_mulbulk_fp_lane__DOT___0286_ 
                                                                >> 0x37U)))
                                                     ? (IData)(
                                                               (zvt_pe_mulbulk_fp_lane__DOT___0286_ 
                                                                >> 0x1fU))
                                                     : (IData)(
                                                               (zvt_pe_mulbulk_fp_lane__DOT___0286_ 
                                                                >> 0x1eU)))))
                                      : (IData)(((0U 
                                                  == 
                                                  (0xc00U 
                                                   & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) 
                                                 & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[0U] 
                                                    >> 8U)))) 
                                    << 1U)) | (1U & 
                                               ((0x1000U 
                                                 & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
                                                 ? (IData)(
                                                           ((0U 
                                                             == 
                                                             (0xc00U 
                                                              & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) 
                                                            & ((1U 
                                                                & (IData)(
                                                                          (zvt_pe_mulbulk_fp_lane__DOT___0286_ 
                                                                           >> 0x37U)))
                                                                ? 
                                                               ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0291_) 
                                                                & (IData)(
                                                                          (zvt_pe_mulbulk_fp_lane__DOT___0286_ 
                                                                           >> 0x1eU)))
                                                                : 
                                                               ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0291_) 
                                                                & (IData)(
                                                                          (zvt_pe_mulbulk_fp_lane__DOT___0286_ 
                                                                           >> 0x1dU))))))
                                                 : (IData)(
                                                           ((0U 
                                                             == 
                                                             (0xc00U 
                                                              & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) 
                                                            & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[0U] 
                                                               >> 7U))))))));
    if ((0x20U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) {
        zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02eresult_guard_bit 
            = (1U & (IData)(((0U == (0x18U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) 
                             & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0324_ 
                                >> 0x12U))));
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0331_ 
            = (1U & (IData)(((0U == (0x18U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) 
                             & ((0U != (0x1ffffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0324_)) 
                                | (IData)(zvt_pe_mulbulk_fp_lane__DOT___0313_)))));
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02eresult_round_bit 
            = (1U & (IData)(((0U == (0x18U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) 
                             & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0324_ 
                                >> 0x11U))));
    } else {
        zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02eresult_guard_bit 
            = (1U & (IData)(((0U == (0x18U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) 
                             & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0324_ 
                                >> 2U))));
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0331_ 
            = (1U & (IData)(((0U == (0x18U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) 
                             & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0324_ 
                                | (IData)(zvt_pe_mulbulk_fp_lane__DOT___0313_)))));
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02eresult_round_bit 
            = (1U & (IData)(((0U == (0x18U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) 
                             & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0324_ 
                                >> 1U))));
    }
    zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_66 
        = (((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02eresult_round_bit) 
            << 1U) | (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0331_));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0333_ = 
        ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02eresult_round_bit) 
         | (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0331_));
    __Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3194___2__s 
        = ((4U & (((~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0333_)) 
                   | (1U == (IData)(zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_66))) 
                  << 2U)) | (((2U == (IData)(zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_66)) 
                              << 1U) | (3U == (IData)(zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_66))));
    __Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3194___2__b 
        = (1U | ((IData)(zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02eresult_guard_bit) 
                 << 1U));
    __Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3194___2__Vfuncout 
        = (1U & ((1U == (1U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3194___2__s)))
                  ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3194___2__b)
                  : ((2U == (2U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3194___2__s)))
                      ? ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3194___2__b) 
                         >> 1U) : ((4U == (4U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3194___2__s))) 
                                   && (1U & ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3194___2__b) 
                                             >> 2U))))));
    if ((1U & (~ VL_ONEHOT_I((((4U == (4U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3194___2__s))) 
                               << 2U) | (((2U == (2U 
                                                  & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3194___2__s))) 
                                          << 1U) | 
                                         (1U == (1U 
                                                 & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3194___2__s))))))))) {
        if ((0U != (((4U == (4U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3194___2__s))) 
                     << 2U) | (((2U == (2U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3194___2__s))) 
                                << 1U) | (1U == (1U 
                                                 & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3194___2__s))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: zvt_pe_mulbulk_fp_lane_flat.v:3858: Assertion failed in %Nzvt_pe_mulbulk_fp_lane._3194_: synthesis parallel_case, but multiple matches found for '3'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),3,
                             (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3194___2__s));
                VL_STOP_MT("/Users/leostrijbos/Desktop/Code/Projects/coral-optimised/rtl/coral-original/zvt_pe_mulbulk_fp_lane_flat.v", 3858, "");
            }
        }
    }
    zvt_pe_mulbulk_fp_lane__DOT___1182_ = __Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3194___2__Vfuncout;
    __Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s 
        = (((0x20U & ((~ (0U != (7U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq)))) 
                      << 5U)) | (((1U == (7U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) 
                                  << 4U) | ((2U == 
                                             (7U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) 
                                            << 3U))) 
           | (((3U == (7U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) 
               << 2U) | (((4U == (7U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) 
                          << 1U) | (5U == (7U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))))));
    __Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b 
        = ((((~ (0U != (7U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq)))) 
             & (IData)(zvt_pe_mulbulk_fp_lane__DOT___1182_)) 
            << 5U) | (((((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0333_) 
                         & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02epreround_sign)) 
                        << 3U) | (((~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02epreround_sign)) 
                                   & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0333_)) 
                                  << 2U)) | (((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02eresult_round_bit) 
                                              << 1U) 
                                             | ((~ (IData)(zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02eresult_guard_bit)) 
                                                & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0333_)))));
    __Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__Vfuncout 
        = (1U & ((0x20U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                  ? ((0x10U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                      ? ((8U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                          ? ((4U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                              ? ((2U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                  ? ((1U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                      ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                      : ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                         >> 1U)) : 
                                 ((1U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                   ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                   : ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                      >> 2U))) : ((2U 
                                                   & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                                    ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                                    : 
                                                   ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                                    >> 1U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                                    ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                                    : 
                                                   ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                                    >> 3U))))
                          : ((4U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                              ? ((2U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                  ? ((1U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                      ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                      : ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                         >> 1U)) : 
                                 ((1U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                   ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                   : ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                      >> 2U))) : ((2U 
                                                   & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                                    ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                                    : 
                                                   ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                                    >> 1U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                                    ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                                    : 
                                                   ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                                    >> 4U)))))
                      : ((8U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                          ? ((4U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                              ? ((2U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                  ? ((1U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                      ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                      : ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                         >> 1U)) : 
                                 ((1U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                   ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                   : ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                      >> 2U))) : ((2U 
                                                   & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                                    ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                                    : 
                                                   ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                                    >> 1U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                                    ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                                    : 
                                                   ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                                    >> 3U))))
                          : ((4U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                              ? ((2U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                  ? ((1U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                      ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                      : ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                         >> 1U)) : 
                                 ((1U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                   ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                   : ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                      >> 2U))) : ((2U 
                                                   & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                                    ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                                    : 
                                                   ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                                    >> 1U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                                    ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                                    : 
                                                   ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                                    >> 5U))))))
                  : ((0x10U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                      ? ((8U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                          ? ((4U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                              ? ((2U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                  ? ((1U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                      ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                      : ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                         >> 1U)) : 
                                 ((1U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                   ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                   : ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                      >> 2U))) : ((2U 
                                                   & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                                    ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                                    : 
                                                   ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                                    >> 1U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                                    ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                                    : 
                                                   ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                                    >> 3U))))
                          : ((4U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                              ? ((2U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                  ? ((1U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                      ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                      : ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                         >> 1U)) : 
                                 ((1U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                   ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                   : ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                      >> 2U))) : ((2U 
                                                   & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                                    ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                                    : 
                                                   ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                                    >> 1U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                                    ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                                    : 
                                                   ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                                    >> 4U)))))
                      : ((8U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                          ? ((4U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                              ? ((2U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                  ? ((1U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                      ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                      : ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                         >> 1U)) : 
                                 ((1U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                   ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                   : ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                      >> 2U))) : ((2U 
                                                   & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                                    ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                                    : 
                                                   ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                                    >> 1U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                                    ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                                    : 
                                                   ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                                    >> 3U))))
                          : ((4U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                              ? ((2U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                  ? ((1U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                      ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                      : ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                         >> 1U)) : 
                                 ((1U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                   ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                   : ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                      >> 2U))) : ((2U 
                                                   & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))
                                                    ? (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)
                                                    : 
                                                   ((IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b) 
                                                    >> 1U))
                                                   : 
                                                  ((1U 
                                                    & (~ (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))) 
                                                   || (1U 
                                                       & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__b)))))))));
    if ((1U & (~ VL_ONEHOT_I(((((0x20U == (0x20U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))) 
                                << 5U) | (((0x10U == 
                                            (0x10U 
                                             & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))) 
                                           << 4U) | 
                                          ((8U == (8U 
                                                   & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))) 
                                           << 3U))) 
                              | (((4U == (4U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))) 
                                  << 2U) | (((2U == 
                                              (2U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))) 
                                             << 1U) 
                                            | (1U == 
                                               (1U 
                                                & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s)))))))))) {
        if ((0U != ((((0x20U == (0x20U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))) 
                      << 5U) | (((0x10U == (0x10U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))) 
                                 << 4U) | ((8U == (8U 
                                                   & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))) 
                                           << 3U))) 
                    | (((4U == (4U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))) 
                        << 2U) | (((2U == (2U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s))) 
                                   << 1U) | (1U == 
                                             (1U & (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s)))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: zvt_pe_mulbulk_fp_lane_flat.v:3829: Assertion failed in %Nzvt_pe_mulbulk_fp_lane._3186_: synthesis parallel_case, but multiple matches found for '6'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),6,
                             (IData)(__Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__s));
                VL_STOP_MT("/Users/leostrijbos/Desktop/Code/Projects/coral-optimised/rtl/coral-original/zvt_pe_mulbulk_fp_lane_flat.v", 3829, "");
            }
        }
    }
    zvt_pe_mulbulk_fp_lane__DOT___1175_ = __Vfunc_zvt_pe_mulbulk_fp_lane__DOT___3186___1__Vfuncout;
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0346_ = 
        ((((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0311_) 
           << 0x17U) | zvt_pe_mulbulk_fp_lane__DOT___0310_) 
         + ((IData)(zvt_pe_mulbulk_fp_lane__DOT___1175_)
             ? ((0x20U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
                 ? ((0x10U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
                     ? 0U : ((8U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
                              ? 0U : 0x10000U)) : (
                                                   (0x10U 
                                                    & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
                                                     ? 0U
                                                     : 1U)))
             : 0U));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0365_ = 
        (1U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0318_) 
               | ((0x20U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
                   ? ((~ ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq) 
                          >> 4U)) & (IData)(((~ ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq) 
                                                 >> 3U)) 
                                             & (0x7f800000U 
                                                == 
                                                (0x7f800000U 
                                                 & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0346_)))))
                   : (IData)(((0U != (0x18U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) 
                              | (0xffU == (0xffU & 
                                           (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0346_ 
                                            >> 0x17U))))))));
}
