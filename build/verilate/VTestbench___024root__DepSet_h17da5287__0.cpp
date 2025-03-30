// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench___024root.h"

VL_ATTR_COLD void VTestbench___024root___eval_initial__TOP(VTestbench___024root* vlSelf);
VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__0(VTestbench___024root* vlSelf);
VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__1(VTestbench___024root* vlSelf);

void VTestbench___024root___eval_initial(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTestbench___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VTestbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VTestbench___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__clk__0 
        = vlSelfRef.Testbench__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__rstn__0 
        = vlSelfRef.Testbench__DOT__rstn;
}

VL_INLINE_OPT VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__0(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Testbench__DOT__clk = 0U;
    vlSelfRef.Testbench__DOT__rstn = 0U;
    vlSelfRef.Testbench__DOT__high_rst = 0U;
    vlSelfRef.Testbench__DOT__low_co = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "/mnt/d/sysI/sys1-sp25/src/lab3-2/../../repo/sys-project/lab3-2/sim/testbench.v", 
                                         18);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__rstn = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x9c40ULL, 
                                         nullptr, "/mnt/d/sysI/sys1-sp25/src/lab3-2/../../repo/sys-project/lab3-2/sim/testbench.v", 
                                         20);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("success!!!\n",0);
    VL_FINISH_MT("/mnt/d/sysI/sys1-sp25/src/lab3-2/../../repo/sys-project/lab3-2/sim/testbench.v", 22, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__1(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial__TOP__Vtiming__1\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0xc8ULL, 
                                             nullptr, 
                                             "/mnt/d/sysI/sys1-sp25/src/lab3-2/../../repo/sys-project/lab3-2/sim/testbench.v", 
                                             26);
        vlSelfRef.Testbench__DOT__clk = (1U & (~ (IData)(vlSelfRef.Testbench__DOT__clk)));
    }
}

void VTestbench___024root___act_sequent__TOP__0(VTestbench___024root* vlSelf);

void VTestbench___024root___eval_act(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_act\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VTestbench___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VTestbench___024root___act_sequent__TOP__0(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___act_sequent__TOP__0\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Testbench__DOT__cnt_24__DOT____Vcellinp__HIGH_CNT__high_rst 
        = ((IData)(vlSelfRef.Testbench__DOT__cnt_24__DOT__global_temp_co) 
           | (IData)(vlSelfRef.Testbench__DOT__high_rst));
}

void VTestbench___024root___nba_sequent__TOP__0(VTestbench___024root* vlSelf);
void VTestbench___024root___nba_sequent__TOP__1(VTestbench___024root* vlSelf);
void VTestbench___024root___nba_sequent__TOP__2(VTestbench___024root* vlSelf);
void VTestbench___024root___nba_sequent__TOP__3(VTestbench___024root* vlSelf);
void VTestbench___024root___nba_sequent__TOP__4(VTestbench___024root* vlSelf);

void VTestbench___024root___eval_nba(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_nba\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0xeULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__0(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__0\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__Testbench__DOT__cnt_24__DOT__low_bits 
        = vlSelfRef.Testbench__DOT__cnt_24__DOT__low_bits;
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__1(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__1\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.Testbench__DOT__error))) {
        VL_WRITEF_NX("fail!!!\n",0);
    }
}

extern const VlUnpacked<CData/*1:0*/, 128> VTestbench__ConstPool__TABLE_h6429b8e3_0;
extern const VlUnpacked<CData/*3:0*/, 128> VTestbench__ConstPool__TABLE_he92775c2_0;
extern const VlUnpacked<CData/*0:0*/, 128> VTestbench__ConstPool__TABLE_h99570713_0;

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__2(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__2\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__Vdly__Testbench__DOT__cnt_24__DOT__high_bits 
        = vlSelfRef.Testbench__DOT__cnt_24__DOT__high_bits;
    __Vtableidx1 = (((IData)(vlSelfRef.Testbench__DOT__cnt_24__DOT__high_bits) 
                     << 3U) | (((IData)(vlSelfRef.Testbench__DOT__cnt_24__DOT__LOW_CNT__DOT__temp_co) 
                                << 2U) | (((IData)(vlSelfRef.Testbench__DOT__cnt_24__DOT____Vcellinp__HIGH_CNT__high_rst) 
                                           << 1U) | (IData)(vlSelfRef.Testbench__DOT__rstn))));
    if ((1U & VTestbench__ConstPool__TABLE_h6429b8e3_0
         [__Vtableidx1])) {
        vlSelfRef.__Vdly__Testbench__DOT__cnt_24__DOT__high_bits 
            = VTestbench__ConstPool__TABLE_he92775c2_0
            [__Vtableidx1];
    }
    if ((2U & VTestbench__ConstPool__TABLE_h6429b8e3_0
         [__Vtableidx1])) {
        vlSelfRef.Testbench__DOT__cnt_24__DOT__HIGH_CNT__DOT__temp_co 
            = VTestbench__ConstPool__TABLE_h99570713_0
            [__Vtableidx1];
    }
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__4(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__4\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Testbench__DOT__cnt_24__DOT__high_bits 
        = vlSelfRef.__Vdly__Testbench__DOT__cnt_24__DOT__high_bits;
}

void VTestbench___024root___timing_resume(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___timing_resume\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VTestbench___024root___eval_triggers__act(VTestbench___024root* vlSelf);

bool VTestbench___024root___eval_phase__act(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_phase__act\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTestbench___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VTestbench___024root___timing_resume(vlSelf);
        VTestbench___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTestbench___024root___eval_phase__nba(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_phase__nba\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTestbench___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__nba(VTestbench___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__act(VTestbench___024root* vlSelf);
#endif  // VL_DEBUG

void VTestbench___024root___eval(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VTestbench___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/mnt/d/sysI/sys1-sp25/src/lab3-2/../../repo/sys-project/lab3-2/sim/testbench.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VTestbench___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/mnt/d/sysI/sys1-sp25/src/lab3-2/../../repo/sys-project/lab3-2/sim/testbench.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VTestbench___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VTestbench___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTestbench___024root___eval_debug_assertions(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_debug_assertions\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
