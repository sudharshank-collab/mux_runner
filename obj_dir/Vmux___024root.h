// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux.h for the primary calling header

#ifndef VERILATED_VMUX___024ROOT_H_
#define VERILATED_VMUX___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vmux___024unit;


class Vmux__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmux___024root final {
  public:
    // CELLS
    Vmux___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ mux_tb__DOT__a;
    CData/*3:0*/ mux_tb__DOT__b;
    CData/*3:0*/ mux_tb__DOT__c;
    CData/*3:0*/ mux_tb__DOT__d;
    CData/*1:0*/ mux_tb__DOT__sel;
    CData/*3:0*/ mux_tb__DOT__out;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*3:0*/ __Vtrigprevexpr___TOP__mux_tb__DOT__a__0;
    CData/*3:0*/ __Vtrigprevexpr___TOP__mux_tb__DOT__b__0;
    CData/*3:0*/ __Vtrigprevexpr___TOP__mux_tb__DOT__c__0;
    CData/*3:0*/ __Vtrigprevexpr___TOP__mux_tb__DOT__d__0;
    CData/*3:0*/ __Vtrigprevexpr___TOP__mux_tb__DOT__out__0;
    CData/*1:0*/ __Vtrigprevexpr___TOP__mux_tb__DOT__sel__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vmux__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vmux___024root(Vmux__Syms* symsp, const char* namep);
    ~Vmux___024root();
    VL_UNCOPYABLE(Vmux___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
