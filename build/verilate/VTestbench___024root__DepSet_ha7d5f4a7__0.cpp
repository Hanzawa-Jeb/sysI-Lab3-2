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

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__2(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__2\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_cnt_judge__1__Vfuncout;
    __Vfunc_cnt_judge__1__Vfuncout = 0;
    // Body
    if (vlSelfRef.Testbench__DOT__rstn) {
        vlSelfRef.Testbench__DOT__error = (1U != ([&]() {
                    VTestbench___024unit____Vdpiimwrap_cnt_judge_TOP____024unit(vlSelfRef.Testbench__DOT__rstn, (IData)(vlSelfRef.Testbench__DOT__high_rst), vlSelfRef.Testbench__DOT__low_co, (IData)(vlSelfRef.Testbench__DOT__co), 
                                                                                (((IData)(vlSelfRef.Testbench__DOT__cnt_24__DOT__high_bits) 
                                                                                << 4U) 
                                                                                | (IData)(vlSelfRef.Testbench__DOT__cnt_24__DOT__low_bits)), 0x18U, 0x10U, __Vfunc_cnt_judge__1__Vfuncout);
                }(), __Vfunc_cnt_judge__1__Vfuncout));
    }
    vlSelfRef.Testbench__DOT__cnt_24__DOT__high_bits 
        = vlSelfRef.__Vdly__Testbench__DOT__cnt_24__DOT__high_bits;
    vlSelfRef.Testbench__DOT__cnt_24__DOT__low_bits 
        = vlSelfRef.__Vdly__Testbench__DOT__cnt_24__DOT__low_bits;
    vlSelfRef.Testbench__DOT__co = ((3U == (IData)(vlSelfRef.Testbench__DOT__cnt_24__DOT__low_bits)) 
                                    & (2U == (IData)(vlSelfRef.Testbench__DOT__cnt_24__DOT__high_bits)));
}
