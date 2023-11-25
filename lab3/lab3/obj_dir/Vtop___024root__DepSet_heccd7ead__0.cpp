// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

extern const VlUnpacked<CData/*2:0*/, 1024> Vtop__ConstPool__TABLE_h4e4ee366_0;
extern const VlUnpacked<CData/*3:0*/, 1024> Vtop__ConstPool__TABLE_h97b0064a_0;

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vtableidx1;
    // Body
    vlSelf->top__DOT__Floating_Point_Unit__DOT__fraction_compare_module__DOT__subtract_fract 
        = (0x1fU & ((0xfU & vlSelf->SW) - (0xfU & (vlSelf->SW 
                                                   >> 8U))));
    vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire 
        = (0xfU & ((7U & (vlSelf->SW >> 4U)) - (7U 
                                                & (vlSelf->SW 
                                                   >> 0xcU))));
    if ((0U == VL_EXTENDS_II(32,4, (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire)))) {
        vlSelf->top__DOT__Floating_Point_Unit__DOT__small_A_wire 
            = VL_GTS_III(32, 0U, VL_EXTENDS_II(32,5, (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__fraction_compare_module__DOT__subtract_fract)));
        if (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,5, (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__fraction_compare_module__DOT__subtract_fract)))) {
            vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire 
                = (0xfU & vlSelf->SW);
            vlSelf->top__DOT__Floating_Point_Unit__DOT__sign_small_wire 
                = (1U & (vlSelf->SW >> 0xfU));
            vlSelf->top__DOT__Floating_Point_Unit__DOT__sign_big_wire 
                = (1U & (vlSelf->SW >> 7U));
        } else {
            vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire 
                = (0xfU & (vlSelf->SW >> 8U));
            vlSelf->top__DOT__Floating_Point_Unit__DOT__sign_small_wire 
                = (1U & (vlSelf->SW >> 7U));
            vlSelf->top__DOT__Floating_Point_Unit__DOT__sign_big_wire 
                = (1U & (vlSelf->SW >> 0xfU));
        }
    } else {
        vlSelf->top__DOT__Floating_Point_Unit__DOT__small_A_wire 
            = VL_GTES_III(32, 0U, VL_EXTENDS_II(32,4, (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire)));
        if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,4, (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire)))) {
            vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire 
                = (0xfU & vlSelf->SW);
            vlSelf->top__DOT__Floating_Point_Unit__DOT__sign_small_wire 
                = (1U & (vlSelf->SW >> 0xfU));
            vlSelf->top__DOT__Floating_Point_Unit__DOT__sign_big_wire 
                = (1U & (vlSelf->SW >> 7U));
        } else {
            vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire 
                = (0xfU & (vlSelf->SW >> 8U));
            vlSelf->top__DOT__Floating_Point_Unit__DOT__sign_small_wire 
                = (1U & (vlSelf->SW >> 7U));
            vlSelf->top__DOT__Floating_Point_Unit__DOT__sign_big_wire 
                = (1U & (vlSelf->SW >> 0xfU));
        }
    }
    vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire 
        = (0x3fU & ((0x20U | (0x1eU & (((0U == VL_EXTENDS_II(32,4, (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire)))
                                         ? (VL_LTES_III(32, 0U, 
                                                        VL_EXTENDS_II(32,5, (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__fraction_compare_module__DOT__subtract_fract)))
                                             ? (vlSelf->SW 
                                                >> 8U)
                                             : vlSelf->SW)
                                         : (VL_LTS_III(32, 0U, 
                                                       VL_EXTENDS_II(32,4, (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire)))
                                             ? (vlSelf->SW 
                                                >> 8U)
                                             : vlSelf->SW)) 
                                       << 1U))) >> 
                    (0xfU & ((8U & (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire))
                              ? ((IData)(1U) + (~ (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire)))
                              : (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire)))));
    if ((0x10000U & vlSelf->SW)) {
        if ((0x10000U & vlSelf->SW)) {
            vlSelf->top__DOT__Floating_Point_Unit__DOT____Vcellout__result_sign_module__result_sign 
                = (1U & ((0x80U & vlSelf->SW) ? ((~ 
                                                  (vlSelf->SW 
                                                   >> 0xfU)) 
                                                 | (~ (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__small_A_wire)))
                          : ((~ (vlSelf->SW >> 0xfU)) 
                             & (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__small_A_wire))));
        }
        if (vlSelf->top__DOT__Floating_Point_Unit__DOT__sign_big_wire) {
            if (vlSelf->top__DOT__Floating_Point_Unit__DOT__sign_small_wire) {
                vlSelf->top__DOT__Floating_Point_Unit__DOT__overflow_wire 
                    = (1U & (1U & (((0x20U | ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire) 
                                              << 1U)) 
                                    - (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire)) 
                                   >> 6U)));
                vlSelf->top__DOT__Floating_Point_Unit__DOT__result_wire 
                    = (0x3fU & ((0x20U | ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire) 
                                          << 1U)) - (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire)));
            } else {
                vlSelf->top__DOT__Floating_Point_Unit__DOT__overflow_wire 
                    = (1U & (1U & (((0x20U | ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire) 
                                              << 1U)) 
                                    + (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire)) 
                                   >> 6U)));
                vlSelf->top__DOT__Floating_Point_Unit__DOT__result_wire 
                    = (0x3fU & ((0x20U | ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire) 
                                          << 1U)) + (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire)));
            }
        } else if (vlSelf->top__DOT__Floating_Point_Unit__DOT__sign_small_wire) {
            vlSelf->top__DOT__Floating_Point_Unit__DOT__overflow_wire 
                = (1U & (1U & (((0x20U | ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire) 
                                          << 1U)) + (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire)) 
                               >> 6U)));
            vlSelf->top__DOT__Floating_Point_Unit__DOT__result_wire 
                = (0x3fU & ((0x20U | ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire) 
                                      << 1U)) + (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire)));
        } else {
            vlSelf->top__DOT__Floating_Point_Unit__DOT__overflow_wire 
                = (1U & (1U & (((0x20U | ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire) 
                                          << 1U)) - (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire)) 
                               >> 6U)));
            vlSelf->top__DOT__Floating_Point_Unit__DOT__result_wire 
                = (0x3fU & ((0x20U | ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire) 
                                      << 1U)) - (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire)));
        }
    } else {
        vlSelf->top__DOT__Floating_Point_Unit__DOT____Vcellout__result_sign_module__result_sign 
            = (1U & (((7U & (vlSelf->SW >> 0xcU)) > 
                      (7U & (vlSelf->SW >> 4U))) ? 
                     (vlSelf->SW >> 0xfU) : (((7U & 
                                               (vlSelf->SW 
                                                >> 4U)) 
                                              > (7U 
                                                 & (vlSelf->SW 
                                                    >> 0xcU)))
                                              ? (vlSelf->SW 
                                                 >> 7U)
                                              : (((0xfU 
                                                   & (vlSelf->SW 
                                                      >> 8U)) 
                                                  > 
                                                  (0xfU 
                                                   & vlSelf->SW))
                                                  ? 
                                                 (vlSelf->SW 
                                                  >> 0xfU)
                                                  : 
                                                 (vlSelf->SW 
                                                  >> 7U)))));
        if (vlSelf->top__DOT__Floating_Point_Unit__DOT__sign_big_wire) {
            if (vlSelf->top__DOT__Floating_Point_Unit__DOT__sign_small_wire) {
                vlSelf->top__DOT__Floating_Point_Unit__DOT__overflow_wire 
                    = (1U & (1U & (((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire) 
                                    + (0x20U | ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire) 
                                                << 1U))) 
                                   >> 6U)));
                vlSelf->top__DOT__Floating_Point_Unit__DOT__result_wire 
                    = (0x3fU & ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire) 
                                + (0x20U | ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire) 
                                            << 1U))));
            } else {
                vlSelf->top__DOT__Floating_Point_Unit__DOT__overflow_wire 
                    = (1U & (1U & (((0x20U | ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire) 
                                              << 1U)) 
                                    - (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire)) 
                                   >> 6U)));
                vlSelf->top__DOT__Floating_Point_Unit__DOT__result_wire 
                    = (0x3fU & ((0x20U | ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire) 
                                          << 1U)) - (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire)));
            }
        } else if (vlSelf->top__DOT__Floating_Point_Unit__DOT__sign_small_wire) {
            vlSelf->top__DOT__Floating_Point_Unit__DOT__overflow_wire 
                = (1U & (1U & (((0x20U | ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire) 
                                          << 1U)) - (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire)) 
                               >> 6U)));
            vlSelf->top__DOT__Floating_Point_Unit__DOT__result_wire 
                = (0x3fU & ((0x20U | ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire) 
                                      << 1U)) - (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire)));
        } else {
            vlSelf->top__DOT__Floating_Point_Unit__DOT__overflow_wire 
                = (1U & (1U & (((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire) 
                                + (0x20U | ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire) 
                                            << 1U))) 
                               >> 6U)));
            vlSelf->top__DOT__Floating_Point_Unit__DOT__result_wire 
                = (0x3fU & ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire) 
                            + (0x20U | ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire) 
                                        << 1U))));
        }
    }
    vlSelf->LEDR = (((0U == (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__result_wire)) 
                     << 0x11U) | (0x1ffffU & vlSelf->SW));
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__result_wire) 
                     << 4U) | ((0xeU & (((8U & (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire))
                                          ? (vlSelf->SW 
                                             >> 0xcU)
                                          : (vlSelf->SW 
                                             >> 4U)) 
                                        << 1U)) | (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__overflow_wire)));
    vlSelf->top__DOT__Floating_Point_Unit__DOT____Vcellout__normalize_module__result_exp 
        = Vtop__ConstPool__TABLE_h4e4ee366_0[__Vtableidx1];
    vlSelf->top__DOT__Floating_Point_Unit__DOT____Vcellout__normalize_module__result_fract 
        = Vtop__ConstPool__TABLE_h97b0064a_0[__Vtableidx1];
    vlSelf->LEDG = (((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT____Vcellout__result_sign_module__result_sign) 
                     << 7U) | (((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT____Vcellout__normalize_module__result_exp) 
                                << 4U) | (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT____Vcellout__normalize_module__result_fract)));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->SW & 0xfffc0000U))) {
        Verilated::overWidthError("SW");}
}
#endif  // VL_DEBUG
