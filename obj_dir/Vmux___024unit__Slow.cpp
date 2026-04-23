// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux.h for the primary calling header

#include "Vmux__pch.h"

void Vmux___024unit___ctor_var_reset(Vmux___024unit* vlSelf);

Vmux___024unit::Vmux___024unit() = default;
Vmux___024unit::~Vmux___024unit() = default;

void Vmux___024unit::ctor(Vmux__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vmux___024unit___ctor_var_reset(this);
}

void Vmux___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vmux___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
