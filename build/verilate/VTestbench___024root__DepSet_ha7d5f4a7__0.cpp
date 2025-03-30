// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench__Syms.h"
#include "VTestbench___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__act(VTestbench___024root* vlSelf);
#endif  // VL_DEBUG

void VTestbench___024root___eval_triggers__act(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_triggers__act\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((~ (IData)(vlSelfRef.Testbench__DOT__clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__clk__0)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.Testbench__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(2U, ((~ (IData)(vlSelfRef.Testbench__DOT__rstn)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__rstn__0)));
    vlSelfRef.__VactTriggered.set(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__clk__0 
        = vlSelfRef.Testbench__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__rstn__0 
        = vlSelfRef.Testbench__DOT__rstn;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTestbench___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VTestbench___024unit____Vdpiimwrap_cnt_judge_TOP____024unit(IData/*31:0*/ rstn, IData/*31:0*/ high_rst, IData/*31:0*/ low_co, IData/*31:0*/ co, IData/*31:0*/ cnt, IData/*31:0*/ base, IData/*31:0*/ init, IData/*31:0*/ &cnt_judge__Vfuncrtn);
extern const VlUnpacked<CData/*1:0*/, 128> VTestbench__ConstPool__TABLE_h6429b8e3_0;
extern const VlUnpacked<CData/*3:0*/, 128> VTestbench__ConstPool__TABLE_hd94a637b_0;
extern const VlUnpacked<CData/*0:0*/, 128> VTestbench__ConstPool__TABLE_h99570713_0;

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__3(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__3\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_cnt_judge__1__Vfuncout;
    __Vfunc_cnt_judge__1__Vfuncout = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if (vlSelfRef.Testbench__DOT__rstn) {
        vlSelfRef.Testbench__DOT__error = (1U != ([&]() {
                    VTestbench___024unit____Vdpiimwrap_cnt_judge_TOP____024unit(vlSelfRef.Testbench__DOT__rstn, (IData)(vlSelfRef.Testbench__DOT__high_rst), vlSelfRef.Testbench__DOT__low_co, (IData)(vlSelfRef.Testbench__DOT__cnt_24__DOT__global_temp_co), 
                                                                                (((IData)(vlSelfRef.Testbench__DOT__cnt_24__DOT__high_bits) 
                                                                                << 4U) 
                                                                                | (IData)(vlSelfRef.Testbench__DOT__cnt_24__DOT__low_bits)), 0x18U, 0x10U, __Vfunc_cnt_judge__1__Vfuncout);
                }(), __Vfunc_cnt_judge__1__Vfuncout));
    }
    __Vtableidx1 = (((IData)(vlSelfRef.Testbench__DOT__cnt_24__DOT__low_bits) 
                     << 3U) | (((IData)(vlSelfRef.Testbench__DOT__low_co) 
                                << 2U) | (((IData)(vlSelfRef.Testbench__DOT__high_rst) 
                                           << 1U) | (IData)(vlSelfRef.Testbench__DOT__rstn))));
    if ((1U & VTestbench__ConstPool__TABLE_h6429b8e3_0
         [__Vtableidx1])) {
        vlSelfRef.__Vdly__Testbench__DOT__cnt_24__DOT__low_bits 
            = VTestbench__ConstPool__TABLE_hd94a637b_0
            [__Vtableidx1];
    }
    if ((2U & VTestbench__ConstPool__TABLE_h6429b8e3_0
         [__Vtableidx1])) {
        vlSelfRef.Testbench__DOT__cnt_24__DOT__LOW_CNT__DOT__temp_co 
            = VTestbench__ConstPool__TABLE_h99570713_0
            [__Vtableidx1];
    }
    vlSelfRef.Testbench__DOT__cnt_24__DOT__global_temp_co 
        = ((IData)(vlSelfRef.Testbench__DOT__rstn) 
           && ((3U == ((IData)(1U) + (IData)(vlSelfRef.Testbench__DOT__cnt_24__DOT__low_bits))) 
               & (2U == (IData)(vlSelfRef.Testbench__DOT__cnt_24__DOT__high_bits))));
    vlSelfRef.Testbench__DOT__cnt_24__DOT__low_bits 
        = vlSelfRef.__Vdly__Testbench__DOT__cnt_24__DOT__low_bits;
}
