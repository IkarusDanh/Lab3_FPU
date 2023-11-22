// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+14,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+15,"op_A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+16,"op_B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+17,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"zero_detect",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+19,"result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+14,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+15,"op_A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+16,"op_B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+17,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"zero_detect",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+19,"result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->pushNamePrefix("Floating_Point_Unit ");
    tracep->declBus(c+15,"op_A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+16,"op_B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+17,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"zero_detect",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+19,"result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1,"exp_diff_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+20,"final_exp_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+2,"bigger_fract_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+21,"smaller_fract_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+3,"small_A_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+4,"sign_big_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5,"sign_small_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+6,"shifted_fract_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+7,"result_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+22,"overflow_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("add_sub ");
    tracep->declBit(c+4,"sign_big",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"sign_small",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"bigger_fract",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+6,"smaller_fract",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+17,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+7,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+22,"overflow_flag",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8,"bigger_fract_00",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exp_compare_module ");
    tracep->declBus(c+23,"exp_A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+24,"exp_B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1,"exp_diff",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+20,"final_exp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fraction_compare_module ");
    tracep->declBit(c+25,"sign_A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"sign_B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+27,"fract_A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+28,"fract_B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1,"exp_diff",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+2,"bigger_fract",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+21,"smaller_fract",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+4,"sign_big",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"sign_small",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"smaller_is_A",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+9,"subtract_fract",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("normalize_module ");
    tracep->declBus(c+7,"temp_fract",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+20,"final_exp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+22,"overflow_flag",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+10,"result_fract",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+11,"result_exp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_sign_module ");
    tracep->declBit(c+3,"smaller_is_A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+23,"exp_A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+24,"exp_B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+27,"fract_A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+28,"fract_B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+25,"sign_A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"sign_B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+12,"result_sign",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift_right_module ");
    tracep->declBus(c+21,"smaller_fract",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1,"exp_diff",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+6,"shifted_fract",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+13,"shift_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire),4);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire),4);
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__Floating_Point_Unit__DOT__small_A_wire));
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__Floating_Point_Unit__DOT__sign_big_wire));
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__Floating_Point_Unit__DOT__sign_small_wire));
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire),6);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__Floating_Point_Unit__DOT__result_wire),6);
    bufp->fullCData(oldp+8,((0x20U | ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire) 
                                      << 1U))),6);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__Floating_Point_Unit__DOT__fraction_compare_module__DOT__subtract_fract),5);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__Floating_Point_Unit__DOT____Vcellout__normalize_module__result_fract),4);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__Floating_Point_Unit__DOT____Vcellout__normalize_module__result_exp),3);
    bufp->fullBit(oldp+12,(vlSelf->top__DOT__Floating_Point_Unit__DOT____Vcellout__result_sign_module__result_sign));
    bufp->fullCData(oldp+13,((0xfU & ((8U & (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire))
                                       ? ((IData)(1U) 
                                          + (~ (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire)))
                                       : (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire)))),4);
    bufp->fullBit(oldp+14,(vlSelf->clk_i));
    bufp->fullCData(oldp+15,(vlSelf->op_A),8);
    bufp->fullCData(oldp+16,(vlSelf->op_B),8);
    bufp->fullBit(oldp+17,(vlSelf->sel_i));
    bufp->fullBit(oldp+18,(vlSelf->zero_detect));
    bufp->fullCData(oldp+19,(vlSelf->result),8);
    bufp->fullCData(oldp+20,((7U & ((8U & (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire))
                                     ? ((IData)(vlSelf->op_B) 
                                        >> 4U) : ((IData)(vlSelf->op_A) 
                                                  >> 4U)))),3);
    bufp->fullCData(oldp+21,((0xfU & ((0U == VL_EXTENDS_II(32,4, (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire)))
                                       ? (VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__fraction_compare_module__DOT__subtract_fract)))
                                           ? (IData)(vlSelf->op_B)
                                           : (IData)(vlSelf->op_A))
                                       : (VL_LTS_III(32, 0U, 
                                                     VL_EXTENDS_II(32,4, (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire)))
                                           ? (IData)(vlSelf->op_B)
                                           : (IData)(vlSelf->op_A))))),4);
    bufp->fullBit(oldp+22,((1U & ((IData)(vlSelf->sel_i)
                                   ? (1U & (((0x20U 
                                              | ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire) 
                                                 << 1U)) 
                                             - (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire)) 
                                            >> 6U))
                                   : ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__sign_big_wire)
                                       ? ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__sign_small_wire)
                                           ? (1U & 
                                              (((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire) 
                                                + (0x20U 
                                                   | ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire) 
                                                      << 1U))) 
                                               >> 6U))
                                           : (1U & 
                                              (((0x20U 
                                                 | ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire) 
                                                    << 1U)) 
                                                - (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire)) 
                                               >> 6U)))
                                       : ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__sign_small_wire)
                                           ? (1U & 
                                              (((0x20U 
                                                 | ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire) 
                                                    << 1U)) 
                                                - (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire)) 
                                               >> 6U))
                                           : (1U & 
                                              (((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire) 
                                                + (0x20U 
                                                   | ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire) 
                                                      << 1U))) 
                                               >> 6U))))))));
    bufp->fullCData(oldp+23,((7U & ((IData)(vlSelf->op_A) 
                                    >> 4U))),3);
    bufp->fullCData(oldp+24,((7U & ((IData)(vlSelf->op_B) 
                                    >> 4U))),3);
    bufp->fullBit(oldp+25,((1U & ((IData)(vlSelf->op_A) 
                                  >> 7U))));
    bufp->fullBit(oldp+26,((1U & ((IData)(vlSelf->op_B) 
                                  >> 7U))));
    bufp->fullCData(oldp+27,((0xfU & (IData)(vlSelf->op_A))),4);
    bufp->fullCData(oldp+28,((0xfU & (IData)(vlSelf->op_B))),4);
}
