// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(op_A,7,0);
    VL_IN8(op_B,7,0);
    VL_IN8(sel_i,0,0);
    VL_OUT8(zero_detect,0,0);
    VL_OUT8(result,7,0);
    CData/*3:0*/ top__DOT__Floating_Point_Unit__DOT__exp_diff_wire;
    CData/*3:0*/ top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire;
    CData/*0:0*/ top__DOT__Floating_Point_Unit__DOT__small_A_wire;
    CData/*0:0*/ top__DOT__Floating_Point_Unit__DOT__sign_big_wire;
    CData/*0:0*/ top__DOT__Floating_Point_Unit__DOT__sign_small_wire;
    CData/*5:0*/ top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire;
    CData/*5:0*/ top__DOT__Floating_Point_Unit__DOT__result_wire;
    CData/*2:0*/ top__DOT__Floating_Point_Unit__DOT____Vcellout__normalize_module__result_exp;
    CData/*3:0*/ top__DOT__Floating_Point_Unit__DOT____Vcellout__normalize_module__result_fract;
    CData/*0:0*/ top__DOT__Floating_Point_Unit__DOT____Vcellout__result_sign_module__result_sign;
    CData/*4:0*/ top__DOT__Floating_Point_Unit__DOT__fraction_compare_module__DOT__subtract_fract;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
