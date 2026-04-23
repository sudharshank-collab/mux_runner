// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux.h for the primary calling header

#ifndef VERILATED_VMUX___024UNIT_H_
#define VERILATED_VMUX___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vmux__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmux___024unit final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vmux__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vmux___024unit();
    ~Vmux___024unit();
    void ctor(Vmux__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vmux___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
