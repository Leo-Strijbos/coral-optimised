// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vzvt_pe_mulbulk_fp_lane.h for the primary calling header

#ifndef VERILATED_VZVT_PE_MULBULK_FP_LANE___024ROOT_H_
#define VERILATED_VZVT_PE_MULBULK_FP_LANE___024ROOT_H_  // guard

#include "verilated.h"


class Vzvt_pe_mulbulk_fp_lane__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vzvt_pe_mulbulk_fp_lane___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(reg_enable,0,0);
        VL_IN8(up_valid,0,0);
        VL_IN8(rnd_mode,2,0);
        VL_IN8(mask,3,0);
        VL_IN8(src_fmt,2,0);
        VL_IN8(dst_fmt,2,0);
        VL_OUT8(status,4,0);
        VL_OUT8(down_valid,0,0);
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0053_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0064_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0078_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0082_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0084_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0099_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0128_;
        CData/*7:0*/ zvt_pe_mulbulk_fp_lane__DOT___0156_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0316_;
        CData/*7:0*/ zvt_pe_mulbulk_fp_lane__DOT___0320_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0331_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0333_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0365_;
        CData/*7:0*/ zvt_pe_mulbulk_fp_lane__DOT___0393_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0458_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0518_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0548_;
        CData/*7:0*/ zvt_pe_mulbulk_fp_lane__DOT___0556_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0562_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0577_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0583_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0585_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0587_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0596_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0601_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0613_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0615_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0626_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0627_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0703_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0714_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0729_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0731_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0736_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0750_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0760_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0761_;
        CData/*6:0*/ zvt_pe_mulbulk_fp_lane__DOT___0875_;
        CData/*5:0*/ zvt_pe_mulbulk_fp_lane__DOT___0894_;
        CData/*5:0*/ zvt_pe_mulbulk_fp_lane__DOT___0913_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___1173_;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d____Vhsh6018fakCbUKA15zExbOYgEB9QRbLR5vBB4g2EThM;
        CData/*1:0*/ zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b4__05d__02eenabled__02ecomponent_inf;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02epreround_sign;
        CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02eresult_round_bit;
        CData/*4:0*/ zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02estatus;
        CData/*4:0*/ __Vtrigprevexpr___TOP__zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02estatus__0;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*4:0*/ __Vtrigprevexpr___TOP__zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02estatus__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        CData/*0:0*/ __VactDidInit;
    };
    struct {
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ zvt_pe_mulbulk_fp_lane__DOT___0035_;
        SData/*8:0*/ zvt_pe_mulbulk_fp_lane__DOT___0311_;
        SData/*15:0*/ zvt_pe_mulbulk_fp_lane__DOT___0685_;
        SData/*13:0*/ zvt_pe_mulbulk_fp_lane__DOT___0914_;
        SData/*13:0*/ zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq;
        SData/*13:0*/ zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_11;
        VL_OUT(result,31,0);
        IData/*28:0*/ zvt_pe_mulbulk_fp_lane__DOT___0127_;
        IData/*27:0*/ zvt_pe_mulbulk_fp_lane__DOT___0129_;
        IData/*24:0*/ zvt_pe_mulbulk_fp_lane__DOT___0324_;
        IData/*31:0*/ zvt_pe_mulbulk_fp_lane__DOT___0346_;
        IData/*31:0*/ zvt_pe_mulbulk_fp_lane__DOT___0373_;
        IData/*31:0*/ zvt_pe_mulbulk_fp_lane__DOT___0377_;
        VlWide<3>/*75:0*/ zvt_pe_mulbulk_fp_lane__DOT___0557_;
        VlWide<6>/*163:0*/ zvt_pe_mulbulk_fp_lane__DOT___0915_;
        VlWide<6>/*163:0*/ zvt_pe_mulbulk_fp_lane__DOT___0916_;
        VlWide<6>/*163:0*/ zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq;
        VlWide<6>/*163:0*/ zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq;
        IData/*31:0*/ zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_5;
        IData/*31:0*/ zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_7;
        IData/*31:0*/ zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_22;
        IData/*31:0*/ zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_26;
        IData/*27:0*/ __Vtrigprevexpr___TOP__zvt_pe_mulbulk_fp_lane__DOT___0129___0;
        IData/*28:0*/ __Vtrigprevexpr___TOP__zvt_pe_mulbulk_fp_lane__DOT___0127___0;
        IData/*27:0*/ __Vtrigprevexpr___TOP__zvt_pe_mulbulk_fp_lane__DOT___0129___1;
        IData/*28:0*/ __Vtrigprevexpr___TOP__zvt_pe_mulbulk_fp_lane__DOT___0127___1;
        IData/*31:0*/ __VactIterCount;
        VL_IN64(operands,63,0);
        QData/*43:0*/ zvt_pe_mulbulk_fp_lane__DOT___0060_;
        QData/*47:0*/ zvt_pe_mulbulk_fp_lane__DOT___0529_;
        QData/*43:0*/ zvt_pe_mulbulk_fp_lane__DOT___0710_;
    };
    VlTriggerVec<4> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vzvt_pe_mulbulk_fp_lane__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vzvt_pe_mulbulk_fp_lane___024root(Vzvt_pe_mulbulk_fp_lane__Syms* symsp, const char* v__name);
    ~Vzvt_pe_mulbulk_fp_lane___024root();
    VL_UNCOPYABLE(Vzvt_pe_mulbulk_fp_lane___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
