// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestbench__Syms.h"


void VTestbench___024root__trace_chg_0_sub_0(VTestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTestbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_chg_0\n"); );
    // Init
    VTestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTestbench___024root*>(voidSelf);
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTestbench___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VTestbench___024root__trace_chg_0_sub_0(VTestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_chg_0_sub_0\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.Testbench__DOT__rstn));
        bufp->chgBit(oldp+1,(vlSelfRef.Testbench__DOT__high_rst));
        bufp->chgBit(oldp+2,(vlSelfRef.Testbench__DOT__low_co));
        bufp->chgIData(oldp+3,(vlSelfRef.Testbench__DOT__rstn),32);
        bufp->chgIData(oldp+4,(vlSelfRef.Testbench__DOT__high_rst),32);
        bufp->chgIData(oldp+5,(vlSelfRef.Testbench__DOT__low_co),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+6,(vlSelfRef.Testbench__DOT__co));
        bufp->chgCData(oldp+7,((((IData)(vlSelfRef.Testbench__DOT__cnt_24__DOT__high_bits) 
                                 << 4U) | (IData)(vlSelfRef.Testbench__DOT__cnt_24__DOT__low_bits))),8);
        bufp->chgBit(oldp+8,(vlSelfRef.Testbench__DOT__error));
        bufp->chgBit(oldp+9,((9U == (IData)(vlSelfRef.Testbench__DOT__cnt_24__DOT__low_bits))));
        bufp->chgCData(oldp+10,(vlSelfRef.Testbench__DOT__cnt_24__DOT__low_bits),4);
        bufp->chgCData(oldp+11,(vlSelfRef.Testbench__DOT__cnt_24__DOT__high_bits),4);
        bufp->chgBit(oldp+12,((9U == (IData)(vlSelfRef.Testbench__DOT__cnt_24__DOT__high_bits))));
        bufp->chgIData(oldp+13,(vlSelfRef.Testbench__DOT__co),32);
        bufp->chgIData(oldp+14,((((IData)(vlSelfRef.Testbench__DOT__cnt_24__DOT__high_bits) 
                                  << 4U) | (IData)(vlSelfRef.Testbench__DOT__cnt_24__DOT__low_bits))),32);
    }
    bufp->chgBit(oldp+15,(vlSelfRef.Testbench__DOT__clk));
    bufp->chgBit(oldp+16,(vlSelfRef.Testbench__DOT__cnt_24__DOT____Vcellinp__HIGH_CNT__high_rst));
}

void VTestbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_cleanup\n"); );
    // Init
    VTestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTestbench___024root*>(voidSelf);
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
