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
    tracep->declBit(c+16,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+17,"SW",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    tracep->declBus(c+18,"LEDR",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    tracep->declBus(c+19,"LEDG",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+16,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+17,"SW",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    tracep->declBus(c+18,"LEDR",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    tracep->declBus(c+19,"LEDG",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->pushNamePrefix("Floating_Point_Unit ");
    tracep->declBus(c+20,"op_A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+21,"op_B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+22,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"zero_detect",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+19,"result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+2,"exp_diff_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,"final_exp_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+3,"bigger_fract_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+24,"smaller_fract_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+4,"small_A_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5,"sign_big_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+6,"sign_small_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+7,"shifted_fract_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+8,"result_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+9,"overflow_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("add_sub ");
    tracep->declBit(c+5,"sign_big",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"sign_small",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"bigger_fract",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+7,"smaller_fract",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+22,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+9,"overflow_flag",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+10,"bigger_fract_00",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exp_compare_module ");
    tracep->declBus(c+25,"exp_A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+26,"exp_B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+2,"exp_diff",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+23,"final_exp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fraction_compare_module ");
    tracep->declBit(c+27,"sign_A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"sign_B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+29,"fract_A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+30,"fract_B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+2,"exp_diff",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+3,"bigger_fract",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+24,"smaller_fract",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+5,"sign_big",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"sign_small",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"smaller_is_A",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+11,"subtract_fract",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("normalize_module ");
    tracep->declBus(c+8,"temp_fract",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+23,"final_exp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+9,"overflow_flag",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+12,"result_fract",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+13,"result_exp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_sign_module ");
    tracep->declBit(c+4,"smaller_is_A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+25,"exp_A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+26,"exp_B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+29,"fract_A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+30,"fract_B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+27,"sign_A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"sign_B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"result_sign",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift_right_module ");
    tracep->declBus(c+24,"smaller_fract",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+2,"exp_diff",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+7,"shifted_fract",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+15,"shift_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
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
    bufp->fullBit(oldp+1,((0U == (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__result_wire))));
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire),4);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire),4);
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__Floating_Point_Unit__DOT__small_A_wire));
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__Floating_Point_Unit__DOT__sign_big_wire));
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__Floating_Point_Unit__DOT__sign_small_wire));
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire),6);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__Floating_Point_Unit__DOT__result_wire),6);
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__Floating_Point_Unit__DOT__overflow_wire));
    bufp->fullCData(oldp+10,((0x20U | ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire) 
                                       << 1U))),6);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__Floating_Point_Unit__DOT__fraction_compare_module__DOT__subtract_fract),5);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__Floating_Point_Unit__DOT____Vcellout__normalize_module__result_fract),4);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__Floating_Point_Unit__DOT____Vcellout__normalize_module__result_exp),3);
    bufp->fullBit(oldp+14,(vlSelf->top__DOT__Floating_Point_Unit__DOT____Vcellout__result_sign_module__result_sign));
    bufp->fullCData(oldp+15,((0xfU & ((8U & (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire))
                                       ? ((IData)(1U) 
                                          + (~ (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire)))
                                       : (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire)))),4);
    bufp->fullBit(oldp+16,(vlSelf->clk_i));
    bufp->fullIData(oldp+17,(vlSelf->SW),18);
    bufp->fullIData(oldp+18,(vlSelf->LEDR),18);
    bufp->fullCData(oldp+19,(vlSelf->LEDG),8);
    bufp->fullCData(oldp+20,((0xffU & vlSelf->SW)),8);
    bufp->fullCData(oldp+21,((0xffU & (vlSelf->SW >> 8U))),8);
    bufp->fullBit(oldp+22,((1U & (vlSelf->SW >> 0x10U))));
    bufp->fullCData(oldp+23,((7U & ((8U & (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire))
                                     ? (vlSelf->SW 
                                        >> 0xcU) : 
                                    (vlSelf->SW >> 4U)))),3);
    bufp->fullCData(oldp+24,((0xfU & ((0U == VL_EXTENDS_II(32,4, (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire)))
                                       ? (VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,5, (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__fraction_compare_module__DOT__subtract_fract)))
                                           ? (vlSelf->SW 
                                              >> 8U)
                                           : vlSelf->SW)
                                       : (VL_LTS_III(32, 0U, 
                                                     VL_EXTENDS_II(32,4, (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire)))
                                           ? (vlSelf->SW 
                                              >> 8U)
                                           : vlSelf->SW)))),4);
    bufp->fullCData(oldp+25,((7U & (vlSelf->SW >> 4U))),3);
    bufp->fullCData(oldp+26,((7U & (vlSelf->SW >> 0xcU))),3);
    bufp->fullBit(oldp+27,((1U & (vlSelf->SW >> 7U))));
    bufp->fullBit(oldp+28,((1U & (vlSelf->SW >> 0xfU))));
    bufp->fullCData(oldp+29,((0xfU & vlSelf->SW)),4);
    bufp->fullCData(oldp+30,((0xfU & (vlSelf->SW >> 8U))),4);
}
