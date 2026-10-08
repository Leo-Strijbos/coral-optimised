// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vzvt_pe_adder_fp_lane.h for the primary calling header

#include "Vzvt_pe_adder_fp_lane__pch.h"
#include "Vzvt_pe_adder_fp_lane__Syms.h"
#include "Vzvt_pe_adder_fp_lane___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vzvt_pe_adder_fp_lane___024root___dump_triggers__stl(Vzvt_pe_adder_fp_lane___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vzvt_pe_adder_fp_lane___024root___eval_triggers__stl(Vzvt_pe_adder_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_adder_fp_lane___024root___eval_triggers__stl\n"); );
    Vzvt_pe_adder_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.setBit(1U, ((IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT__u_rounding__02estatus) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__zvt_pe_adder_fp_lane__DOT__u_rounding__02estatus__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__zvt_pe_adder_fp_lane__DOT__u_rounding__02estatus__0 
        = vlSelfRef.zvt_pe_adder_fp_lane__DOT__u_rounding__02estatus;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.setBit(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vzvt_pe_adder_fp_lane___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vzvt_pe_adder_fp_lane___024root___stl_sequent__TOP__0(Vzvt_pe_adder_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_adder_fp_lane___024root___stl_sequent__TOP__0\n"); );
    Vzvt_pe_adder_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0030_;
    zvt_pe_adder_fp_lane__DOT___0030_ = 0;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0073_;
    zvt_pe_adder_fp_lane__DOT___0073_ = 0;
    CData/*4:0*/ zvt_pe_adder_fp_lane__DOT___0080_;
    zvt_pe_adder_fp_lane__DOT___0080_ = 0;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0082_;
    zvt_pe_adder_fp_lane__DOT___0082_ = 0;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0109_;
    zvt_pe_adder_fp_lane__DOT___0109_ = 0;
    SData/*10:0*/ zvt_pe_adder_fp_lane__DOT___0172_;
    zvt_pe_adder_fp_lane__DOT___0172_ = 0;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0177_;
    zvt_pe_adder_fp_lane__DOT___0177_ = 0;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0195_;
    zvt_pe_adder_fp_lane__DOT___0195_ = 0;
    CData/*4:0*/ zvt_pe_adder_fp_lane__DOT___0197_;
    zvt_pe_adder_fp_lane__DOT___0197_ = 0;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0199_;
    zvt_pe_adder_fp_lane__DOT___0199_ = 0;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0226_;
    zvt_pe_adder_fp_lane__DOT___0226_ = 0;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0242_;
    zvt_pe_adder_fp_lane__DOT___0242_ = 0;
    SData/*10:0*/ zvt_pe_adder_fp_lane__DOT___0290_;
    zvt_pe_adder_fp_lane__DOT___0290_ = 0;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0294_;
    zvt_pe_adder_fp_lane__DOT___0294_ = 0;
    IData/*28:0*/ zvt_pe_adder_fp_lane__DOT___0311_;
    zvt_pe_adder_fp_lane__DOT___0311_ = 0;
    CData/*7:0*/ zvt_pe_adder_fp_lane__DOT___0448_;
    zvt_pe_adder_fp_lane__DOT___0448_ = 0;
    CData/*7:0*/ zvt_pe_adder_fp_lane__DOT___0450_;
    zvt_pe_adder_fp_lane__DOT___0450_ = 0;
    CData/*4:0*/ zvt_pe_adder_fp_lane__DOT___0453_;
    zvt_pe_adder_fp_lane__DOT___0453_ = 0;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0475_;
    zvt_pe_adder_fp_lane__DOT___0475_ = 0;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0481_;
    zvt_pe_adder_fp_lane__DOT___0481_ = 0;
    CData/*5:0*/ zvt_pe_adder_fp_lane__DOT___0589_;
    zvt_pe_adder_fp_lane__DOT___0589_ = 0;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0593_;
    zvt_pe_adder_fp_lane__DOT___0593_ = 0;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0601_;
    zvt_pe_adder_fp_lane__DOT___0601_ = 0;
    CData/*5:0*/ zvt_pe_adder_fp_lane__DOT___0637_;
    zvt_pe_adder_fp_lane__DOT___0637_ = 0;
    IData/*23:0*/ zvt_pe_adder_fp_lane__DOT__u_addfront__02egen_in_align__05b0__05d__02eu_in_align__02eg_int_lzc__02eu_sig_lzc__02ein_i;
    zvt_pe_adder_fp_lane__DOT__u_addfront__02egen_in_align__05b0__05d__02eu_in_align__02eg_int_lzc__02eu_sig_lzc__02ein_i = 0;
    CData/*4:0*/ zvt_pe_adder_fp_lane__DOT__u_addfront__02egen_in_align__05b0__05d__02eu_in_align__02elzc_cnt_fix;
    zvt_pe_adder_fp_lane__DOT__u_addfront__02egen_in_align__05b0__05d__02eu_in_align__02elzc_cnt_fix = 0;
    IData/*23:0*/ zvt_pe_adder_fp_lane__DOT__u_addfront__02egen_in_align__05b1__05d__02eu_in_align__02eg_int_lzc__02eu_sig_lzc__02ein_i;
    zvt_pe_adder_fp_lane__DOT__u_addfront__02egen_in_align__05b1__05d__02eu_in_align__02eg_int_lzc__02eu_sig_lzc__02ein_i = 0;
    CData/*4:0*/ zvt_pe_adder_fp_lane__DOT__u_addfront__02egen_in_align__05b1__05d__02eu_in_align__02elzc_cnt_fix;
    zvt_pe_adder_fp_lane__DOT__u_addfront__02egen_in_align__05b1__05d__02eu_in_align__02elzc_cnt_fix = 0;
    IData/*27:0*/ zvt_pe_adder_fp_lane__DOT__u_addfront__02eu_addsub__02ea;
    zvt_pe_adder_fp_lane__DOT__u_addfront__02eu_addsub__02ea = 0;
    IData/*27:0*/ zvt_pe_adder_fp_lane__DOT__u_addfront__02eu_addsub__02eb;
    zvt_pe_adder_fp_lane__DOT__u_addfront__02eu_addsub__02eb = 0;
    CData/*4:0*/ zvt_pe_adder_fp_lane__DOT__u_addfront__02eu_sum_align__02elzc_cnt_fix;
    zvt_pe_adder_fp_lane__DOT__u_addfront__02eu_sum_align__02elzc_cnt_fix = 0;
    SData/*11:0*/ zvt_pe_adder_fp_lane__DOT____VdfgRegularize_h03edf609_0_1;
    zvt_pe_adder_fp_lane__DOT____VdfgRegularize_h03edf609_0_1 = 0;
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
    CData/*0:0*/ __VdfgRegularize_h0dff6736_0_10;
    __VdfgRegularize_h0dff6736_0_10 = 0;
    CData/*0:0*/ __VdfgRegularize_h0dff6736_0_11;
    __VdfgRegularize_h0dff6736_0_11 = 0;
    CData/*0:0*/ __VdfgRegularize_h0dff6736_0_12;
    __VdfgRegularize_h0dff6736_0_12 = 0;
    CData/*0:0*/ __VdfgRegularize_h0dff6736_0_13;
    __VdfgRegularize_h0dff6736_0_13 = 0;
    CData/*0:0*/ __VdfgRegularize_h0dff6736_0_14;
    __VdfgRegularize_h0dff6736_0_14 = 0;
    CData/*0:0*/ __VdfgRegularize_h0dff6736_0_15;
    __VdfgRegularize_h0dff6736_0_15 = 0;
    CData/*0:0*/ __VdfgRegularize_h0dff6736_0_16;
    __VdfgRegularize_h0dff6736_0_16 = 0;
    CData/*0:0*/ __VdfgRegularize_h0dff6736_0_17;
    __VdfgRegularize_h0dff6736_0_17 = 0;
    // Body
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
    vlSelfRef.zvt_pe_adder_fp_lane__DOT___0000_ = ((IData)(vlSelfRef.reg_enable) 
                                                   & (IData)(vlSelfRef.up_valid));
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
    vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ = ((IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0000_)
                                                    ? vlSelfRef.operands
                                                    : 0ULL);
    vlSelfRef.zvt_pe_adder_fp_lane__DOT___0105_ = (IData)(
                                                          ((0x7f800000ULL 
                                                            == 
                                                            (0x7f800000ULL 
                                                             & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_)) 
                                                           & (0U 
                                                              != 
                                                              (0x7fffffU 
                                                               & (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_)))));
    vlSelfRef.zvt_pe_adder_fp_lane__DOT___0209_ = (IData)(
                                                          ((0x7f80000000000000ULL 
                                                            == 
                                                            (0x7f80000000000000ULL 
                                                             & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_)) 
                                                           & (0U 
                                                              != 
                                                              (0x7fffffU 
                                                               & (IData)(
                                                                         (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                          >> 0x20U))))));
    zvt_pe_adder_fp_lane__DOT___0242_ = (IData)(((0x7f80000000000000ULL 
                                                  == 
                                                  (0x7f80000000000000ULL 
                                                   & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_)) 
                                                 & (~ 
                                                    (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & (IData)(
                                                                (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                 >> 0x20U)))))));
    vlSelfRef.zvt_pe_adder_fp_lane__DOT___0138_ = (IData)(
                                                          ((0x7f800000ULL 
                                                            == 
                                                            (0x7f800000ULL 
                                                             & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_)) 
                                                           & (~ 
                                                              (0U 
                                                               != 
                                                               (0x7fffffU 
                                                                & (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_))))));
    zvt_pe_adder_fp_lane__DOT__u_addfront__02egen_in_align__05b0__05d__02eu_in_align__02eg_int_lzc__02eu_sig_lzc__02ein_i 
        = (((0U != (0xffU & (IData)((vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                     >> 0x17U)))) << 0x17U) 
           | (0x7fffffU & (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_)));
    zvt_pe_adder_fp_lane__DOT__u_addfront__02egen_in_align__05b1__05d__02eu_in_align__02eg_int_lzc__02eu_sig_lzc__02ein_i 
        = (((0U != (0xffU & (IData)((vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                     >> 0x37U)))) << 0x17U) 
           | (0x7fffffU & (IData)((vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                   >> 0x20U))));
    vlSelfRef.__VdfgRegularize_h7cd686f0_0_25 = (1U 
                                                 & ((IData)(
                                                            (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                             >> 0x3fU)) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0000_) 
                                                     & (IData)(vlSelfRef.do_subtract))));
    zvt_pe_adder_fp_lane__DOT___0448_ = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                               >> 0x17U))) 
                                                   > 
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                               >> 0x37U))))
                                                   ? (IData)(
                                                             (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                              >> 0x17U))
                                                   : (IData)(
                                                             (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                              >> 0x37U))));
    zvt_pe_adder_fp_lane__DOT___0082_ = (IData)((0ULL 
                                                 != 
                                                 (0x7fff0000ULL 
                                                  & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_)));
    zvt_pe_adder_fp_lane__DOT___0109_ = (IData)((0ULL 
                                                 != 
                                                 (0xc000ULL 
                                                  & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_)));
    zvt_pe_adder_fp_lane__DOT___0199_ = (IData)((0ULL 
                                                 != 
                                                 (0x7fff000000000000ULL 
                                                  & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_)));
    zvt_pe_adder_fp_lane__DOT___0226_ = (IData)((0ULL 
                                                 != 
                                                 (0xc00000000000ULL 
                                                  & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_)));
    __VdfgRegularize_h0dff6736_0_12 = (IData)((0ULL 
                                               != (0x700000000ULL 
                                                   & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_)));
    __VdfgRegularize_h0dff6736_0_13 = (IData)((0ULL 
                                               != (0x3f0000000000ULL 
                                                   & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_)));
    __VdfgRegularize_h0dff6736_0_14 = (IData)((0ULL 
                                               != (7ULL 
                                                   & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_)));
    __VdfgRegularize_h0dff6736_0_15 = (IData)((0ULL 
                                               != (0x3f00ULL 
                                                   & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_)));
    zvt_pe_adder_fp_lane__DOT____VdfgRegularize_h03edf609_0_16 
        = ((2U & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0035_) 
           | (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0036_));
    vlSelfRef.zvt_pe_adder_fp_lane__DOT___0042_ = (1U 
                                                   & ((vlSelfRef.zvt_pe_adder_fp_lane__DOT___0035_ 
                                                       >> 1U) 
                                                      | (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0036_)));
    vlSelfRef.zvt_pe_adder_fp_lane__DOT___0348_ = ((IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0105_) 
                                                   | (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0209_));
    vlSelfRef.zvt_pe_adder_fp_lane__DOT___0362_ = ((IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0138_) 
                                                   | (IData)(zvt_pe_adder_fp_lane__DOT___0242_));
    vlSelfRef.zvt_pe_adder_fp_lane__DOT___0020_ = (1U 
                                                   & ((IData)(
                                                              (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                               >> 0x1fU)) 
                                                      ^ (IData)(vlSelfRef.__VdfgRegularize_h7cd686f0_0_25)));
    zvt_pe_adder_fp_lane__DOT___0450_ = ((1U < (IData)(zvt_pe_adder_fp_lane__DOT___0448_))
                                          ? (IData)(zvt_pe_adder_fp_lane__DOT___0448_)
                                          : 1U);
    zvt_pe_adder_fp_lane__DOT___0197_ = ((IData)(zvt_pe_adder_fp_lane__DOT___0199_)
                                          ? ((0U != 
                                              (0xffU 
                                               & (IData)(
                                                         (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                          >> 0x37U))))
                                              ? 0U : 
                                             ((1U & (IData)(
                                                            (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                             >> 0x36U)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                              >> 0x35U)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                               >> 0x34U)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                >> 0x33U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                 >> 0x32U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                  >> 0x31U)))
                                                       ? 6U
                                                       : 7U)))))))
                                          : ((IData)(zvt_pe_adder_fp_lane__DOT___0226_)
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                             >> 0x2fU)))
                                                  ? 8U
                                                  : 9U)
                                              : ((IData)(__VdfgRegularize_h0dff6736_0_13)
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                              >> 0x2dU)))
                                                   ? 0xaU
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                               >> 0x2cU)))
                                                    ? 0xbU
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                >> 0x2bU)))
                                                     ? 0xcU
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                 >> 0x2aU)))
                                                      ? 0xdU
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                  >> 0x29U)))
                                                       ? 0xeU
                                                       : 0xfU)))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                              >> 0x27U)))
                                                   ? 0x10U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                               >> 0x26U)))
                                                    ? 0x11U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                >> 0x25U)))
                                                     ? 0x12U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                 >> 0x24U)))
                                                      ? 0x13U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                  >> 0x23U)))
                                                       ? 0x14U
                                                       : 
                                                      ((IData)(__VdfgRegularize_h0dff6736_0_12)
                                                        ? 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                    >> 0x22U)))
                                                         ? 0x15U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                     >> 0x21U)))
                                                          ? 0x16U
                                                          : 0x17U))
                                                        : 0U)))))))));
    zvt_pe_adder_fp_lane__DOT___0195_ = (((((IData)(zvt_pe_adder_fp_lane__DOT___0199_) 
                                            | (IData)(zvt_pe_adder_fp_lane__DOT___0226_)) 
                                           | (IData)(__VdfgRegularize_h0dff6736_0_13)) 
                                          | (0ULL != 
                                             (0xf800000000ULL 
                                              & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_))) 
                                         | (IData)(__VdfgRegularize_h0dff6736_0_12));
    zvt_pe_adder_fp_lane__DOT___0080_ = ((IData)(zvt_pe_adder_fp_lane__DOT___0082_)
                                          ? ((0U != 
                                              (0xffU 
                                               & (IData)(
                                                         (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                          >> 0x17U))))
                                              ? 0U : 
                                             ((1U & (IData)(
                                                            (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                             >> 0x16U)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                              >> 0x15U)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                               >> 0x14U)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                >> 0x13U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                 >> 0x12U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                  >> 0x11U)))
                                                       ? 6U
                                                       : 7U)))))))
                                          : ((IData)(zvt_pe_adder_fp_lane__DOT___0109_)
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                             >> 0xfU)))
                                                  ? 8U
                                                  : 9U)
                                              : ((IData)(__VdfgRegularize_h0dff6736_0_15)
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                              >> 0xdU)))
                                                   ? 0xaU
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                               >> 0xcU)))
                                                    ? 0xbU
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                >> 0xbU)))
                                                     ? 0xcU
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                 >> 0xaU)))
                                                      ? 0xdU
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                  >> 9U)))
                                                       ? 0xeU
                                                       : 0xfU)))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                              >> 7U)))
                                                   ? 0x10U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                               >> 6U)))
                                                    ? 0x11U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                >> 5U)))
                                                     ? 0x12U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                 >> 4U)))
                                                      ? 0x13U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                  >> 3U)))
                                                       ? 0x14U
                                                       : 
                                                      ((IData)(__VdfgRegularize_h0dff6736_0_14)
                                                        ? 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                    >> 2U)))
                                                         ? 0x15U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                     >> 1U)))
                                                          ? 0x16U
                                                          : 0x17U))
                                                        : 0U)))))))));
    zvt_pe_adder_fp_lane__DOT___0073_ = (((((IData)(zvt_pe_adder_fp_lane__DOT___0082_) 
                                            | (IData)(zvt_pe_adder_fp_lane__DOT___0109_)) 
                                           | (IData)(__VdfgRegularize_h0dff6736_0_15)) 
                                          | (0ULL != 
                                             (0xf8ULL 
                                              & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_))) 
                                         | (IData)(__VdfgRegularize_h0dff6736_0_14));
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
    vlSelfRef.zvt_pe_adder_fp_lane__DOT___0341_ = ((IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0138_) 
                                                   & ((IData)(zvt_pe_adder_fp_lane__DOT___0242_) 
                                                      & (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0020_)));
    zvt_pe_adder_fp_lane__DOT____VdfgRegularize_h03edf609_0_1 
        = ((0x800U & (((IData)(1U) + (IData)(zvt_pe_adder_fp_lane__DOT___0450_)) 
                      << 2U)) | ((0x400U & (((IData)(1U) 
                                             + (IData)(zvt_pe_adder_fp_lane__DOT___0450_)) 
                                            << 1U)) 
                                 | (0x3ffU & ((IData)(1U) 
                                              + (IData)(zvt_pe_adder_fp_lane__DOT___0450_)))));
    zvt_pe_adder_fp_lane__DOT___0172_ = (0x7ffU & (
                                                   ((0xfeU 
                                                     & ((IData)(
                                                                (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                 >> 0x18U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((~ 
                                                           (0U 
                                                            != 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                        >> 0x17U))))) 
                                                          | (IData)(
                                                                    (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                     >> 0x17U))))) 
                                                   - (IData)(zvt_pe_adder_fp_lane__DOT___0450_)));
    zvt_pe_adder_fp_lane__DOT___0290_ = (0x7ffU & (
                                                   ((0xfeU 
                                                     & ((IData)(
                                                                (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                 >> 0x38U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((~ 
                                                           (0U 
                                                            != 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                        >> 0x37U))))) 
                                                          | (IData)(
                                                                    (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0186_ 
                                                                     >> 0x37U))))) 
                                                   - (IData)(zvt_pe_adder_fp_lane__DOT___0450_)));
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
    zvt_pe_adder_fp_lane__DOT__u_addfront__02egen_in_align__05b1__05d__02eu_in_align__02elzc_cnt_fix 
        = ((IData)(zvt_pe_adder_fp_lane__DOT___0195_)
            ? (IData)(zvt_pe_adder_fp_lane__DOT___0197_)
            : 0x18U);
    zvt_pe_adder_fp_lane__DOT__u_addfront__02egen_in_align__05b0__05d__02eu_in_align__02elzc_cnt_fix 
        = ((IData)(zvt_pe_adder_fp_lane__DOT___0073_)
            ? (IData)(zvt_pe_adder_fp_lane__DOT___0080_)
            : 0x18U);
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
    if (zvt_pe_adder_fp_lane__DOT___0195_) {
        zvt_pe_adder_fp_lane__DOT___0294_ = (1U & VL_GTES_III(11, (IData)(zvt_pe_adder_fp_lane__DOT___0290_), (IData)(zvt_pe_adder_fp_lane__DOT__u_addfront__02egen_in_align__05b1__05d__02eu_in_align__02elzc_cnt_fix)));
        zvt_pe_adder_fp_lane__DOT___0589_ = ((IData)(zvt_pe_adder_fp_lane__DOT___0195_)
                                              ? (0x3fU 
                                                 & ((IData)(zvt_pe_adder_fp_lane__DOT___0294_)
                                                     ? 
                                                    ((IData)(0x1bU) 
                                                     + (IData)(zvt_pe_adder_fp_lane__DOT___0197_))
                                                     : 
                                                    ((IData)(zvt_pe_adder_fp_lane__DOT___0195_)
                                                      ? 
                                                     ((IData)(zvt_pe_adder_fp_lane__DOT___0294_)
                                                       ? 0U
                                                       : 
                                                      (((~ 
                                                         (1U 
                                                          & (((IData)(0x1bU) 
                                                              + (IData)(zvt_pe_adder_fp_lane__DOT___0290_)) 
                                                             >> 0xaU))) 
                                                        & ((0x3fU 
                                                            & ((IData)(0x1bU) 
                                                               + (IData)(zvt_pe_adder_fp_lane__DOT___0290_))) 
                                                           >= (IData)(zvt_pe_adder_fp_lane__DOT__u_addfront__02egen_in_align__05b1__05d__02eu_in_align__02elzc_cnt_fix)))
                                                        ? 
                                                       ((IData)(0x1bU) 
                                                        + (IData)(zvt_pe_adder_fp_lane__DOT___0290_))
                                                        : 0U))
                                                      : 0U)))
                                              : 0U);
    } else {
        zvt_pe_adder_fp_lane__DOT___0294_ = 0U;
        zvt_pe_adder_fp_lane__DOT___0589_ = 0U;
    }
    if (zvt_pe_adder_fp_lane__DOT___0073_) {
        zvt_pe_adder_fp_lane__DOT___0177_ = (1U & VL_GTES_III(11, (IData)(zvt_pe_adder_fp_lane__DOT___0172_), (IData)(zvt_pe_adder_fp_lane__DOT__u_addfront__02egen_in_align__05b0__05d__02eu_in_align__02elzc_cnt_fix)));
        zvt_pe_adder_fp_lane__DOT___0637_ = ((IData)(zvt_pe_adder_fp_lane__DOT___0073_)
                                              ? (0x3fU 
                                                 & ((IData)(zvt_pe_adder_fp_lane__DOT___0177_)
                                                     ? 
                                                    ((IData)(0x1bU) 
                                                     + (IData)(zvt_pe_adder_fp_lane__DOT___0080_))
                                                     : 
                                                    ((IData)(zvt_pe_adder_fp_lane__DOT___0073_)
                                                      ? 
                                                     ((IData)(zvt_pe_adder_fp_lane__DOT___0177_)
                                                       ? 0U
                                                       : 
                                                      (((~ 
                                                         (1U 
                                                          & (((IData)(0x1bU) 
                                                              + (IData)(zvt_pe_adder_fp_lane__DOT___0172_)) 
                                                             >> 0xaU))) 
                                                        & ((0x3fU 
                                                            & ((IData)(0x1bU) 
                                                               + (IData)(zvt_pe_adder_fp_lane__DOT___0172_))) 
                                                           >= (IData)(zvt_pe_adder_fp_lane__DOT__u_addfront__02egen_in_align__05b0__05d__02eu_in_align__02elzc_cnt_fix)))
                                                        ? 
                                                       ((IData)(0x1bU) 
                                                        + (IData)(zvt_pe_adder_fp_lane__DOT___0172_))
                                                        : 0U))
                                                      : 0U)))
                                              : 0U);
    } else {
        zvt_pe_adder_fp_lane__DOT___0177_ = 0U;
        zvt_pe_adder_fp_lane__DOT___0637_ = 0U;
    }
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
    zvt_pe_adder_fp_lane__DOT__u_addfront__02eu_addsub__02eb 
        = ((0xffffffeU & ((IData)((0x7ffffffULL & (
                                                   ((QData)((IData)(zvt_pe_adder_fp_lane__DOT__u_addfront__02egen_in_align__05b1__05d__02eu_in_align__02eg_int_lzc__02eu_sig_lzc__02ein_i)) 
                                                    << (IData)(zvt_pe_adder_fp_lane__DOT___0589_)) 
                                                   >> 0x18U))) 
                          << 1U)) | (0U != (0xffffffU 
                                            & VL_SHIFTL_III(24,24,6, zvt_pe_adder_fp_lane__DOT__u_addfront__02egen_in_align__05b1__05d__02eu_in_align__02eg_int_lzc__02eu_sig_lzc__02ein_i, (IData)(zvt_pe_adder_fp_lane__DOT___0589_)))));
    zvt_pe_adder_fp_lane__DOT__u_addfront__02eu_addsub__02ea 
        = ((0xffffffeU & ((IData)((0x7ffffffULL & (
                                                   ((QData)((IData)(zvt_pe_adder_fp_lane__DOT__u_addfront__02egen_in_align__05b0__05d__02eu_in_align__02eg_int_lzc__02eu_sig_lzc__02ein_i)) 
                                                    << (IData)(zvt_pe_adder_fp_lane__DOT___0637_)) 
                                                   >> 0x18U))) 
                          << 1U)) | (0U != (0xffffffU 
                                            & VL_SHIFTL_III(24,24,6, zvt_pe_adder_fp_lane__DOT__u_addfront__02egen_in_align__05b0__05d__02eu_in_align__02eg_int_lzc__02eu_sig_lzc__02ein_i, (IData)(zvt_pe_adder_fp_lane__DOT___0637_)))));
    zvt_pe_adder_fp_lane__DOT___0311_ = (0x1fffffffU 
                                         & (zvt_pe_adder_fp_lane__DOT__u_addfront__02eu_addsub__02ea 
                                            + ((((IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0020_) 
                                                 << 0x1cU) 
                                                | (0xfffffffU 
                                                   & ((IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0020_)
                                                       ? 
                                                      (~ zvt_pe_adder_fp_lane__DOT__u_addfront__02eu_addsub__02eb)
                                                       : zvt_pe_adder_fp_lane__DOT__u_addfront__02eu_addsub__02eb))) 
                                               + (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0020_))));
    vlSelfRef.zvt_pe_adder_fp_lane__DOT___0312_ = ((IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0020_) 
                                                   & (zvt_pe_adder_fp_lane__DOT___0311_ 
                                                      >> 0x1cU));
    vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_ = ((IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0312_)
                                                    ? 
                                                   (0xfffffffU 
                                                    & (zvt_pe_adder_fp_lane__DOT__u_addfront__02eu_addsub__02eb 
                                                       - zvt_pe_adder_fp_lane__DOT__u_addfront__02eu_addsub__02ea))
                                                    : zvt_pe_adder_fp_lane__DOT___0311_);
    zvt_pe_adder_fp_lane__DOT___0475_ = (IData)((0U 
                                                 != 
                                                 (0x18000000U 
                                                  & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)));
    zvt_pe_adder_fp_lane__DOT___0481_ = (IData)((0U 
                                                 != 
                                                 (0x180000U 
                                                  & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)));
    __VdfgRegularize_h0dff6736_0_10 = (IData)((0U != 
                                               (0xe0U 
                                                & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)));
    __VdfgRegularize_h0dff6736_0_11 = (IData)((0U != 
                                               (0x7e000U 
                                                & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)));
    __VdfgRegularize_h0dff6736_0_16 = (IData)((0U != 
                                               (0xe00U 
                                                & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)));
    __VdfgRegularize_h0dff6736_0_17 = (IData)((0U != 
                                               (0x7e00000U 
                                                & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)));
    zvt_pe_adder_fp_lane__DOT___0453_ = ((IData)(zvt_pe_adder_fp_lane__DOT___0475_)
                                          ? ((0x10000000U 
                                              & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)
                                              ? 0U : 1U)
                                          : ((IData)(__VdfgRegularize_h0dff6736_0_17)
                                              ? ((0x4000000U 
                                                  & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)
                                                  ? 2U
                                                  : 
                                                 ((0x2000000U 
                                                   & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)
                                                   ? 3U
                                                   : 
                                                  ((0x1000000U 
                                                    & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)
                                                    ? 4U
                                                    : 
                                                   ((0x800000U 
                                                     & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)
                                                     ? 5U
                                                     : 
                                                    ((0x400000U 
                                                      & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)
                                                      ? 6U
                                                      : 7U)))))
                                              : ((IData)(zvt_pe_adder_fp_lane__DOT___0481_)
                                                  ? 
                                                 ((0x100000U 
                                                   & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)
                                                   ? 8U
                                                   : 9U)
                                                  : 
                                                 ((IData)(__VdfgRegularize_h0dff6736_0_11)
                                                   ? 
                                                  ((0x40000U 
                                                    & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)
                                                    ? 0xaU
                                                    : 
                                                   ((0x20000U 
                                                     & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)
                                                     ? 0xbU
                                                     : 
                                                    ((0x10000U 
                                                      & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)
                                                      ? 0xcU
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)
                                                       ? 0xdU
                                                       : 
                                                      ((0x4000U 
                                                        & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)
                                                        ? 0xeU
                                                        : 0xfU)))))
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)
                                                    ? 0x10U
                                                    : 
                                                   ((IData)(__VdfgRegularize_h0dff6736_0_16)
                                                     ? 
                                                    ((0x800U 
                                                      & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)
                                                      ? 0x11U
                                                      : 
                                                     ((0x400U 
                                                       & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)
                                                       ? 0x12U
                                                       : 0x13U))
                                                     : 
                                                    ((0x100U 
                                                      & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)
                                                      ? 0x14U
                                                      : 
                                                     ((IData)(__VdfgRegularize_h0dff6736_0_10)
                                                       ? 
                                                      ((0x80U 
                                                        & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)
                                                        ? 0x15U
                                                        : 
                                                       ((0x40U 
                                                         & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)
                                                         ? 0x16U
                                                         : 0x17U))
                                                       : 
                                                      ((0x10U 
                                                        & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)
                                                        ? 0x18U
                                                        : 
                                                       ((8U 
                                                         & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)
                                                         ? 0x19U
                                                         : 
                                                        ((4U 
                                                          & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)
                                                          ? 0x1aU
                                                          : 
                                                         ((2U 
                                                           & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)
                                                           ? 0x1bU
                                                           : 
                                                          ((1U 
                                                            & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)
                                                            ? 0x1cU
                                                            : 0U)))))))))))));
    vlSelfRef.zvt_pe_adder_fp_lane__DOT___0002_ = (
                                                   ((((((IData)(zvt_pe_adder_fp_lane__DOT___0475_) 
                                                        | (IData)(__VdfgRegularize_h0dff6736_0_17)) 
                                                       | (IData)(zvt_pe_adder_fp_lane__DOT___0481_)) 
                                                      | (IData)(__VdfgRegularize_h0dff6736_0_11)) 
                                                     | (0U 
                                                        != 
                                                        (0x111fU 
                                                         & vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_))) 
                                                    | (IData)(__VdfgRegularize_h0dff6736_0_16)) 
                                                   | (IData)(__VdfgRegularize_h0dff6736_0_10));
    zvt_pe_adder_fp_lane__DOT__u_addfront__02eu_sum_align__02elzc_cnt_fix 
        = ((IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0002_)
            ? (IData)(zvt_pe_adder_fp_lane__DOT___0453_)
            : 0x1dU);
    vlSelfRef.zvt_pe_adder_fp_lane__DOT___0010_ = (
                                                   (~ 
                                                    (1U 
                                                     & (((IData)(0x19U) 
                                                         + 
                                                         ((IData)(zvt_pe_adder_fp_lane__DOT____VdfgRegularize_h03edf609_0_1) 
                                                          - (IData)(1U))) 
                                                        >> 0xbU))) 
                                                   & ((0x3fU 
                                                       & ((IData)(0x19U) 
                                                          + 
                                                          ((IData)(zvt_pe_adder_fp_lane__DOT____VdfgRegularize_h03edf609_0_1) 
                                                           - (IData)(1U)))) 
                                                      >= (IData)(zvt_pe_adder_fp_lane__DOT__u_addfront__02eu_sum_align__02elzc_cnt_fix)));
    if (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0002_) {
        vlSelfRef.zvt_pe_adder_fp_lane__DOT___0004_ 
            = (1U & VL_GTES_III(12, (0xfffU & ((IData)(zvt_pe_adder_fp_lane__DOT____VdfgRegularize_h03edf609_0_1) 
                                               - (IData)(1U))), (IData)(zvt_pe_adder_fp_lane__DOT__u_addfront__02eu_sum_align__02elzc_cnt_fix)));
        if (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0002_) {
            if (vlSelfRef.zvt_pe_adder_fp_lane__DOT___0004_) {
                vlSelfRef.zvt_pe_adder_fp_lane__DOT___0693_ 
                    = (0xfffU & ((IData)(zvt_pe_adder_fp_lane__DOT____VdfgRegularize_h03edf609_0_1) 
                                 - (IData)(zvt_pe_adder_fp_lane__DOT___0453_)));
                vlSelfRef.zvt_pe_adder_fp_lane__DOT___0695_ 
                    = (0x3fU & ((IData)(0x19U) + (IData)(zvt_pe_adder_fp_lane__DOT___0453_)));
            } else {
                vlSelfRef.zvt_pe_adder_fp_lane__DOT___0693_ = 0U;
                vlSelfRef.zvt_pe_adder_fp_lane__DOT___0695_ 
                    = (0x3fU & ((IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0002_)
                                 ? ((IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0004_)
                                     ? 0U : ((IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0010_)
                                              ? ((IData)(0x19U) 
                                                 + 
                                                 ((IData)(zvt_pe_adder_fp_lane__DOT____VdfgRegularize_h03edf609_0_1) 
                                                  - (IData)(1U)))
                                              : 0U))
                                 : 0U));
            }
        } else {
            vlSelfRef.zvt_pe_adder_fp_lane__DOT___0693_ = 0U;
            vlSelfRef.zvt_pe_adder_fp_lane__DOT___0695_ = 0U;
        }
    } else {
        vlSelfRef.zvt_pe_adder_fp_lane__DOT___0004_ = 0U;
        vlSelfRef.zvt_pe_adder_fp_lane__DOT___0693_ = 0U;
        vlSelfRef.zvt_pe_adder_fp_lane__DOT___0695_ = 0U;
    }
    vlSelfRef.zvt_pe_adder_fp_lane__DOT___0011_ = (0x3fffffffffffffULL 
                                                   & ((QData)((IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0314_)) 
                                                      << (IData)(vlSelfRef.zvt_pe_adder_fp_lane__DOT___0695_)));
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
}
