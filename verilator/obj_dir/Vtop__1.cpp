// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop::_sequent__TOP__12(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__12\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
        if (((0x36U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)) 
             | (0xcbU == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 7U;
        }
    }
    if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
        if ((1U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
        }
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
            = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__wait_n 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__wait_n;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) {
        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((0xf0U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA)) 
                           | (0xfU & ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))
                                       ? ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                                          >> 4U) : (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB))));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                        = (0xefU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                        = (0xfdU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xf7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                           | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                        = ((0x1fU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                           | ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                              | (((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                                  << 6U) | (0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)))));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfbU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                           | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) 
                                    << 2U)));
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((0xf0U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA)) 
                       | (0xfU & ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))
                                   ? ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                                      >> 4U) : (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB))));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = (0xefU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = (0xfdU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xf7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0x1fU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                          | (((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                              << 6U) | (0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)))));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfbU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) 
                                << 2U)));
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xefU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfeU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA;
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F))) {
                    if ((1U & ((9U < (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                               | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                  >> 4U)))) {
                        if ((5U < (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                                = (0xefU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
                        }
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                            = ((0x100U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)) 
                               | (0xffU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                           - (IData)(6U))));
                    }
                    if ((1U & ((0x99U < (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA)) 
                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                            = (0x1ffU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                         - (IData)(0x160U)));
                    }
                } else {
                    if ((1U & ((9U < (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                               | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                  >> 4U)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                            = ((0xefU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                               | ((9U < (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                                  << 4U));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                            = (0x1ffU & ((IData)(6U) 
                                         + (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
                    }
                    if ((1U & ((9U < (0x1fU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                               >> 4U))) 
                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                            = (0x1ffU & ((IData)(0x60U) 
                                         + (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
                    }
                }
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xf7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xdfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfeU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                   >> 8U))));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = (0xffU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0x3fU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)) 
                          | ((0U == (0xffU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                             << 6U)));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfbU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                                << 2U)));
            }
        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                = ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))
                    ? ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                       & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask)))
                    : ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                       | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask)));
        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                = ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask));
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0x7fU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | (0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
            if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = (0x40U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = (4U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = (0xbfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = (0xfbU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
            }
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = (0x10U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = (0xfdU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = (0xf7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = (0xdfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
            if ((6U != (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xf7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB)));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xdfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB)));
            }
        } else {
            if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                            = (0x7fU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                        >> 1U));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                            = ((0xfeU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                               | (1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA)));
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                            = (1U | (0xfeU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                              << 1U)));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                            = ((0xfeU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                               | (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                        >> 7U)));
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA)) 
                           | (0x7fU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                       >> 1U)));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfeU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                           | (1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA)));
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = (0xfeU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                    << 1U));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfeU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                           | (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                    >> 7U)));
                }
            } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((0x80U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                     << 7U)) | (0x7fU 
                                                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                                   >> 1U)));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfeU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                           | (1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA)));
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((0xfeU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                     << 1U)) | (1U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfeU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                           | (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                    >> 7U)));
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((0x80U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                 << 7U)) | (0x7fU & 
                                            ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                             >> 1U)));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfeU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA)));
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((0xfeU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                 << 1U)) | (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                                  >> 7U)));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfeU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                >> 7U)));
            }
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = (0xefU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = (0xfdU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0xf7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0x1fU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                      | (((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                          << 6U) | (0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)))));
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfbU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) 
                            << 2U)));
            if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfbU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0x3fU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0xc0U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)));
            }
        }
    } else {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
            = (0xfcU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfcU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                           | (2U | (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v)))));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xefU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                           | (0x10U & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v)) 
                                       << 4U)));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfbU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                           | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v) 
                              << 2U));
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                        = (0xefU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                       ^ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = (0xefU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                       & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = (0x10U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
            }
        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfcU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | (2U | (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v)))));
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0xefU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | (0x10U & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v)) 
                               << 4U)));
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfbU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v) 
                      << 2U));
        } else {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfeU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v));
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0xefU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v) 
                      << 4U));
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfbU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v) 
                      << 2U));
        }
        if ((7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0xf7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB)));
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0xdfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | (0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB)));
        } else {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0xf7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0xdfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | (0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
        }
        if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = (0x40U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
            if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Z16_r) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xbfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)));
            }
        } else {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = (0xbfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
        }
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
            = ((0x7fU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
               | (0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfbU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                           | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) 
                                    << 2U)));
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfbU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) 
                                << 2U)));
            }
        }
        if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16_r) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0x3fU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | (0xc0U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)));
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfbU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | (4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)));
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Q 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ts 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__tstate;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__AddrB 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBH 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB];
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBL 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB];
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mc 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__mcycle;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RRD 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RRD;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__RstP 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Acc 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RETN 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Save_ALU 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Reg 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_WZ 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__PreserveC 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BC 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BC;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BTR 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BTR;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RLD 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RLD;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ALU_Op 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Arith16 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Call 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__LDW 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BT 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BT;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_INRC 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_PC 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__LDZ 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__stop 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_DJNZ 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__no_read 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__write 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpE 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpE;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC16_B 
        = ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpE)
            ? ((0xff00U & ((- (IData)((1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__DI_Reg) 
                                             >> 7U)))) 
                           << 8U)) | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__DI_Reg))
            : ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BTR_r)
                ? 0xfffeU : 1U));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC16 
        = (0xffffU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC) 
                      + (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC16_B)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IORQ 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__iorq = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Jump 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycles 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusB_To 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusA_To 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_Addr_To 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NextIs_XY_Fetch 
        = (((0U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_State)) 
            & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_Ind))) 
           & (((2U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To)) 
               | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                  & (0xcbU == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
              | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                 & (0x36U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__TStates 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__last_tstate 
        = (1U & ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates))
                  ? (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate)
                  : ((1U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates))
                      ? ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                         >> 1U) : ((2U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates))
                                    ? ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                       >> 2U) : ((3U 
                                                  == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates))
                                                  ? 
                                                 ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                                  >> 3U)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates))
                                                   ? 
                                                  ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                                   >> 4U)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates))
                                                    ? 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                                    >> 5U)
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates)) 
                                                    & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                                       >> 6U)))))))));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IncDec_16 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16;
    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate))) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP16_A 
            = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusC;
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP16_B 
            = ((0xff00U & ((- (IData)((1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__DI_Reg) 
                                             >> 7U)))) 
                           << 8U)) | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__DI_Reg));
    } else {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP16_A 
            = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP;
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP16_B 
            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16))
                ? 0xffffU : 1U);
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP16 
        = (0xffffU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP16_A) 
                      + (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP16_B)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEH = 0U;
    if ((1U & (((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                  >> 1U) & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r))) 
                & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1))) 
               | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r) 
                  & (7U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r)))))) {
        if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                          >> 3U)))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                                  >> 1U)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEH 
                            = (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r)));
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEH 
                        = (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r)));
                }
            }
        }
    }
    if (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH) 
         & (IData)((0U != (0x18U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate)))))) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEH = 1U;
    }
    if ((1U & (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16) 
                >> 2U) & (((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                             >> 2U) & (IData)(vlTOPp->top__DOT__zx81a__DOT__nWAIT)) 
                           & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                          | (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                              >> 3U) & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))))) {
        if ((((0U == (3U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16))) 
              | (1U == (3U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16)))) 
             | (2U == (3U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16))))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEH = 1U;
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEL = 0U;
    if ((1U & (((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                  >> 1U) & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r))) 
                & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1))) 
               | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r) 
                  & (7U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r)))))) {
        if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                          >> 3U)))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                                  >> 1U)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEL 
                            = (1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r));
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEL 
                        = (1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r));
                }
            }
        }
    }
    if (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH) 
         & (IData)((0U != (0x18U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate)))))) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEL = 1U;
    }
    if ((1U & (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16) 
                >> 2U) & (((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                             >> 2U) & (IData)(vlTOPp->top__DOT__zx81a__DOT__nWAIT)) 
                           & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                          | (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                              >> 3U) & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))))) {
        if ((((0U == (3U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16))) 
              | (1U == (3U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16)))) 
             | (2U == (3U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16))))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEL = 1U;
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA 
        = (((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
              >> 2U) | ((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                          >> 3U) & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)) 
                        & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16) 
                           >> 2U))) & (0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_State)))
            ? (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Alternate) 
                << 2U) | (3U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16)))
            : (((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                  >> 2U) | ((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                              >> 3U) & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)) 
                            & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16) 
                               >> 2U))) & (2U == (3U 
                                                  & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16))))
                ? (3U | (4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_State) 
                               << 1U))) : (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH) 
                                            & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                               >> 3U))
                                            ? (2U | 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Alternate) 
                                                << 2U))
                                            : (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH) 
                                                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                                   >> 4U))
                                                ? (1U 
                                                   | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Alternate) 
                                                      << 2U))
                                                : (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA_r)))));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__F_Out 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Q;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_Mux 
        = ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp)
            ? (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB)
            : ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r)
                ? (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Q)
                : (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__DI_Reg)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOBH 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBH;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOBL 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBL;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusB 
        = (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBH) 
            << 8U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBL));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__NoRead 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__no_read;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Write 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__write;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__iorq;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__T_Res 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__last_tstate;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__WEH 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEH;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__WEL 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEL;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__AddrA 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAH 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA];
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAL 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA];
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOAH 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAH;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOAL 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAL;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA 
        = (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAH) 
            << 8U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAL));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ID16_B 
        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16))
            ? 0xffffU : 1U);
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ID16 
        = (0xffffU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA) 
                      + (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ID16_B)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegDIL 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_Mux;
    if (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH) 
         & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
            >> 3U))) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegDIL 
            = (0xffU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusB));
    } else if (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH) 
                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                   >> 4U))) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegDIL 
            = (0xffU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA_r));
    } else if ((1U & (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16) 
                       >> 2U) & ((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                   >> 2U) & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                                 | (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                     >> 3U) & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))))) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegDIL 
            = (0xffU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ID16));
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegDIH 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_Mux;
    if (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH) 
         & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
            >> 3U))) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegDIH 
            = (0xffU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusB) 
                        >> 8U));
    } else if (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH) 
                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                   >> 4U))) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegDIH 
            = (0xffU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA_r) 
                        >> 8U));
    } else if ((1U & (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16) 
                       >> 2U) & ((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                   >> 2U) & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                                 | (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                     >> 3U) & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))))) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegDIH 
            = (0xffU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ID16) 
                        >> 8U));
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DIL 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegDIL;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DIH 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegDIH;
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__4(vlSymsp);
    if (((IData)(vlTOPp->clk_48) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_48)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_48) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_48))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n)))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    if (((~ (IData)(vlTOPp->clk_48)) & (IData)(vlTOPp->__Vclklast__TOP__clk_48))) {
        vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    vlTOPp->_combo__TOP__8(vlSymsp);
    if (((IData)(vlTOPp->clk_48) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_48)))) {
        vlTOPp->_sequent__TOP__9(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_48) ^ (IData)(vlTOPp->__Vclklast__TOP__clk_48)) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n)))) {
        vlTOPp->_multiclk__TOP__10(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_48) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_48))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n)))) {
        vlTOPp->_sequent__TOP__11(vlSymsp);
        vlTOPp->_sequent__TOP__12(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk_48 = vlTOPp->clk_48;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n 
        = vlTOPp->__VinpClk__TOP__top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n;
    vlTOPp->__VinpClk__TOP__top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n 
        = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n;
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vtop::_change_request_1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request_1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n ^ vlTOPp->__Vchglast__TOP__top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n));
    VL_DEBUG_IF( if(__req && ((vlTOPp->top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n ^ vlTOPp->__Vchglast__TOP__top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n))) VL_DBG_MSGF("        CHANGE: ../rtl/TV80/tv80e.v:37: top.zx81a.__Vcellinp__cpu__reset_n\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n 
        = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n;
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_48 & 0xfeU))) {
        Verilated::overWidthError("clk_48");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((inputs & 0xf000U))) {
        Verilated::overWidthError("inputs");}
    if (VL_UNLIKELY((ioctl_download & 0xfeU))) {
        Verilated::overWidthError("ioctl_download");}
    if (VL_UNLIKELY((ioctl_upload & 0xfeU))) {
        Verilated::overWidthError("ioctl_upload");}
    if (VL_UNLIKELY((ioctl_wr & 0xfeU))) {
        Verilated::overWidthError("ioctl_wr");}
    if (VL_UNLIKELY((ioctl_addr & 0xfe000000U))) {
        Verilated::overWidthError("ioctl_addr");}
}
#endif  // VL_DEBUG
