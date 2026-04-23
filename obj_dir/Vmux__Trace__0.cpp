// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vmux__Syms.h"


void Vmux___024root__trace_chg_0_sub_0(Vmux___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmux___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root__trace_chg_0\n"); );
    // Body
    Vmux___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux___024root*>(voidSelf);
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vmux___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmux___024root__trace_chg_0_sub_0(Vmux___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root__trace_chg_0_sub_0\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgCData(oldp+0,(vlSelfRef.mux_tb__DOT__a),4);
        bufp->chgCData(oldp+1,(vlSelfRef.mux_tb__DOT__b),4);
        bufp->chgCData(oldp+2,(vlSelfRef.mux_tb__DOT__c),4);
        bufp->chgCData(oldp+3,(vlSelfRef.mux_tb__DOT__d),4);
        bufp->chgCData(oldp+4,(vlSelfRef.mux_tb__DOT__sel),2);
        bufp->chgCData(oldp+5,(((2U & (IData)(vlSelfRef.mux_tb__DOT__sel))
                                 ? ((1U & (IData)(vlSelfRef.mux_tb__DOT__sel))
                                     ? (IData)(vlSelfRef.mux_tb__DOT__d)
                                     : (IData)(vlSelfRef.mux_tb__DOT__c))
                                 : ((1U & (IData)(vlSelfRef.mux_tb__DOT__sel))
                                     ? (IData)(vlSelfRef.mux_tb__DOT__b)
                                     : (IData)(vlSelfRef.mux_tb__DOT__a)))),4);
    }
}

void Vmux___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root__trace_cleanup\n"); );
    // Body
    Vmux___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux___024root*>(voidSelf);
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
