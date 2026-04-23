// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux.h for the primary calling header

#include "Vmux__pch.h"

VL_ATTR_COLD void Vmux___024unit___ctor_var_reset(Vmux___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vmux___024unit___ctor_var_reset\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__VmonitorNum = 0;
    vlSelf->__VmonitorOff = 0;
}
