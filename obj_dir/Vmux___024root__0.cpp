// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux.h for the primary calling header

#include "Vmux__pch.h"

VlCoroutine Vmux___024root___eval_initial__TOP__Vtiming__0(Vmux___024root* vlSelf);

void Vmux___024root___eval_initial(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_initial\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmux___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VlCoroutine Vmux___024root___eval_initial__TOP__Vtiming__0(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mux_tb__DOT__a = 1U;
    vlSelfRef.mux_tb__DOT__b = 2U;
    vlSelfRef.mux_tb__DOT__c = 4U;
    vlSelfRef.mux_tb__DOT__d = 8U;
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelfRef.mux_tb__DOT__sel = 0U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "mux_tb.v", 
                                         32);
    vlSelfRef.mux_tb__DOT__sel = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "mux_tb.v", 
                                         33);
    vlSelfRef.mux_tb__DOT__sel = 2U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "mux_tb.v", 
                                         34);
    vlSelfRef.mux_tb__DOT__sel = 3U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "mux_tb.v", 
                                         35);
    vlSelfRef.mux_tb__DOT__a = 0x0fU;
    vlSelfRef.mux_tb__DOT__b = 0x0aU;
    vlSelfRef.mux_tb__DOT__c = 5U;
    vlSelfRef.mux_tb__DOT__d = 0U;
    vlSelfRef.mux_tb__DOT__sel = 0U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "mux_tb.v", 
                                         43);
    vlSelfRef.mux_tb__DOT__sel = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "mux_tb.v", 
                                         44);
    vlSelfRef.mux_tb__DOT__sel = 2U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "mux_tb.v", 
                                         45);
    vlSelfRef.mux_tb__DOT__sel = 3U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "mux_tb.v", 
                                         46);
    VL_FINISH_MT("mux_tb.v", 49, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

void Vmux___024root___eval_triggers_vec__act(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_triggers_vec__act\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                       << 6U) 
                                                      | ((((IData)(vlSelfRef.mux_tb__DOT__sel) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__sel__0)) 
                                                          << 5U) 
                                                         | (((IData)(vlSelfRef.mux_tb__DOT__out) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__out__0)) 
                                                            << 4U))) 
                                                     | (((((IData)(vlSelfRef.mux_tb__DOT__d) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__d__0)) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.mux_tb__DOT__c) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__c__0)) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.mux_tb__DOT__b) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__b__0)) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.mux_tb__DOT__a) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__a__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__a__0 
        = vlSelfRef.mux_tb__DOT__a;
    vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__b__0 
        = vlSelfRef.mux_tb__DOT__b;
    vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__c__0 
        = vlSelfRef.mux_tb__DOT__c;
    vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__d__0 
        = vlSelfRef.mux_tb__DOT__d;
    vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__out__0 
        = vlSelfRef.mux_tb__DOT__out;
    vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__sel__0 
        = vlSelfRef.mux_tb__DOT__sel;
}

bool Vmux___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vmux___024root___act_sequent__TOP__0(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___act_sequent__TOP__0\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mux_tb__DOT__out = ((2U & (IData)(vlSelfRef.mux_tb__DOT__sel))
                                   ? ((1U & (IData)(vlSelfRef.mux_tb__DOT__sel))
                                       ? (IData)(vlSelfRef.mux_tb__DOT__d)
                                       : (IData)(vlSelfRef.mux_tb__DOT__c))
                                   : ((1U & (IData)(vlSelfRef.mux_tb__DOT__sel))
                                       ? (IData)(vlSelfRef.mux_tb__DOT__b)
                                       : (IData)(vlSelfRef.mux_tb__DOT__a)));
}

void Vmux___024root___eval_act(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_act\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000040ULL & vlSelfRef.__VactTriggered[0U])) {
        Vmux___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vmux___024root___nba_sequent__TOP__0(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___nba_sequent__TOP__0\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                      & (1U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
        VL_WRITEF_NX("Time=%0t sel=%b a=%b b=%b c=%b d=%b out=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,2,
                     (IData)(vlSelfRef.mux_tb__DOT__sel),
                     4,vlSelfRef.mux_tb__DOT__a,4,(IData)(vlSelfRef.mux_tb__DOT__b),
                     4,vlSelfRef.mux_tb__DOT__c,4,(IData)(vlSelfRef.mux_tb__DOT__d),
                     4,((2U & (IData)(vlSelfRef.mux_tb__DOT__sel))
                         ? ((1U & (IData)(vlSelfRef.mux_tb__DOT__sel))
                             ? (IData)(vlSelfRef.mux_tb__DOT__d)
                             : (IData)(vlSelfRef.mux_tb__DOT__c))
                         : ((1U & (IData)(vlSelfRef.mux_tb__DOT__sel))
                             ? (IData)(vlSelfRef.mux_tb__DOT__b)
                             : (IData)(vlSelfRef.mux_tb__DOT__a))));
    }
}

void Vmux___024root___eval_nba(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_nba\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x000000000000003fULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmux___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vmux___024root___timing_resume(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___timing_resume\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000040ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vmux___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vmux___024root___eval_phase__act(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_phase__act\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vmux___024root___eval_triggers_vec__act(vlSelf);
    Vmux___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmux___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vmux___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vmux___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vmux___024root___timing_resume(vlSelf);
        Vmux___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmux___024root___eval_phase__inact(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_phase__inact\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("mux_tb.v", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vmux___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vmux___024root___eval_phase__nba(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_phase__nba\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vmux___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vmux___024root___eval_nba(vlSelf);
        Vmux___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vmux___024root___eval(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vmux___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("mux_tb.v", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("mux_tb.v", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vmux___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("mux_tb.v", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vmux___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vmux___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vmux___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vmux___024root___eval_debug_assertions(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_debug_assertions\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
