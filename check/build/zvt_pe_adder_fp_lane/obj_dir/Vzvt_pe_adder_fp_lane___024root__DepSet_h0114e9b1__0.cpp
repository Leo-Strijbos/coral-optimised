// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vzvt_pe_adder_fp_lane.h for the primary calling header

#include "Vzvt_pe_adder_fp_lane__pch.h"
#include "Vzvt_pe_adder_fp_lane__Syms.h"
#include "Vzvt_pe_adder_fp_lane___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vzvt_pe_adder_fp_lane___024root___dump_triggers__ico(Vzvt_pe_adder_fp_lane___024root* vlSelf);
#endif  // VL_DEBUG

void Vzvt_pe_adder_fp_lane___024root___eval_triggers__ico(Vzvt_pe_adder_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_adder_fp_lane___024root___eval_triggers__ico\n"); );
    Vzvt_pe_adder_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vzvt_pe_adder_fp_lane___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vzvt_pe_adder_fp_lane___024root___dump_triggers__act(Vzvt_pe_adder_fp_lane___024root* vlSelf);
#endif  // VL_DEBUG

void Vzvt_pe_adder_fp_lane___024root___eval_triggers__act(Vzvt_pe_adder_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_adder_fp_lane___024root___eval_triggers__act\n"); );
    Vzvt_pe_adder_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT__u_rounding__02estatus) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__zvt_pe_adder_fp_lane__DOT__u_rounding__02estatus__1)));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.setBit(2U, ((~ (IData)(vlSelfRef.rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__zvt_pe_adder_fp_lane__DOT__u_rounding__02estatus__1 
        = vlSelfRef.zvt_pe_adder_fp_lane__DOT__u_rounding__02estatus;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vzvt_pe_adder_fp_lane___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vzvt_pe_adder_fp_lane___024root___nba_sequent__TOP__0(Vzvt_pe_adder_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_adder_fp_lane___024root___nba_sequent__TOP__0\n"); );
    Vzvt_pe_adder_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0030_;
    zvt_pe_adder_fp_lane__DOT___0030_ = 0;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0593_;
    zvt_pe_adder_fp_lane__DOT___0593_ = 0;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0601_;
    zvt_pe_adder_fp_lane__DOT___0601_ = 0;
    CData/*1:0*/ zvt_pe_adder_fp_lane__DOT____VdfgRegularize_h03edf609_0_16;
    zvt_pe_adder_fp_lane__DOT____VdfgRegularize_h03edf609_0_16 = 0;
    CData/*0:0*/ __Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__Vfuncout;
    __Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b;
    __Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b = 0;
    CData/*5:0*/ __Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s;
    __Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s = 0;
    CData/*0:0*/ __Vfunc_zvt_pe_adder_fp_lane__DOT___1909___1__Vfuncout;
    __Vfunc_zvt_pe_adder_fp_lane__DOT___1909___1__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_zvt_pe_adder_fp_lane__DOT___1909___1__b;
    __Vfunc_zvt_pe_adder_fp_lane__DOT___1909___1__b = 0;
    CData/*2:0*/ __Vfunc_zvt_pe_adder_fp_lane__DOT___1909___1__s;
    __Vfunc_zvt_pe_adder_fp_lane__DOT___1909___1__s = 0;
    CData/*0:0*/ __Vfunc_zvt_pe_adder_fp_lane__DOT___1973___2__Vfuncout;
    __Vfunc_zvt_pe_adder_fp_lane__DOT___1973___2__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_zvt_pe_adder_fp_lane__DOT___1973___2__b;
    __Vfunc_zvt_pe_adder_fp_lane__DOT___1973___2__b = 0;
    CData/*2:0*/ __Vfunc_zvt_pe_adder_fp_lane__DOT___1973___2__s;
    __Vfunc_zvt_pe_adder_fp_lane__DOT___1973___2__s = 0;
    // Body
    vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq 
        = ((0x1ffffffffff7ULL & vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq) 
           | ((QData)((IData)(((IData)(vlSelfRef.rst_n) 
                               & (IData)((vlSelfRef.zvt_pe_adder_fp_lane__DOT___0566_ 
                                          >> 3U))))) 
              << 3U));
    vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq 
        = ((0xfffffffffffULL & vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq) 
           | ((QData)((IData)(((IData)(vlSelfRef.rst_n) 
                               & (IData)((vlSelfRef.zvt_pe_adder_fp_lane__DOT___0566_ 
                                          >> 0x2cU))))) 
              << 0x2cU));
    vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq 
        = ((0x1800000007ffULL & vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq) 
           | ((QData)((IData)(((((IData)(vlSelfRef.rst_n)
                                  ? (0x1ffU & (IData)(
                                                      (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0566_ 
                                                       >> 0x22U)))
                                  : 0U) << 0x17U) | 
                               ((IData)(vlSelfRef.rst_n)
                                 ? (0x7fffffU & (IData)(
                                                        (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0566_ 
                                                         >> 0xbU)))
                                 : 0U)))) << 0xbU));
    vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq 
        = ((0x1ffffffffff8ULL & vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq) 
           | (IData)((IData)(((IData)(vlSelfRef.rst_n)
                               ? (7U & (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0566_))
                               : 0U))));
    vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq 
        = ((0x1ffffffffbffULL & vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq) 
           | ((QData)((IData)(((IData)(vlSelfRef.rst_n) 
                               & (IData)((vlSelfRef.zvt_pe_adder_fp_lane__DOT___0566_ 
                                          >> 0xaU))))) 
              << 0xaU));
    vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq 
        = ((0x17ffffffffffULL & vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq) 
           | ((QData)((IData)(((IData)(vlSelfRef.rst_n) 
                               & (IData)((vlSelfRef.zvt_pe_adder_fp_lane__DOT___0566_ 
                                          >> 0x2bU))))) 
              << 0x2bU));
    vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq 
        = ((0x1fffffffff8fULL & vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq) 
           | ((QData)((IData)(((6U & (((- (IData)((IData)(vlSelfRef.rst_n))) 
                                       & (IData)((vlSelfRef.zvt_pe_adder_fp_lane__DOT___0566_ 
                                                  >> 5U))) 
                                      << 1U)) | ((IData)(vlSelfRef.rst_n) 
                                                 & (IData)(
                                                           (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0566_ 
                                                            >> 4U)))))) 
              << 4U));
    vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq 
        = ((0x1ffffffffc7fULL & vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq) 
           | ((QData)((IData)(((6U & (((- (IData)((IData)(vlSelfRef.rst_n))) 
                                       & (IData)((vlSelfRef.zvt_pe_adder_fp_lane__DOT___0566_ 
                                                  >> 8U))) 
                                      << 1U)) | ((IData)(vlSelfRef.rst_n) 
                                                 & (IData)(
                                                           (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0566_ 
                                                            >> 7U)))))) 
              << 7U));
    vlSelfRef.down_valid = (1U & (IData)((vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq 
                                          >> 0x2cU)));
    vlSelfRef.zvt_pe_adder_fp_lane__DOT__fp32_inf = 
        (0x7f800000U | (((1U & (IData)((vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq 
                                        >> 7U))) ? (IData)(
                                                           (vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq 
                                                            >> 0x2bU))
                          : ((~ (IData)((vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq 
                                         >> 7U))) & 
                             ((1U & (IData)((vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq 
                                             >> 6U)))
                               ? (IData)((vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq 
                                          >> 5U)) : (IData)(
                                                            (vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq 
                                                             >> 0x2bU))))) 
                        << 0x1fU));
    vlSelfRef.zvt_pe_adder_fp_lane__DOT___0723_ = (1U 
                                                   & ((~ 
                                                       (0U 
                                                        != 
                                                        (7U 
                                                         & (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq)))));
    zvt_pe_adder_fp_lane__DOT___0030_ = (1U & ((IData)(
                                                       (vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq 
                                                        >> 0x2aU)) 
                                               | (0xffU 
                                                  == 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq 
                                                              >> 0x22U))))));
    vlSelfRef.zvt_pe_adder_fp_lane__DOT___0566_ = ((IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0000_)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (((IData)(vlSelfRef.up_valid) 
                                                                       << 0xaU) 
                                                                      | ((0x200U 
                                                                          & (((0U 
                                                                               != vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)
                                                                               ? 
                                                                              ((IData)(
                                                                                (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                                >> 0x1fU)) 
                                                                               ^ (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0312_))
                                                                               : 
                                                                              ((IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0020_)
                                                                                ? 
                                                                               (2U 
                                                                                == 
                                                                                ((IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0000_)
                                                                                 ? (IData)(vlSelfRef.rnd_mode)
                                                                                 : 0U))
                                                                                : (IData)(
                                                                                (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                                >> 0x1fU)))) 
                                                                             << 9U)) 
                                                                         | (0x1ffU 
                                                                            & (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0693_)))))) 
                                                     << 0x22U) 
                                                    | (((QData)((IData)(
                                                                        (0xffffffU 
                                                                         & (IData)(
                                                                                (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0011_ 
                                                                                >> 0x1dU))))) 
                                                        << 0xaU) 
                                                       | (QData)((IData)(
                                                                         (((((0U 
                                                                              != 
                                                                              (0x1fffffffU 
                                                                               & VL_SHIFTL_III(29,29,6, vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_, (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0695_)))) 
                                                                             << 9U) 
                                                                            | ((0x100U 
                                                                                & (((~ 
                                                                                (((IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0002_) 
                                                                                & (~ (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0004_))) 
                                                                                & (~ (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0010_)))) 
                                                                                & (IData)(
                                                                                (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0011_ 
                                                                                >> 0x1cU))) 
                                                                                << 8U)) 
                                                                               | (((IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0341_) 
                                                                                | (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0348_)) 
                                                                                << 7U))) 
                                                                           | (((((~ (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0341_)) 
                                                                                & (~ (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0348_))) 
                                                                                & (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0362_)) 
                                                                               << 6U) 
                                                                              | (((((~ (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0341_)) 
                                                                                & (~ (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0348_))) 
                                                                                & (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0362_)) 
                                                                                & ((IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0138_)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                                >> 0x1fU))
                                                                                 : (IData)(vlSelfRef.__VdfgRegularize_h7cd686f0_0_25))) 
                                                                                << 5U))) 
                                                                          | ((((IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0341_) 
                                                                               | ((IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0348_) 
                                                                                & (((~ (IData)(
                                                                                (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                                >> 0x16U))) 
                                                                                & (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0105_)) 
                                                                                | ((~ (IData)(
                                                                                (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                                >> 0x36U))) 
                                                                                & (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0209_))))) 
                                                                              << 4U) 
                                                                             | ((((~ 
                                                                                ((IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0693_) 
                                                                                >> 0xbU)) 
                                                                                & (0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0693_) 
                                                                                >> 9U)))) 
                                                                                << 3U) 
                                                                                | (IData)(vlSelfRef.rnd_mode))))))))
                                                    : vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq);
    __Vfunc_zvt_pe_adder_fp_lane__DOT___1973___2__s 
        = (((IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0723_) 
            << 2U) | (((2U == (7U & (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq))) 
                       << 1U) | (3U == (7U & (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq)))));
    __Vfunc_zvt_pe_adder_fp_lane__DOT___1973___2__b 
        = ((2U & ((~ (IData)((vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq 
                              >> 0x2bU))) << 1U)) | 
           (1U & (IData)((vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq 
                          >> 0x2bU))));
    __Vfunc_zvt_pe_adder_fp_lane__DOT___1973___2__Vfuncout 
        = (1U & ((1U == (1U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1973___2__s)))
                  ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1973___2__b)
                  : ((2U == (2U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1973___2__s)))
                      ? ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1973___2__b) 
                         >> 1U) : ((4U != (4U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1973___2__s))) 
                                   || (1U & ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1973___2__b) 
                                             >> 2U))))));
    if ((1U & (~ VL_ONEHOT_I((((4U == (4U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1973___2__s))) 
                               << 2U) | (((2U == (2U 
                                                  & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1973___2__s))) 
                                          << 1U) | 
                                         (1U == (1U 
                                                 & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1973___2__s))))))))) {
        if ((0U != (((4U == (4U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1973___2__s))) 
                     << 2U) | (((2U == (2U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1973___2__s))) 
                                << 1U) | (1U == (1U 
                                                 & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1973___2__s))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: zvt_pe_adder_fp_lane_flat.v:2317: Assertion failed in %Nzvt_pe_adder_fp_lane._1973_: synthesis parallel_case, but multiple matches found for '3'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),3,
                             (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1973___2__s));
                VL_STOP_MT("/Users/leostrijbos/Desktop/Code/Projects/coral-optimised/rtl/coral-original/zvt_pe_adder_fp_lane_flat.v", 2317, "");
            }
        }
    }
    vlSelfRef.zvt_pe_adder_fp_lane__DOT___0719_ = __Vfunc_zvt_pe_adder_fp_lane__DOT___1973___2__Vfuncout;
    vlSelfRef.zvt_pe_adder_fp_lane__DOT___0035_ = ((IData)(zvt_pe_adder_fp_lane__DOT___0030_)
                                                    ? 0U
                                                    : 
                                                   ((0x1fffffeU 
                                                     & ((IData)(
                                                                (vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq 
                                                                 >> 0xaU)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 (vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq 
                                                                  >> 8U)))));
    vlSelfRef.zvt_pe_adder_fp_lane__DOT___0036_ = (1U 
                                                   & (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0035_ 
                                                      | (IData)(
                                                                (vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq 
                                                                 >> 9U))));
    zvt_pe_adder_fp_lane__DOT____VdfgRegularize_h03edf609_0_16 
        = ((2U & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0035_) 
           | (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0036_));
    vlSelfRef.zvt_pe_adder_fp_lane__DOT___0042_ = (1U 
                                                   & ((vlSelfRef.zvt_pe_adder_fp_lane__DOT___0035_ 
                                                       >> 1U) 
                                                      | (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0036_)));
    __Vfunc_zvt_pe_adder_fp_lane__DOT___1909___1__s 
        = ((4U & (((~ (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0042_)) 
                   | (1U == (IData)(zvt_pe_adder_fp_lane__DOT____VdfgRegularize_h03edf609_0_16))) 
                  << 2U)) | (((2U == (IData)(zvt_pe_adder_fp_lane__DOT____VdfgRegularize_h03edf609_0_16)) 
                              << 1U) | (3U == (IData)(zvt_pe_adder_fp_lane__DOT____VdfgRegularize_h03edf609_0_16))));
    __Vfunc_zvt_pe_adder_fp_lane__DOT___1909___1__b 
        = (1U | (2U & (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0035_ 
                       >> 1U)));
    __Vfunc_zvt_pe_adder_fp_lane__DOT___1909___1__Vfuncout 
        = (1U & ((1U == (1U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1909___1__s)))
                  ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1909___1__b)
                  : ((2U == (2U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1909___1__s)))
                      ? ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1909___1__b) 
                         >> 1U) : ((4U == (4U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1909___1__s))) 
                                   && (1U & ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1909___1__b) 
                                             >> 2U))))));
    if ((1U & (~ VL_ONEHOT_I((((4U == (4U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1909___1__s))) 
                               << 2U) | (((2U == (2U 
                                                  & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1909___1__s))) 
                                          << 1U) | 
                                         (1U == (1U 
                                                 & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1909___1__s))))))))) {
        if ((0U != (((4U == (4U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1909___1__s))) 
                     << 2U) | (((2U == (2U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1909___1__s))) 
                                << 1U) | (1U == (1U 
                                                 & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1909___1__s))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: zvt_pe_adder_fp_lane_flat.v:2238: Assertion failed in %Nzvt_pe_adder_fp_lane._1909_: synthesis parallel_case, but multiple matches found for '3'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),3,
                             (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1909___1__s));
                VL_STOP_MT("/Users/leostrijbos/Desktop/Code/Projects/coral-optimised/rtl/coral-original/zvt_pe_adder_fp_lane_flat.v", 2238, "");
            }
        }
    }
    zvt_pe_adder_fp_lane__DOT___0601_ = __Vfunc_zvt_pe_adder_fp_lane__DOT___1909___1__Vfuncout;
    __Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s 
        = (((0x20U & ((~ (0U != (7U & (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq)))) 
                      << 5U)) | (((1U == (7U & (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq))) 
                                  << 4U) | ((2U == 
                                             (7U & (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq))) 
                                            << 3U))) 
           | (((3U == (7U & (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq))) 
               << 2U) | (((4U == (7U & (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq))) 
                          << 1U) | (5U == (7U & (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq))))));
    __Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b 
        = ((((~ (0U != (7U & (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq)))) 
             & (IData)(zvt_pe_adder_fp_lane__DOT___0601_)) 
            << 5U) | (((((IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0042_) 
                         & (IData)((vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq 
                                    >> 0x2bU))) << 3U) 
                       | (((~ (IData)((vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq 
                                       >> 0x2bU))) 
                           & (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0042_)) 
                          << 2U)) | ((2U & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0035_) 
                                     | ((~ (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0035_ 
                                            >> 2U)) 
                                        & (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0042_)))));
    __Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__Vfuncout 
        = (1U & ((0x20U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                  ? ((0x10U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                      ? ((8U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                          ? ((4U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                              ? ((2U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                  ? ((1U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                      ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                      : ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                         >> 1U)) : 
                                 ((1U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                   ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                   : ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                      >> 2U))) : ((2U 
                                                   & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                                    ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                                    : 
                                                   ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                                    >> 1U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                                    ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                                    : 
                                                   ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                                    >> 3U))))
                          : ((4U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                              ? ((2U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                  ? ((1U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                      ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                      : ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                         >> 1U)) : 
                                 ((1U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                   ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                   : ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                      >> 2U))) : ((2U 
                                                   & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                                    ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                                    : 
                                                   ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                                    >> 1U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                                    ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                                    : 
                                                   ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                                    >> 4U)))))
                      : ((8U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                          ? ((4U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                              ? ((2U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                  ? ((1U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                      ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                      : ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                         >> 1U)) : 
                                 ((1U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                   ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                   : ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                      >> 2U))) : ((2U 
                                                   & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                                    ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                                    : 
                                                   ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                                    >> 1U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                                    ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                                    : 
                                                   ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                                    >> 3U))))
                          : ((4U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                              ? ((2U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                  ? ((1U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                      ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                      : ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                         >> 1U)) : 
                                 ((1U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                   ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                   : ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                      >> 2U))) : ((2U 
                                                   & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                                    ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                                    : 
                                                   ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                                    >> 1U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                                    ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                                    : 
                                                   ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                                    >> 5U))))))
                  : ((0x10U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                      ? ((8U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                          ? ((4U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                              ? ((2U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                  ? ((1U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                      ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                      : ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                         >> 1U)) : 
                                 ((1U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                   ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                   : ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                      >> 2U))) : ((2U 
                                                   & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                                    ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                                    : 
                                                   ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                                    >> 1U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                                    ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                                    : 
                                                   ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                                    >> 3U))))
                          : ((4U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                              ? ((2U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                  ? ((1U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                      ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                      : ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                         >> 1U)) : 
                                 ((1U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                   ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                   : ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                      >> 2U))) : ((2U 
                                                   & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                                    ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                                    : 
                                                   ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                                    >> 1U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                                    ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                                    : 
                                                   ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                                    >> 4U)))))
                      : ((8U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                          ? ((4U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                              ? ((2U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                  ? ((1U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                      ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                      : ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                         >> 1U)) : 
                                 ((1U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                   ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                   : ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                      >> 2U))) : ((2U 
                                                   & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                                    ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                                    : 
                                                   ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                                    >> 1U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                                    ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                                    : 
                                                   ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                                    >> 3U))))
                          : ((4U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                              ? ((2U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                  ? ((1U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                      ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                      : ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                         >> 1U)) : 
                                 ((1U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                   ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                   : ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                      >> 2U))) : ((2U 
                                                   & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))
                                                    ? (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)
                                                    : 
                                                   ((IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b) 
                                                    >> 1U))
                                                   : 
                                                  ((1U 
                                                    & (~ (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))) 
                                                   || (1U 
                                                       & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__b)))))))));
    if ((1U & (~ VL_ONEHOT_I(((((0x20U == (0x20U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))) 
                                << 5U) | (((0x10U == 
                                            (0x10U 
                                             & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))) 
                                           << 4U) | 
                                          ((8U == (8U 
                                                   & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))) 
                                           << 3U))) 
                              | (((4U == (4U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))) 
                                  << 2U) | (((2U == 
                                              (2U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))) 
                                             << 1U) 
                                            | (1U == 
                                               (1U 
                                                & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s)))))))))) {
        if ((0U != ((((0x20U == (0x20U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))) 
                      << 5U) | (((0x10U == (0x10U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))) 
                                 << 4U) | ((8U == (8U 
                                                   & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))) 
                                           << 3U))) 
                    | (((4U == (4U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))) 
                        << 2U) | (((2U == (2U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s))) 
                                   << 1U) | (1U == 
                                             (1U & (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s)))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: zvt_pe_adder_fp_lane_flat.v:2209: Assertion failed in %Nzvt_pe_adder_fp_lane._1901_: synthesis parallel_case, but multiple matches found for '6'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),6,
                             (IData)(__Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__s));
                VL_STOP_MT("/Users/leostrijbos/Desktop/Code/Projects/coral-optimised/rtl/coral-original/zvt_pe_adder_fp_lane_flat.v", 2209, "");
            }
        }
    }
    zvt_pe_adder_fp_lane__DOT___0593_ = __Vfunc_zvt_pe_adder_fp_lane__DOT___1901___0__Vfuncout;
    vlSelfRef.zvt_pe_adder_fp_lane__DOT___0053_ = ((IData)(
                                                           (vlSelfRef.zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq 
                                                            >> 0xbU)) 
                                                   + 
                                                   ((IData)(zvt_pe_adder_fp_lane__DOT___0593_)
                                                     ? 1U
                                                     : 0U));
    vlSelfRef.zvt_pe_adder_fp_lane__DOT___0071_ = ((IData)(zvt_pe_adder_fp_lane__DOT___0030_) 
                                                   | (0xffU 
                                                      == 
                                                      (0xffU 
                                                       & (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0053_ 
                                                          >> 0x17U))));
}
