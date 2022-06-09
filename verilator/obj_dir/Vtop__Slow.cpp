// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__Mode(0U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__T2Write(1U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__IOWait(1U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Mode(0U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IOWait(1U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Flag_C(0U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Flag_N(1U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Flag_P(2U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Flag_X(3U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Flag_H(4U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Flag_Y(5U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Flag_Z(6U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Flag_S(7U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__aNone(7U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__aBC(0U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__aDE(1U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__aXY(2U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__aIOA(4U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__aSP(5U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__aZI(6U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Mode(0U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_C(0U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_N(1U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_P(2U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_X(3U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_H(4U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_Y(5U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_Z(6U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_S(7U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__aNone(7U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__aBC(0U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__aDE(1U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__aXY(2U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__aIOA(4U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__aSP(5U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__aZI(6U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Mode(0U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_C(0U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_N(1U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_P(2U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_X(3U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_H(4U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_Y(5U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_Z(6U);
const IData Vtop::var_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_S(7U);
const IData Vtop::var_top__DOT__zx81a__DOT__ram__DOT__DATAWIDTH(8U);
const IData Vtop::var_top__DOT__zx81a__DOT__ram__DOT__ADDRWIDTH(0x10U);
const IData Vtop::var_top__DOT__zx81a__DOT__ram__DOT__NUMWORDS(0x3000U);
const IData Vtop::var_top__DOT__zx81a__DOT__ram__DOT__MEM_INIT_FILE(0xeU);
const IData Vtop::var_top__DOT__zx81a__DOT__rom__DOT__DATAWIDTH(8U);
const IData Vtop::var_top__DOT__zx81a__DOT__rom__DOT__ADDRWIDTH(0xeU);
const IData Vtop::var_top__DOT__zx81a__DOT__rom__DOT__NUMWORDS(0x3000U);
const IData Vtop::var_top__DOT__zx81a__DOT__chroma81__DOT__DATAWIDTH(8U);
const IData Vtop::var_top__DOT__zx81a__DOT__chroma81__DOT__ADDRWIDTH(0xeU);
const IData Vtop::var_top__DOT__zx81a__DOT__chroma81__DOT__NUMWORDS(0x3000U);
const IData Vtop::var_top__DOT__zx81a__DOT__chroma81__DOT__MEM_INIT_FILE(0xeU);
const IData Vtop::var_top__DOT__zx81a__DOT__qschrs__DOT__DATAWIDTH(8U);
const IData Vtop::var_top__DOT__zx81a__DOT__qschrs__DOT__ADDRWIDTH(0xaU);
const IData Vtop::var_top__DOT__zx81a__DOT__qschrs__DOT__NUMWORDS(0x3000U);
const IData Vtop::var_top__DOT__zx81a__DOT__qschrs__DOT__MEM_INIT_FILE(0xeU);

Vtop::Vtop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(_vcontextp__, this, name());
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-9);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

Vtop::~Vtop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

// Savable
void Vtop::__Vserialize(VerilatedSerialize& os) {
    vluint64_t __Vcheckval = 0x36dd51aa471d8eadULL;
    os << __Vcheckval;
    os << __VlSymsp->_vm_contextp__;
    os<<clk_48;
    os<<reset;
    os<<inputs;
    os<<VGA_R;
    os<<VGA_G;
    os<<VGA_B;
    os<<VGA_HS;
    os<<VGA_VS;
    os<<VGA_HB;
    os<<VGA_VB;
    os<<AUDIO_L;
    os<<AUDIO_R;
    os<<ioctl_download;
    os<<ioctl_upload;
    os<<ioctl_wr;
    os<<ioctl_addr;
    os<<ioctl_dout;
    os<<ioctl_din;
    os<<ioctl_index;
    os<<ioctl_wait;
    os<<ce_pix;
    os<<top__DOT__clk_48;
    os<<top__DOT__reset;
    os<<top__DOT__inputs;
    os<<top__DOT__VGA_R;
    os<<top__DOT__VGA_G;
    os<<top__DOT__VGA_B;
    os<<top__DOT__VGA_HS;
    os<<top__DOT__VGA_VS;
    os<<top__DOT__VGA_HB;
    os<<top__DOT__VGA_VB;
    os<<top__DOT__AUDIO_L;
    os<<top__DOT__AUDIO_R;
    os<<top__DOT__ioctl_download;
    os<<top__DOT__ioctl_upload;
    os<<top__DOT__ioctl_wr;
    os<<top__DOT__ioctl_addr;
    os<<top__DOT__ioctl_dout;
    os<<top__DOT__ioctl_din;
    os<<top__DOT__ioctl_index;
    os<<top__DOT__ioctl_wait;
    os<<top__DOT__ce_pix;
    os<<top__DOT__pause;
    os<<top__DOT__audio;
    os<<top__DOT__rgb;
    os<<top__DOT__led;
    os<<top__DOT__trakball;
    os<<top__DOT__joystick;
    os<<top__DOT__playerinput;
    os<<top__DOT__sw1;
    os<<top__DOT__sw2;
    os<<top__DOT____Vcellout__zx81a__audio_r;
    os<<top__DOT____Vcellout__zx81a__audio_l;
    os<<top__DOT____Vcellout__zx81a__mod;
    os<<top__DOT__audio_l;
    os<<top__DOT__audio_r;
    os<<top__DOT__jsel;
    os<<top__DOT__joystick_0;
    os<<top__DOT__joystick_1;
    os<<top__DOT__vcrop_en;
    os<<top__DOT__en216p;
    os<<top__DOT__slowmode;
    os<<top__DOT__FnReset;
    os<<top__DOT__hz50;
    os<<top__DOT__zx81;
    os<<top__DOT__ps2_key;
    os<<top__DOT__mod;
    os<<top__DOT__i;
    os<<top__DOT__r;
    os<<top__DOT__g;
    os<<top__DOT__b;
    os<<top__DOT__tape_in;
    os<<top__DOT__tape_ready;
    os<<top__DOT__zx81a__DOT__clk_sys;
    os<<top__DOT__zx81a__DOT__reset;
    os<<top__DOT__zx81a__DOT__locked;
    os<<top__DOT__zx81a__DOT__ioctl_wr;
    os<<top__DOT__zx81a__DOT__ioctl_addr;
    os<<top__DOT__zx81a__DOT__ioctl_dout;
    os<<top__DOT__zx81a__DOT__ioctl_download;
    os<<top__DOT__zx81a__DOT__ioctl_index;
    os<<top__DOT__zx81a__DOT__jsel;
    os<<top__DOT__zx81a__DOT__joystick_0;
    os<<top__DOT__zx81a__DOT__joystick_1;
    os<<top__DOT__zx81a__DOT__vcrop_en;
    os<<top__DOT__zx81a__DOT__en216p;
    os<<top__DOT__zx81a__DOT__mem_size;
    os<<top__DOT__zx81a__DOT__slowmode;
    os<<top__DOT__zx81a__DOT__FnReset;
    os<<top__DOT__zx81a__DOT__hz50;
    os<<top__DOT__zx81a__DOT__zx81;
    os<<top__DOT__zx81a__DOT__ps2_key;
    os<<top__DOT__zx81a__DOT__mod;
    os<<top__DOT__zx81a__DOT__status5;
    os<<top__DOT__zx81a__DOT__status6;
    os<<top__DOT__zx81a__DOT__status7;
    os<<top__DOT__zx81a__DOT__status14;
    os<<top__DOT__zx81a__DOT__status15;
    os<<top__DOT__zx81a__DOT__status16;
    os<<top__DOT__zx81a__DOT__status18;
    os<<top__DOT__zx81a__DOT__status19;
    os<<top__DOT__zx81a__DOT__status20;
    os<<top__DOT__zx81a__DOT__i;
    os<<top__DOT__zx81a__DOT__r;
    os<<top__DOT__zx81a__DOT__g;
    os<<top__DOT__zx81a__DOT__b;
    os<<top__DOT__zx81a__DOT__VSync;
    os<<top__DOT__zx81a__DOT__HSync;
    os<<top__DOT__zx81a__DOT__hblank;
    os<<top__DOT__zx81a__DOT__vblank;
    os<<top__DOT__zx81a__DOT__ce_pix;
    os<<top__DOT__zx81a__DOT__audio_l;
    os<<top__DOT__zx81a__DOT__audio_r;
    os<<top__DOT__zx81a__DOT__tape_in;
    os<<top__DOT__zx81a__DOT__tape_ready;
    os<<top__DOT__zx81a__DOT__ce_cpu_p;
    os<<top__DOT__zx81a__DOT__ce_cpu_n;
    os<<top__DOT__zx81a__DOT__ce_6m5;
    os<<top__DOT__zx81a__DOT__ce_3m25;
    os<<top__DOT__zx81a__DOT__ce_psg;
    os<<top__DOT__zx81a__DOT__addr;
    os<<top__DOT__zx81a__DOT__cpu_din;
    os<<top__DOT__zx81a__DOT__cpu_dout;
    os<<top__DOT__zx81a__DOT__nM1;
    os<<top__DOT__zx81a__DOT__nMREQ;
    os<<top__DOT__zx81a__DOT__nIORQ;
    os<<top__DOT__zx81a__DOT__nRD;
    os<<top__DOT__zx81a__DOT__nWR;
    os<<top__DOT__zx81a__DOT__nRFSH;
    os<<top__DOT__zx81a__DOT__nHALT;
    os<<top__DOT__zx81a__DOT__nINT;
    os<<top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n;
    os<<top__DOT__zx81a__DOT__io_dout;
    os<<top__DOT__zx81a__DOT__mem_out;
    os<<top__DOT__zx81a__DOT__low16k_e;
    os<<top__DOT__zx81a__DOT__ramLo_e;
    os<<top__DOT__zx81a__DOT__ramHi_e;
    os<<top__DOT__zx81a__DOT__ram_e;
    os<<top__DOT__zx81a__DOT__ram_a;
    os<<top__DOT__zx81a__DOT__ram_out;
    os<<top__DOT__zx81a__DOT____Vcellinp__ram__wren_a;
    os<<top__DOT__zx81a__DOT____Vcellinp__ram__data_a;
    os<<top__DOT__zx81a__DOT__rom_a;
    os<<top__DOT__zx81a__DOT__rom_e;
    os<<top__DOT__zx81a__DOT__rom_out;
    os<<top__DOT__zx81a__DOT____Vcellinp__rom__wren_b;
    os<<top__DOT__zx81a__DOT____Vcellinp__rom__address_a;
    os<<top__DOT__zx81a__DOT__tape_type;
    for (int __Vi0=0; __Vi0<16384; ++__Vi0) {
        os<<top__DOT__zx81a__DOT__tape_ram[__Vi0];
    }
    os<<top__DOT__zx81a__DOT__tapeloader;
    os<<top__DOT__zx81a__DOT__tapewrite_we;
    os<<top__DOT__zx81a__DOT__tape_addr;
    os<<top__DOT__zx81a__DOT__tape_size;
    os<<top__DOT__zx81a__DOT__tape_in_byte;
    os<<top__DOT__zx81a__DOT__tape_in_byte_r;
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        os<<top__DOT__zx81a__DOT__tape_loader_patch[__Vi0];
    }
    os<<top__DOT__zx81a__DOT__nopgen;
    os<<top__DOT__zx81a__DOT__data_latch_enable;
    os<<top__DOT__zx81a__DOT__ram_data_latch;
    os<<top__DOT__zx81a__DOT__nopgen_store;
    os<<top__DOT__zx81a__DOT__row_counter;
    os<<top__DOT__zx81a__DOT__shifter_start;
    os<<top__DOT__zx81a__DOT__shifter_reg;
    os<<top__DOT__zx81a__DOT__inverse;
    os<<top__DOT__zx81a__DOT__video_out;
    os<<top__DOT__zx81a__DOT__paper_reg;
    os<<top__DOT__zx81a__DOT__border;
    os<<top__DOT__zx81a__DOT__attr;
    os<<top__DOT__zx81a__DOT__attr_latch;
    os<<top__DOT__zx81a__DOT__shifter_en;
    os<<top__DOT__zx81a__DOT__vsync;
    os<<top__DOT__zx81a__DOT__vs;
    os<<top__DOT__zx81a__DOT__nWAIT;
    os<<top__DOT__zx81a__DOT__nNMI;
    os<<top__DOT__zx81a__DOT__slow_mode;
    os<<top__DOT__zx81a__DOT__sync_counter;
    os<<top__DOT__zx81a__DOT__NMIlatch;
    os<<top__DOT__zx81a__DOT__hsync;
    os<<top__DOT__zx81a__DOT__hsync2;
    os<<top__DOT__zx81a__DOT__vsync2;
    os<<top__DOT__zx81a__DOT__ch81_e;
    os<<top__DOT__zx81a__DOT__ch81_sel;
    os<<top__DOT__zx81a__DOT__ch81_dat;
    os<<top__DOT__zx81a__DOT__ch81_out;
    os<<top__DOT__zx81a__DOT____Vcellinp__chroma81__wren_b;
    os<<top__DOT__zx81a__DOT____Vcellinp__chroma81__wren_a;
    os<<top__DOT__zx81a__DOT____Vcellinp__chroma81__address_a;
    os<<top__DOT__zx81a__DOT__qs_e;
    os<<top__DOT__zx81a__DOT__qs_out;
    os<<top__DOT__zx81a__DOT____Vcellinp__qschrs__wren_b;
    os<<top__DOT__zx81a__DOT____Vcellinp__qschrs__wren_a;
    os<<top__DOT__zx81a__DOT____Vcellinp__qschrs__address_a;
    os<<top__DOT__zx81a__DOT__qs;
    os<<top__DOT__zx81a__DOT__psg_out;
    os<<top__DOT__zx81a__DOT__psg_sel;
    os<<top__DOT__zx81a__DOT__psg_ch_a;
    os<<top__DOT__zx81a__DOT__psg_ch_b;
    os<<top__DOT__zx81a__DOT__psg_ch_c;
    os<<top__DOT__zx81a__DOT__kbd_n;
    os<<top__DOT__zx81a__DOT__key_data;
    os<<top__DOT__zx81a__DOT__Fn;
    os<<top__DOT__zx81a__DOT__joy;
    os<<top__DOT__zx81a__DOT__joyzx;
    os<<top__DOT__zx81a__DOT__joys1;
    os<<top__DOT__zx81a__DOT__joyc1;
    os<<top__DOT__zx81a__DOT__joyc2;
    os<<top__DOT__zx81a__DOT__joy_kbd;
    os<<top__DOT__zx81a__DOT__zxp_out;
    os<<top__DOT__zx81a__DOT__zxp_use;
    os<<top__DOT__zx81a__DOT__zxp_sel;
    os<<top__DOT__zx81a__DOT__unnamedblk1__DOT__counter;
    os<<top__DOT__zx81a__DOT__unnamedblk1__DOT__turbo;
    os<<top__DOT__zx81a__DOT__unnamedblk2__DOT__old_download;
    os<<top__DOT__zx81a__DOT__unnamedblk3__DOT__old_nM1;
    os<<top__DOT__zx81a__DOT__unnamedblk4__DOT__old_hsync;
    os<<top__DOT__zx81a__DOT__unnamedblk4__DOT__old_hblank;
    os<<top__DOT__zx81a__DOT__unnamedblk4__DOT__old_shifter_start;
    os<<top__DOT__zx81a__DOT__unnamedblk5__DOT__fcnt;
    os<<top__DOT__zx81a__DOT__unnamedblk5__DOT__old_halt;
    os<<top__DOT__zx81a__DOT__unnamedblk5__DOT__old_latch;
    os<<top__DOT__zx81a__DOT__unnamedblk6__DOT__cnt;
    os<<top__DOT__zx81a__DOT__unnamedblk6__DOT__vreg;
    os<<top__DOT__zx81a__DOT__unnamedblk6__DOT__old_hsync;
    os<<top__DOT__zx81a__DOT__unnamedblk7__DOT__set_m0;
    os<<top__DOT__zx81a__DOT__unnamedblk7__DOT__old_tapeloader;
    os<<top__DOT__zx81a__DOT__unnamedblk8__DOT__qs_set;
    os<<top__DOT__zx81a__DOT__unnamedblk8__DOT__old_f1;
    os<<top__DOT__zx81a__DOT__unnamedblk8__DOT__old_tapeloader;
    os<<top__DOT__zx81a__DOT__cpu__DOT__reset_n;
    os<<top__DOT__zx81a__DOT__cpu__DOT__clk;
    os<<top__DOT__zx81a__DOT__cpu__DOT__cen;
    os<<top__DOT__zx81a__DOT__cpu__DOT__wait_n;
    os<<top__DOT__zx81a__DOT__cpu__DOT__int_n;
    os<<top__DOT__zx81a__DOT__cpu__DOT__nmi_n;
    os<<top__DOT__zx81a__DOT__cpu__DOT__busrq_n;
    os<<top__DOT__zx81a__DOT__cpu__DOT__m1_n;
    os<<top__DOT__zx81a__DOT__cpu__DOT__mreq_n;
    os<<top__DOT__zx81a__DOT__cpu__DOT__iorq_n;
    os<<top__DOT__zx81a__DOT__cpu__DOT__rd_n;
    os<<top__DOT__zx81a__DOT__cpu__DOT__wr_n;
    os<<top__DOT__zx81a__DOT__cpu__DOT__rfsh_n;
    os<<top__DOT__zx81a__DOT__cpu__DOT__halt_n;
    os<<top__DOT__zx81a__DOT__cpu__DOT__busak_n;
    os<<top__DOT__zx81a__DOT__cpu__DOT__A;
    os<<top__DOT__zx81a__DOT__cpu__DOT__di;
    os<<top__DOT__zx81a__DOT__cpu__DOT__dout;
    os<<top__DOT__zx81a__DOT__cpu__DOT__dir;
    os<<top__DOT__zx81a__DOT__cpu__DOT__dirset;
    os<<top__DOT__zx81a__DOT__cpu__DOT__intcycle_n;
    os<<top__DOT__zx81a__DOT__cpu__DOT__no_read;
    os<<top__DOT__zx81a__DOT__cpu__DOT__write;
    os<<top__DOT__zx81a__DOT__cpu__DOT__iorq;
    os<<top__DOT__zx81a__DOT__cpu__DOT__di_reg;
    os<<top__DOT__zx81a__DOT__cpu__DOT__mcycle;
    os<<top__DOT__zx81a__DOT__cpu__DOT__tstate;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__reset_n;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__clk;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__cen;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__wait_n;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__int_n;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__nmi_n;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__busrq_n;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__m1_n;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__no_read;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__write;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__rfsh_n;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__halt_n;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__busak_n;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__A;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__dinst;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__di;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__dout;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mc;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ts;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__intcycle_n;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__stop;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__dir;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__dirset;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ACC;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Ap;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Fp;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegDIH;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegDIL;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusB;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusC;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA_r;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB_r;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrC;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEH;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEL;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Alternate;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA_r;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ID16;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_Mux;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__last_mcycle;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__last_tstate;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF2;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Halt_FF;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusReq_s;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusAck;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ClkEn;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMI_s;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__INT_s;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IStatus;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__DI_Reg;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__T_Res;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_State;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Pre_XY_F_M;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NextIs_XY_Fetch;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_Ind;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__No_BTR;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BTR_r;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t2;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDecZ;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Q;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16_r;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Z16_r;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC_r;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Prefix;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpE;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpXY;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDSPHL;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeAF;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRS;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_CPL;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_CCF;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_SCF;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BT;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BC;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BTR;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RLD;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RRD;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SetDI;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SetEI;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IMode;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Halt;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC16;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC16_B;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP16;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP16_A;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP16_B;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ID16_B;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Oldnmi_n;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCL;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCH;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBL;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBH;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAL;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAH;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IR;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ISet;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycle;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__F;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__NMICycle;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IntCycle;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycles;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__TStates;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Prefix;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_PC;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_WZ;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IncDec_16;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Reg;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Acc;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusA_To;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusB_To;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ALU_Op;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Save_ALU;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__PreserveC;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Arith16;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_Addr_To;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IORQ;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Jump;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpE;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpXY;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Call;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__RstP;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__LDZ;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__LDW;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__LDSPHL;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Special_LD;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeDH;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRp;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeAF;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRS;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_DJNZ;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_CPL;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_CCF;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_SCF;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RETN;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BT;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BC;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BTR;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RLD;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RRD;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_INRC;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetDI;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetEI;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IMode;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Halt;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__NoRead;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Write;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Arith16;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Z16;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__ALU_Op;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__IR;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__ISet;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BusA;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BusB;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__F_In;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__F_Out;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__AddrC;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOBH;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__AddrA;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__AddrB;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DIH;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOAL;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOCL;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DIL;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOBL;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOCH;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOAH;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__clk;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__CEN;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__WEH;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__WEL;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DIRSET;
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH[__Vi0];
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL[__Vi0];
    }
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__B;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__C;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__D;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__E;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__H;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__L;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__IX;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__IY;
    os<<top__DOT__zx81a__DOT__ram__DOT__clock;
    os<<top__DOT__zx81a__DOT__ram__DOT__clocken0;
    os<<top__DOT__zx81a__DOT__ram__DOT__wren_a;
    os<<top__DOT__zx81a__DOT__ram__DOT__address_a;
    os<<top__DOT__zx81a__DOT__ram__DOT__data_a;
    os<<top__DOT__zx81a__DOT__ram__DOT__q_a;
    os<<top__DOT__zx81a__DOT__ram__DOT__clock1;
    os<<top__DOT__zx81a__DOT__ram__DOT__clocken1;
    os<<top__DOT__zx81a__DOT__ram__DOT__wren_b;
    os<<top__DOT__zx81a__DOT__ram__DOT__address_b;
    os<<top__DOT__zx81a__DOT__ram__DOT__data_b;
    os<<top__DOT__zx81a__DOT__ram__DOT__q_b;
    for (int __Vi0=0; __Vi0<65536; ++__Vi0) {
        os<<top__DOT__zx81a__DOT__ram__DOT__mem[__Vi0];
    }
    os<<top__DOT__zx81a__DOT__rom__DOT__clock;
    os<<top__DOT__zx81a__DOT__rom__DOT__clocken0;
    os<<top__DOT__zx81a__DOT__rom__DOT__wren_a;
    os<<top__DOT__zx81a__DOT__rom__DOT__address_a;
    os<<top__DOT__zx81a__DOT__rom__DOT__data_a;
    os<<top__DOT__zx81a__DOT__rom__DOT__q_a;
    os<<top__DOT__zx81a__DOT__rom__DOT__clock1;
    os<<top__DOT__zx81a__DOT__rom__DOT__clocken1;
    os<<top__DOT__zx81a__DOT__rom__DOT__wren_b;
    os<<top__DOT__zx81a__DOT__rom__DOT__address_b;
    os<<top__DOT__zx81a__DOT__rom__DOT__data_b;
    os<<top__DOT__zx81a__DOT__rom__DOT__q_b;
    for (int __Vi0=0; __Vi0<16384; ++__Vi0) {
        os<<top__DOT__zx81a__DOT__rom__DOT__mem[__Vi0];
    }
    os<<top__DOT__zx81a__DOT__chroma81__DOT__clock;
    os<<top__DOT__zx81a__DOT__chroma81__DOT__clocken0;
    os<<top__DOT__zx81a__DOT__chroma81__DOT__wren_a;
    os<<top__DOT__zx81a__DOT__chroma81__DOT__address_a;
    os<<top__DOT__zx81a__DOT__chroma81__DOT__data_a;
    os<<top__DOT__zx81a__DOT__chroma81__DOT__q_a;
    os<<top__DOT__zx81a__DOT__chroma81__DOT__clock1;
    os<<top__DOT__zx81a__DOT__chroma81__DOT__clocken1;
    os<<top__DOT__zx81a__DOT__chroma81__DOT__wren_b;
    os<<top__DOT__zx81a__DOT__chroma81__DOT__address_b;
    os<<top__DOT__zx81a__DOT__chroma81__DOT__data_b;
    os<<top__DOT__zx81a__DOT__chroma81__DOT__q_b;
    for (int __Vi0=0; __Vi0<16384; ++__Vi0) {
        os<<top__DOT__zx81a__DOT__chroma81__DOT__mem[__Vi0];
    }
    os<<top__DOT__zx81a__DOT__qschrs__DOT__clock;
    os<<top__DOT__zx81a__DOT__qschrs__DOT__clocken0;
    os<<top__DOT__zx81a__DOT__qschrs__DOT__wren_a;
    os<<top__DOT__zx81a__DOT__qschrs__DOT__address_a;
    os<<top__DOT__zx81a__DOT__qschrs__DOT__data_a;
    os<<top__DOT__zx81a__DOT__qschrs__DOT__q_a;
    os<<top__DOT__zx81a__DOT__qschrs__DOT__clock1;
    os<<top__DOT__zx81a__DOT__qschrs__DOT__clocken1;
    os<<top__DOT__zx81a__DOT__qschrs__DOT__wren_b;
    os<<top__DOT__zx81a__DOT__qschrs__DOT__address_b;
    os<<top__DOT__zx81a__DOT__qschrs__DOT__data_b;
    os<<top__DOT__zx81a__DOT__qschrs__DOT__q_b;
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        os<<top__DOT__zx81a__DOT__qschrs__DOT__mem[__Vi0];
    }
    os<<top__DOT__zx81a__DOT__kbd__DOT__reset;
    os<<top__DOT__zx81a__DOT__kbd__DOT__clk_sys;
    os<<top__DOT__zx81a__DOT__kbd__DOT__ps2_key;
    os<<top__DOT__zx81a__DOT__kbd__DOT__addr;
    os<<top__DOT__zx81a__DOT__kbd__DOT__key_data;
    os<<top__DOT__zx81a__DOT__kbd__DOT__Fn;
    os<<top__DOT__zx81a__DOT__kbd__DOT__mod;
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        os<<top__DOT__zx81a__DOT__kbd__DOT__keys[__Vi0];
    }
    os<<top__DOT__zx81a__DOT__kbd__DOT__release_btn;
    os<<top__DOT__zx81a__DOT__kbd__DOT__code;
    os<<top__DOT__zx81a__DOT__kbd__DOT__input_strobe;
    os<<top__DOT__zx81a__DOT__kbd__DOT__shift;
    os<<top__DOT__zx81a__DOT__kbd__DOT__unnamedblk1__DOT__old_reset;
    os<<top__DOT__zx81a__DOT__kbd__DOT__unnamedblk2__DOT__old_state;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__A;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Sub;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Carry_In;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__A;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Sub;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Carry_In;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__A;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Sub;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Carry_In;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In;
    os<<__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC;
    os<<__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r;
    os<<__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ACC;
    os<<__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
    os<<__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP;
    os<<__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate;
    os<<__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle;
    os<<__VinpClk__TOP__top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n;
    os<<__Vclklast__TOP__clk_48;
    os<<__Vclklast__TOP____VinpClk__TOP__top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n;
    os<<__Vchglast__TOP__top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        os<<__Vm_traceActivity[__Vi0];
    }
    __VlSymsp->__Vserialize(os);
}
void Vtop::__Vdeserialize(VerilatedDeserialize& os) {
    vluint64_t __Vcheckval = 0x36dd51aa471d8eadULL;
    os.readAssert(__Vcheckval);
    os >> __VlSymsp->_vm_contextp__;
    os>>clk_48;
    os>>reset;
    os>>inputs;
    os>>VGA_R;
    os>>VGA_G;
    os>>VGA_B;
    os>>VGA_HS;
    os>>VGA_VS;
    os>>VGA_HB;
    os>>VGA_VB;
    os>>AUDIO_L;
    os>>AUDIO_R;
    os>>ioctl_download;
    os>>ioctl_upload;
    os>>ioctl_wr;
    os>>ioctl_addr;
    os>>ioctl_dout;
    os>>ioctl_din;
    os>>ioctl_index;
    os>>ioctl_wait;
    os>>ce_pix;
    os>>top__DOT__clk_48;
    os>>top__DOT__reset;
    os>>top__DOT__inputs;
    os>>top__DOT__VGA_R;
    os>>top__DOT__VGA_G;
    os>>top__DOT__VGA_B;
    os>>top__DOT__VGA_HS;
    os>>top__DOT__VGA_VS;
    os>>top__DOT__VGA_HB;
    os>>top__DOT__VGA_VB;
    os>>top__DOT__AUDIO_L;
    os>>top__DOT__AUDIO_R;
    os>>top__DOT__ioctl_download;
    os>>top__DOT__ioctl_upload;
    os>>top__DOT__ioctl_wr;
    os>>top__DOT__ioctl_addr;
    os>>top__DOT__ioctl_dout;
    os>>top__DOT__ioctl_din;
    os>>top__DOT__ioctl_index;
    os>>top__DOT__ioctl_wait;
    os>>top__DOT__ce_pix;
    os>>top__DOT__pause;
    os>>top__DOT__audio;
    os>>top__DOT__rgb;
    os>>top__DOT__led;
    os>>top__DOT__trakball;
    os>>top__DOT__joystick;
    os>>top__DOT__playerinput;
    os>>top__DOT__sw1;
    os>>top__DOT__sw2;
    os>>top__DOT____Vcellout__zx81a__audio_r;
    os>>top__DOT____Vcellout__zx81a__audio_l;
    os>>top__DOT____Vcellout__zx81a__mod;
    os>>top__DOT__audio_l;
    os>>top__DOT__audio_r;
    os>>top__DOT__jsel;
    os>>top__DOT__joystick_0;
    os>>top__DOT__joystick_1;
    os>>top__DOT__vcrop_en;
    os>>top__DOT__en216p;
    os>>top__DOT__slowmode;
    os>>top__DOT__FnReset;
    os>>top__DOT__hz50;
    os>>top__DOT__zx81;
    os>>top__DOT__ps2_key;
    os>>top__DOT__mod;
    os>>top__DOT__i;
    os>>top__DOT__r;
    os>>top__DOT__g;
    os>>top__DOT__b;
    os>>top__DOT__tape_in;
    os>>top__DOT__tape_ready;
    os>>top__DOT__zx81a__DOT__clk_sys;
    os>>top__DOT__zx81a__DOT__reset;
    os>>top__DOT__zx81a__DOT__locked;
    os>>top__DOT__zx81a__DOT__ioctl_wr;
    os>>top__DOT__zx81a__DOT__ioctl_addr;
    os>>top__DOT__zx81a__DOT__ioctl_dout;
    os>>top__DOT__zx81a__DOT__ioctl_download;
    os>>top__DOT__zx81a__DOT__ioctl_index;
    os>>top__DOT__zx81a__DOT__jsel;
    os>>top__DOT__zx81a__DOT__joystick_0;
    os>>top__DOT__zx81a__DOT__joystick_1;
    os>>top__DOT__zx81a__DOT__vcrop_en;
    os>>top__DOT__zx81a__DOT__en216p;
    os>>top__DOT__zx81a__DOT__mem_size;
    os>>top__DOT__zx81a__DOT__slowmode;
    os>>top__DOT__zx81a__DOT__FnReset;
    os>>top__DOT__zx81a__DOT__hz50;
    os>>top__DOT__zx81a__DOT__zx81;
    os>>top__DOT__zx81a__DOT__ps2_key;
    os>>top__DOT__zx81a__DOT__mod;
    os>>top__DOT__zx81a__DOT__status5;
    os>>top__DOT__zx81a__DOT__status6;
    os>>top__DOT__zx81a__DOT__status7;
    os>>top__DOT__zx81a__DOT__status14;
    os>>top__DOT__zx81a__DOT__status15;
    os>>top__DOT__zx81a__DOT__status16;
    os>>top__DOT__zx81a__DOT__status18;
    os>>top__DOT__zx81a__DOT__status19;
    os>>top__DOT__zx81a__DOT__status20;
    os>>top__DOT__zx81a__DOT__i;
    os>>top__DOT__zx81a__DOT__r;
    os>>top__DOT__zx81a__DOT__g;
    os>>top__DOT__zx81a__DOT__b;
    os>>top__DOT__zx81a__DOT__VSync;
    os>>top__DOT__zx81a__DOT__HSync;
    os>>top__DOT__zx81a__DOT__hblank;
    os>>top__DOT__zx81a__DOT__vblank;
    os>>top__DOT__zx81a__DOT__ce_pix;
    os>>top__DOT__zx81a__DOT__audio_l;
    os>>top__DOT__zx81a__DOT__audio_r;
    os>>top__DOT__zx81a__DOT__tape_in;
    os>>top__DOT__zx81a__DOT__tape_ready;
    os>>top__DOT__zx81a__DOT__ce_cpu_p;
    os>>top__DOT__zx81a__DOT__ce_cpu_n;
    os>>top__DOT__zx81a__DOT__ce_6m5;
    os>>top__DOT__zx81a__DOT__ce_3m25;
    os>>top__DOT__zx81a__DOT__ce_psg;
    os>>top__DOT__zx81a__DOT__addr;
    os>>top__DOT__zx81a__DOT__cpu_din;
    os>>top__DOT__zx81a__DOT__cpu_dout;
    os>>top__DOT__zx81a__DOT__nM1;
    os>>top__DOT__zx81a__DOT__nMREQ;
    os>>top__DOT__zx81a__DOT__nIORQ;
    os>>top__DOT__zx81a__DOT__nRD;
    os>>top__DOT__zx81a__DOT__nWR;
    os>>top__DOT__zx81a__DOT__nRFSH;
    os>>top__DOT__zx81a__DOT__nHALT;
    os>>top__DOT__zx81a__DOT__nINT;
    os>>top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n;
    os>>top__DOT__zx81a__DOT__io_dout;
    os>>top__DOT__zx81a__DOT__mem_out;
    os>>top__DOT__zx81a__DOT__low16k_e;
    os>>top__DOT__zx81a__DOT__ramLo_e;
    os>>top__DOT__zx81a__DOT__ramHi_e;
    os>>top__DOT__zx81a__DOT__ram_e;
    os>>top__DOT__zx81a__DOT__ram_a;
    os>>top__DOT__zx81a__DOT__ram_out;
    os>>top__DOT__zx81a__DOT____Vcellinp__ram__wren_a;
    os>>top__DOT__zx81a__DOT____Vcellinp__ram__data_a;
    os>>top__DOT__zx81a__DOT__rom_a;
    os>>top__DOT__zx81a__DOT__rom_e;
    os>>top__DOT__zx81a__DOT__rom_out;
    os>>top__DOT__zx81a__DOT____Vcellinp__rom__wren_b;
    os>>top__DOT__zx81a__DOT____Vcellinp__rom__address_a;
    os>>top__DOT__zx81a__DOT__tape_type;
    for (int __Vi0=0; __Vi0<16384; ++__Vi0) {
        os>>top__DOT__zx81a__DOT__tape_ram[__Vi0];
    }
    os>>top__DOT__zx81a__DOT__tapeloader;
    os>>top__DOT__zx81a__DOT__tapewrite_we;
    os>>top__DOT__zx81a__DOT__tape_addr;
    os>>top__DOT__zx81a__DOT__tape_size;
    os>>top__DOT__zx81a__DOT__tape_in_byte;
    os>>top__DOT__zx81a__DOT__tape_in_byte_r;
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        os>>top__DOT__zx81a__DOT__tape_loader_patch[__Vi0];
    }
    os>>top__DOT__zx81a__DOT__nopgen;
    os>>top__DOT__zx81a__DOT__data_latch_enable;
    os>>top__DOT__zx81a__DOT__ram_data_latch;
    os>>top__DOT__zx81a__DOT__nopgen_store;
    os>>top__DOT__zx81a__DOT__row_counter;
    os>>top__DOT__zx81a__DOT__shifter_start;
    os>>top__DOT__zx81a__DOT__shifter_reg;
    os>>top__DOT__zx81a__DOT__inverse;
    os>>top__DOT__zx81a__DOT__video_out;
    os>>top__DOT__zx81a__DOT__paper_reg;
    os>>top__DOT__zx81a__DOT__border;
    os>>top__DOT__zx81a__DOT__attr;
    os>>top__DOT__zx81a__DOT__attr_latch;
    os>>top__DOT__zx81a__DOT__shifter_en;
    os>>top__DOT__zx81a__DOT__vsync;
    os>>top__DOT__zx81a__DOT__vs;
    os>>top__DOT__zx81a__DOT__nWAIT;
    os>>top__DOT__zx81a__DOT__nNMI;
    os>>top__DOT__zx81a__DOT__slow_mode;
    os>>top__DOT__zx81a__DOT__sync_counter;
    os>>top__DOT__zx81a__DOT__NMIlatch;
    os>>top__DOT__zx81a__DOT__hsync;
    os>>top__DOT__zx81a__DOT__hsync2;
    os>>top__DOT__zx81a__DOT__vsync2;
    os>>top__DOT__zx81a__DOT__ch81_e;
    os>>top__DOT__zx81a__DOT__ch81_sel;
    os>>top__DOT__zx81a__DOT__ch81_dat;
    os>>top__DOT__zx81a__DOT__ch81_out;
    os>>top__DOT__zx81a__DOT____Vcellinp__chroma81__wren_b;
    os>>top__DOT__zx81a__DOT____Vcellinp__chroma81__wren_a;
    os>>top__DOT__zx81a__DOT____Vcellinp__chroma81__address_a;
    os>>top__DOT__zx81a__DOT__qs_e;
    os>>top__DOT__zx81a__DOT__qs_out;
    os>>top__DOT__zx81a__DOT____Vcellinp__qschrs__wren_b;
    os>>top__DOT__zx81a__DOT____Vcellinp__qschrs__wren_a;
    os>>top__DOT__zx81a__DOT____Vcellinp__qschrs__address_a;
    os>>top__DOT__zx81a__DOT__qs;
    os>>top__DOT__zx81a__DOT__psg_out;
    os>>top__DOT__zx81a__DOT__psg_sel;
    os>>top__DOT__zx81a__DOT__psg_ch_a;
    os>>top__DOT__zx81a__DOT__psg_ch_b;
    os>>top__DOT__zx81a__DOT__psg_ch_c;
    os>>top__DOT__zx81a__DOT__kbd_n;
    os>>top__DOT__zx81a__DOT__key_data;
    os>>top__DOT__zx81a__DOT__Fn;
    os>>top__DOT__zx81a__DOT__joy;
    os>>top__DOT__zx81a__DOT__joyzx;
    os>>top__DOT__zx81a__DOT__joys1;
    os>>top__DOT__zx81a__DOT__joyc1;
    os>>top__DOT__zx81a__DOT__joyc2;
    os>>top__DOT__zx81a__DOT__joy_kbd;
    os>>top__DOT__zx81a__DOT__zxp_out;
    os>>top__DOT__zx81a__DOT__zxp_use;
    os>>top__DOT__zx81a__DOT__zxp_sel;
    os>>top__DOT__zx81a__DOT__unnamedblk1__DOT__counter;
    os>>top__DOT__zx81a__DOT__unnamedblk1__DOT__turbo;
    os>>top__DOT__zx81a__DOT__unnamedblk2__DOT__old_download;
    os>>top__DOT__zx81a__DOT__unnamedblk3__DOT__old_nM1;
    os>>top__DOT__zx81a__DOT__unnamedblk4__DOT__old_hsync;
    os>>top__DOT__zx81a__DOT__unnamedblk4__DOT__old_hblank;
    os>>top__DOT__zx81a__DOT__unnamedblk4__DOT__old_shifter_start;
    os>>top__DOT__zx81a__DOT__unnamedblk5__DOT__fcnt;
    os>>top__DOT__zx81a__DOT__unnamedblk5__DOT__old_halt;
    os>>top__DOT__zx81a__DOT__unnamedblk5__DOT__old_latch;
    os>>top__DOT__zx81a__DOT__unnamedblk6__DOT__cnt;
    os>>top__DOT__zx81a__DOT__unnamedblk6__DOT__vreg;
    os>>top__DOT__zx81a__DOT__unnamedblk6__DOT__old_hsync;
    os>>top__DOT__zx81a__DOT__unnamedblk7__DOT__set_m0;
    os>>top__DOT__zx81a__DOT__unnamedblk7__DOT__old_tapeloader;
    os>>top__DOT__zx81a__DOT__unnamedblk8__DOT__qs_set;
    os>>top__DOT__zx81a__DOT__unnamedblk8__DOT__old_f1;
    os>>top__DOT__zx81a__DOT__unnamedblk8__DOT__old_tapeloader;
    os>>top__DOT__zx81a__DOT__cpu__DOT__reset_n;
    os>>top__DOT__zx81a__DOT__cpu__DOT__clk;
    os>>top__DOT__zx81a__DOT__cpu__DOT__cen;
    os>>top__DOT__zx81a__DOT__cpu__DOT__wait_n;
    os>>top__DOT__zx81a__DOT__cpu__DOT__int_n;
    os>>top__DOT__zx81a__DOT__cpu__DOT__nmi_n;
    os>>top__DOT__zx81a__DOT__cpu__DOT__busrq_n;
    os>>top__DOT__zx81a__DOT__cpu__DOT__m1_n;
    os>>top__DOT__zx81a__DOT__cpu__DOT__mreq_n;
    os>>top__DOT__zx81a__DOT__cpu__DOT__iorq_n;
    os>>top__DOT__zx81a__DOT__cpu__DOT__rd_n;
    os>>top__DOT__zx81a__DOT__cpu__DOT__wr_n;
    os>>top__DOT__zx81a__DOT__cpu__DOT__rfsh_n;
    os>>top__DOT__zx81a__DOT__cpu__DOT__halt_n;
    os>>top__DOT__zx81a__DOT__cpu__DOT__busak_n;
    os>>top__DOT__zx81a__DOT__cpu__DOT__A;
    os>>top__DOT__zx81a__DOT__cpu__DOT__di;
    os>>top__DOT__zx81a__DOT__cpu__DOT__dout;
    os>>top__DOT__zx81a__DOT__cpu__DOT__dir;
    os>>top__DOT__zx81a__DOT__cpu__DOT__dirset;
    os>>top__DOT__zx81a__DOT__cpu__DOT__intcycle_n;
    os>>top__DOT__zx81a__DOT__cpu__DOT__no_read;
    os>>top__DOT__zx81a__DOT__cpu__DOT__write;
    os>>top__DOT__zx81a__DOT__cpu__DOT__iorq;
    os>>top__DOT__zx81a__DOT__cpu__DOT__di_reg;
    os>>top__DOT__zx81a__DOT__cpu__DOT__mcycle;
    os>>top__DOT__zx81a__DOT__cpu__DOT__tstate;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__reset_n;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__clk;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__cen;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__wait_n;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__int_n;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__nmi_n;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__busrq_n;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__m1_n;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__no_read;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__write;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__rfsh_n;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__halt_n;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__busak_n;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__A;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__dinst;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__di;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__dout;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mc;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ts;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__intcycle_n;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__stop;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__dir;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__dirset;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ACC;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Ap;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Fp;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegDIH;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegDIL;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusB;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusC;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA_r;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB_r;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrC;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEH;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEL;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Alternate;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA_r;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ID16;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_Mux;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__last_mcycle;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__last_tstate;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF2;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Halt_FF;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusReq_s;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusAck;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ClkEn;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMI_s;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__INT_s;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IStatus;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__DI_Reg;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__T_Res;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_State;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Pre_XY_F_M;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NextIs_XY_Fetch;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_Ind;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__No_BTR;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BTR_r;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t2;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDecZ;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Q;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16_r;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Z16_r;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC_r;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Prefix;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpE;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpXY;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDSPHL;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeAF;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRS;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_CPL;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_CCF;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_SCF;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BT;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BC;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BTR;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RLD;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RRD;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SetDI;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SetEI;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IMode;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Halt;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC16;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC16_B;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP16;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP16_A;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP16_B;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ID16_B;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Oldnmi_n;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCL;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCH;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBL;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBH;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAL;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAH;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IR;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ISet;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycle;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__F;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__NMICycle;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IntCycle;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycles;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__TStates;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Prefix;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_PC;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_WZ;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IncDec_16;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Reg;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Acc;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusA_To;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusB_To;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ALU_Op;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Save_ALU;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__PreserveC;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Arith16;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_Addr_To;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IORQ;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Jump;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpE;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpXY;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Call;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__RstP;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__LDZ;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__LDW;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__LDSPHL;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Special_LD;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeDH;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRp;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeAF;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRS;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_DJNZ;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_CPL;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_CCF;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_SCF;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RETN;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BT;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BC;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BTR;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RLD;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RRD;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_INRC;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetDI;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetEI;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IMode;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Halt;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__NoRead;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Write;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Arith16;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Z16;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__ALU_Op;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__IR;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__ISet;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BusA;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BusB;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__F_In;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__F_Out;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__AddrC;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOBH;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__AddrA;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__AddrB;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DIH;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOAL;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOCL;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DIL;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOBL;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOCH;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOAH;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__clk;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__CEN;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__WEH;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__WEL;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DIRSET;
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH[__Vi0];
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL[__Vi0];
    }
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__B;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__C;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__D;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__E;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__H;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__L;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__IX;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__IY;
    os>>top__DOT__zx81a__DOT__ram__DOT__clock;
    os>>top__DOT__zx81a__DOT__ram__DOT__clocken0;
    os>>top__DOT__zx81a__DOT__ram__DOT__wren_a;
    os>>top__DOT__zx81a__DOT__ram__DOT__address_a;
    os>>top__DOT__zx81a__DOT__ram__DOT__data_a;
    os>>top__DOT__zx81a__DOT__ram__DOT__q_a;
    os>>top__DOT__zx81a__DOT__ram__DOT__clock1;
    os>>top__DOT__zx81a__DOT__ram__DOT__clocken1;
    os>>top__DOT__zx81a__DOT__ram__DOT__wren_b;
    os>>top__DOT__zx81a__DOT__ram__DOT__address_b;
    os>>top__DOT__zx81a__DOT__ram__DOT__data_b;
    os>>top__DOT__zx81a__DOT__ram__DOT__q_b;
    for (int __Vi0=0; __Vi0<65536; ++__Vi0) {
        os>>top__DOT__zx81a__DOT__ram__DOT__mem[__Vi0];
    }
    os>>top__DOT__zx81a__DOT__rom__DOT__clock;
    os>>top__DOT__zx81a__DOT__rom__DOT__clocken0;
    os>>top__DOT__zx81a__DOT__rom__DOT__wren_a;
    os>>top__DOT__zx81a__DOT__rom__DOT__address_a;
    os>>top__DOT__zx81a__DOT__rom__DOT__data_a;
    os>>top__DOT__zx81a__DOT__rom__DOT__q_a;
    os>>top__DOT__zx81a__DOT__rom__DOT__clock1;
    os>>top__DOT__zx81a__DOT__rom__DOT__clocken1;
    os>>top__DOT__zx81a__DOT__rom__DOT__wren_b;
    os>>top__DOT__zx81a__DOT__rom__DOT__address_b;
    os>>top__DOT__zx81a__DOT__rom__DOT__data_b;
    os>>top__DOT__zx81a__DOT__rom__DOT__q_b;
    for (int __Vi0=0; __Vi0<16384; ++__Vi0) {
        os>>top__DOT__zx81a__DOT__rom__DOT__mem[__Vi0];
    }
    os>>top__DOT__zx81a__DOT__chroma81__DOT__clock;
    os>>top__DOT__zx81a__DOT__chroma81__DOT__clocken0;
    os>>top__DOT__zx81a__DOT__chroma81__DOT__wren_a;
    os>>top__DOT__zx81a__DOT__chroma81__DOT__address_a;
    os>>top__DOT__zx81a__DOT__chroma81__DOT__data_a;
    os>>top__DOT__zx81a__DOT__chroma81__DOT__q_a;
    os>>top__DOT__zx81a__DOT__chroma81__DOT__clock1;
    os>>top__DOT__zx81a__DOT__chroma81__DOT__clocken1;
    os>>top__DOT__zx81a__DOT__chroma81__DOT__wren_b;
    os>>top__DOT__zx81a__DOT__chroma81__DOT__address_b;
    os>>top__DOT__zx81a__DOT__chroma81__DOT__data_b;
    os>>top__DOT__zx81a__DOT__chroma81__DOT__q_b;
    for (int __Vi0=0; __Vi0<16384; ++__Vi0) {
        os>>top__DOT__zx81a__DOT__chroma81__DOT__mem[__Vi0];
    }
    os>>top__DOT__zx81a__DOT__qschrs__DOT__clock;
    os>>top__DOT__zx81a__DOT__qschrs__DOT__clocken0;
    os>>top__DOT__zx81a__DOT__qschrs__DOT__wren_a;
    os>>top__DOT__zx81a__DOT__qschrs__DOT__address_a;
    os>>top__DOT__zx81a__DOT__qschrs__DOT__data_a;
    os>>top__DOT__zx81a__DOT__qschrs__DOT__q_a;
    os>>top__DOT__zx81a__DOT__qschrs__DOT__clock1;
    os>>top__DOT__zx81a__DOT__qschrs__DOT__clocken1;
    os>>top__DOT__zx81a__DOT__qschrs__DOT__wren_b;
    os>>top__DOT__zx81a__DOT__qschrs__DOT__address_b;
    os>>top__DOT__zx81a__DOT__qschrs__DOT__data_b;
    os>>top__DOT__zx81a__DOT__qschrs__DOT__q_b;
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        os>>top__DOT__zx81a__DOT__qschrs__DOT__mem[__Vi0];
    }
    os>>top__DOT__zx81a__DOT__kbd__DOT__reset;
    os>>top__DOT__zx81a__DOT__kbd__DOT__clk_sys;
    os>>top__DOT__zx81a__DOT__kbd__DOT__ps2_key;
    os>>top__DOT__zx81a__DOT__kbd__DOT__addr;
    os>>top__DOT__zx81a__DOT__kbd__DOT__key_data;
    os>>top__DOT__zx81a__DOT__kbd__DOT__Fn;
    os>>top__DOT__zx81a__DOT__kbd__DOT__mod;
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        os>>top__DOT__zx81a__DOT__kbd__DOT__keys[__Vi0];
    }
    os>>top__DOT__zx81a__DOT__kbd__DOT__release_btn;
    os>>top__DOT__zx81a__DOT__kbd__DOT__code;
    os>>top__DOT__zx81a__DOT__kbd__DOT__input_strobe;
    os>>top__DOT__zx81a__DOT__kbd__DOT__shift;
    os>>top__DOT__zx81a__DOT__kbd__DOT__unnamedblk1__DOT__old_reset;
    os>>top__DOT__zx81a__DOT__kbd__DOT__unnamedblk2__DOT__old_state;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__A;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Sub;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Carry_In;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__A;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Sub;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Carry_In;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__A;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Sub;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Carry_In;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In;
    os>>__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC;
    os>>__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r;
    os>>__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ACC;
    os>>__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
    os>>__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP;
    os>>__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate;
    os>>__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle;
    os>>__VinpClk__TOP__top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n;
    os>>__Vclklast__TOP__clk_48;
    os>>__Vclklast__TOP____VinpClk__TOP__top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n;
    os>>__Vchglast__TOP__top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        os>>__Vm_traceActivity[__Vi0];
    }
    __VlSymsp->__Vdeserialize(os);
}

void Vtop::_initial__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_initial__TOP__1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__sw1 = 0U;
    vlTOPp->top__DOT__sw2 = 2U;
    vlTOPp->top__DOT__zx81a__DOT__status5 = 0U;
    vlTOPp->top__DOT__zx81a__DOT__status6 = 0U;
    vlTOPp->top__DOT__zx81a__DOT__status7 = 0U;
    vlTOPp->top__DOT__zx81a__DOT__status14 = 0U;
    vlTOPp->top__DOT__zx81a__DOT__status15 = 0U;
    vlTOPp->top__DOT__zx81a__DOT__status16 = 0U;
    vlTOPp->top__DOT__zx81a__DOT__status18 = 0U;
    vlTOPp->top__DOT__zx81a__DOT__status19 = 0U;
    vlTOPp->top__DOT__zx81a__DOT__status20 = 0U;
    vlTOPp->ioctl_wait = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__busrq_n = 1U;
    vlTOPp->top__DOT____Vcellout__zx81a__mod = 0U;
    vlTOPp->top__DOT__zx81a__DOT__ch81_sel = 0U;
    vlTOPp->top__DOT__zx81a__DOT__zxp_out = 0xffU;
    vlTOPp->top__DOT__zx81a__DOT__zxp_use = 0U;
    vlTOPp->top__DOT__zx81a__DOT__tape_loader_patch[0U] = 0xafU;
    vlTOPp->top__DOT__zx81a__DOT__tape_loader_patch[1U] = 0U;
    vlTOPp->top__DOT__zx81a__DOT__tape_loader_patch[2U] = 0x30U;
    vlTOPp->top__DOT__zx81a__DOT__tape_loader_patch[3U] = 0xfdU;
    vlTOPp->top__DOT__zx81a__DOT__tape_loader_patch[4U] = 0xc3U;
    vlTOPp->top__DOT__zx81a__DOT__tape_loader_patch[5U] = 7U;
    vlTOPp->top__DOT__zx81a__DOT__tape_loader_patch[6U] = 2U;
    vlTOPp->top__DOT__zx81a__DOT__ch81_e = 0U;
    vlTOPp->top__DOT__zx81a__DOT__nRFSH = 1U;
    vlTOPp->top__DOT__zx81a__DOT__ch81_dat = 0U;
    vlTOPp->top__DOT__zx81a__DOT__qs = 0U;
    vlTOPp->top__DOT__zx81a__DOT__Fn = 0U;
    vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn = 0U;
    vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__input_strobe = 0U;
    vlTOPp->top__DOT__zx81a__DOT__slow_mode = 0U;
    vlTOPp->top__DOT__ioctl_wait = vlTOPp->ioctl_wait;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__busrq_n 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__busrq_n;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__rfsh_n 
        = vlTOPp->top__DOT__zx81a__DOT__nRFSH;
}

void Vtop::_settle__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__2\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__zx81a__DOT__jsel = vlTOPp->top__DOT__jsel;
    vlTOPp->top__DOT__zx81a__DOT__joystick_0 = vlTOPp->top__DOT__joystick_0;
    vlTOPp->top__DOT__zx81a__DOT__joystick_1 = vlTOPp->top__DOT__joystick_1;
    vlTOPp->top__DOT__zx81a__DOT__vcrop_en = vlTOPp->top__DOT__vcrop_en;
    vlTOPp->top__DOT__zx81a__DOT__en216p = vlTOPp->top__DOT__en216p;
    vlTOPp->top__DOT__zx81a__DOT__slowmode = vlTOPp->top__DOT__slowmode;
    vlTOPp->top__DOT__zx81a__DOT__hz50 = vlTOPp->top__DOT__hz50;
    vlTOPp->top__DOT__zx81a__DOT__zx81 = vlTOPp->top__DOT__zx81;
    vlTOPp->top__DOT__zx81a__DOT__tape_in = vlTOPp->top__DOT__tape_in;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__dir 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__dir;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__dirset 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__dirset;
    vlTOPp->top__DOT__zx81a__DOT__ps2_key = vlTOPp->top__DOT__ps2_key;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__reset_n 
        = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n;
    vlTOPp->top__DOT____Vcellout__zx81a__audio_l = 
        (0x3ffU & (((IData)(vlTOPp->top__DOT__zx81a__DOT__psg_ch_a) 
                    << 1U) + (IData)(vlTOPp->top__DOT__zx81a__DOT__psg_ch_b)));
    vlTOPp->top__DOT____Vcellout__zx81a__audio_r = 
        (0x3ffU & (((IData)(vlTOPp->top__DOT__zx81a__DOT__psg_ch_c) 
                    << 1U) + (IData)(vlTOPp->top__DOT__zx81a__DOT__psg_ch_b)));
    vlTOPp->top__DOT__inputs = vlTOPp->inputs;
    vlTOPp->top__DOT__ioctl_upload = vlTOPp->ioctl_upload;
    vlTOPp->top__DOT__ioctl_din = vlTOPp->ioctl_din;
    vlTOPp->top__DOT__playerinput = (0x50U | (((((0x200U 
                                                  & ((~ 
                                                      ((IData)(vlTOPp->inputs) 
                                                       >> 0xaU)) 
                                                     << 9U)) 
                                                 | (0x100U 
                                                    & ((~ 
                                                        ((IData)(vlTOPp->inputs) 
                                                         >> 9U)) 
                                                       << 8U))) 
                                                | (0x80U 
                                                   & ((~ 
                                                       ((IData)(vlTOPp->inputs) 
                                                        >> 8U)) 
                                                      << 7U))) 
                                               | (8U 
                                                  & ((~ 
                                                      ((IData)(vlTOPp->inputs) 
                                                       >> 7U)) 
                                                     << 3U))) 
                                              | ((4U 
                                                  & ((~ 
                                                      ((IData)(vlTOPp->inputs) 
                                                       >> 6U)) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((~ 
                                                         ((IData)(vlTOPp->inputs) 
                                                          >> 5U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (~ 
                                                          ((IData)(vlTOPp->inputs) 
                                                           >> 4U)))))));
    vlTOPp->top__DOT__joystick = (((0x80U & ((~ (IData)(vlTOPp->inputs)) 
                                             << 7U)) 
                                   | ((0x40U & ((~ 
                                                 ((IData)(vlTOPp->inputs) 
                                                  >> 1U)) 
                                                << 6U)) 
                                      | ((0x20U & (
                                                   (~ 
                                                    ((IData)(vlTOPp->inputs) 
                                                     >> 2U)) 
                                                   << 5U)) 
                                         | (0x10U & 
                                            ((~ ((IData)(vlTOPp->inputs) 
                                                 >> 3U)) 
                                             << 4U))))) 
                                  | ((8U & ((~ (IData)(vlTOPp->inputs)) 
                                            << 3U)) 
                                     | ((4U & ((~ ((IData)(vlTOPp->inputs) 
                                                   >> 1U)) 
                                               << 2U)) 
                                        | ((2U & ((~ 
                                                   ((IData)(vlTOPp->inputs) 
                                                    >> 2U)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ ((IData)(vlTOPp->inputs) 
                                                  >> 3U)))))));
    vlTOPp->top__DOT__pause = (1U & ((IData)(vlTOPp->inputs) 
                                     >> 0xbU));
    vlTOPp->top__DOT__zx81a__DOT__rom__DOT__address_b 
        = (0x3fffU & (vlTOPp->ioctl_addr >> 0U));
    vlTOPp->top__DOT__zx81a__DOT__chroma81__DOT__address_b 
        = (0x3fffU & (vlTOPp->ioctl_addr >> 0U));
    vlTOPp->top__DOT__zx81a__DOT__qschrs__DOT__address_b 
        = (0x3ffU & (vlTOPp->ioctl_addr >> 0U));
    vlTOPp->top__DOT__ioctl_download = vlTOPp->ioctl_download;
    vlTOPp->top__DOT__ioctl_wr = vlTOPp->ioctl_wr;
    vlTOPp->top__DOT__ioctl_addr = vlTOPp->ioctl_addr;
    vlTOPp->top__DOT__ioctl_index = vlTOPp->ioctl_index;
    vlTOPp->top__DOT__reset = vlTOPp->reset;
    vlTOPp->top__DOT__ioctl_dout = vlTOPp->ioctl_dout;
    vlTOPp->top__DOT__clk_48 = vlTOPp->clk_48;
    vlTOPp->top__DOT__zx81a__DOT____Vcellinp__rom__wren_b 
        = ((IData)(vlTOPp->ioctl_wr) & (~ (IData)((0U 
                                                   != (IData)(vlTOPp->ioctl_index)))));
    vlTOPp->top__DOT__zx81a__DOT____Vcellinp__chroma81__wren_b 
        = ((((IData)(vlTOPp->ioctl_wr) & (0U != (0x1fU 
                                                 & (IData)(vlTOPp->ioctl_index)))) 
            & (1U == (7U & ((IData)(vlTOPp->ioctl_index) 
                            >> 5U)))) & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x7fffU 
                                                     & (vlTOPp->ioctl_addr 
                                                        >> 0xaU))))));
    vlTOPp->top__DOT__zx81a__DOT____Vcellinp__qschrs__wren_b 
        = ((((IData)(vlTOPp->ioctl_wr) & (0U != (0x1fU 
                                                 & (IData)(vlTOPp->ioctl_index)))) 
            & (3U == (7U & ((IData)(vlTOPp->ioctl_index) 
                            >> 5U)))) & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x7fffU 
                                                     & (vlTOPp->ioctl_addr 
                                                        >> 0xaU))))));
    vlTOPp->top__DOT__zx81a__DOT__joy = ((IData)(vlTOPp->top__DOT__joystick_0) 
                                         | (IData)(vlTOPp->top__DOT__joystick_1));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__rd_n = vlTOPp->top__DOT__zx81a__DOT__nRD;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__di 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__di_reg;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__AddrC 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrC;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__B 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [0U];
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__C 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [0U];
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__D 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [1U];
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__E 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [1U];
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__H 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [2U];
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__L 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [2U];
    vlTOPp->top__DOT__zx81a__DOT__ram__DOT__q_a = vlTOPp->top__DOT__zx81a__DOT__ram_out;
    vlTOPp->top__DOT__zx81a__DOT__rom__DOT__q_a = vlTOPp->top__DOT__zx81a__DOT__rom_out;
    vlTOPp->top__DOT__zx81a__DOT__qschrs__DOT__q_a 
        = vlTOPp->top__DOT__zx81a__DOT__qs_out;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__IX 
        = ((vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
            [3U] << 8U) | vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [3U]);
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__IY 
        = ((vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
            [7U] << 8U) | vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [7U]);
    vlTOPp->top__DOT__VGA_HS = vlTOPp->VGA_HS;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCH 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrC];
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCL 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrC];
    vlTOPp->top__DOT__zx81a__DOT__border = (1U & (~ 
                                                  ((IData)(vlTOPp->top__DOT__zx81a__DOT__paper_reg) 
                                                   >> 7U)));
    vlTOPp->top__DOT__zx81a__DOT__video_out = (1U & 
                                               ((~ 
                                                 ((IData)(vlTOPp->top__DOT__zx81a__DOT__shifter_reg) 
                                                  >> 7U)) 
                                                ^ (IData)(vlTOPp->top__DOT__zx81a__DOT__inverse)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__mreq_n 
        = vlTOPp->top__DOT__zx81a__DOT__nMREQ;
    vlTOPp->top__DOT__VGA_VS = vlTOPp->VGA_VS;
    vlTOPp->top__DOT__tape_ready = (0U != (IData)(vlTOPp->top__DOT__zx81a__DOT__tape_size));
    vlTOPp->top__DOT__zx81a__DOT__chroma81__DOT__q_a 
        = vlTOPp->top__DOT__zx81a__DOT__ch81_out;
    vlTOPp->top__DOT__VGA_HB = vlTOPp->VGA_HB;
    vlTOPp->top__DOT__VGA_VB = vlTOPp->VGA_VB;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__m1_n = vlTOPp->top__DOT__zx81a__DOT__nM1;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__busak_n 
        = (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusAck)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__cen = vlTOPp->top__DOT__zx81a__DOT__ce_cpu_p;
    vlTOPp->ce_pix = vlTOPp->top__DOT__zx81a__DOT__ce_6m5;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__iorq_n 
        = vlTOPp->top__DOT__zx81a__DOT__nIORQ;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__wr_n = vlTOPp->top__DOT__zx81a__DOT__nWR;
    vlTOPp->top__DOT__zx81a__DOT__shifter_start = (
                                                   ((((IData)(vlTOPp->top__DOT__zx81a__DOT__nMREQ) 
                                                      & (IData)(vlTOPp->top__DOT__zx81a__DOT__nopgen_store)) 
                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__ce_cpu_p)) 
                                                    & (IData)(vlTOPp->top__DOT__zx81a__DOT__shifter_en)) 
                                                   & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__NMIlatch)));
    vlTOPp->top__DOT__zx81a__DOT__nNMI = (1U & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__NMIlatch)) 
                                                | (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__hsync))));
    vlTOPp->top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n 
        = (1U & (~ (IData)(vlTOPp->reset)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IR 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ISet 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__NMICycle 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IntCycle 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Arith16 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16_r;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Z16 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Z16_r;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__ALU_Op 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__IR 
        = (0x3fU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                    >> 0U));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__ISet 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet;
    vlTOPp->top__DOT__zx81a__DOT__chroma81__DOT__data_a 
        = vlTOPp->top__DOT__zx81a__DOT__cpu_dout;
    vlTOPp->top__DOT__zx81a__DOT__qschrs__DOT__data_a 
        = vlTOPp->top__DOT__zx81a__DOT__cpu_dout;
    vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__addr = vlTOPp->top__DOT__zx81a__DOT__addr;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__A = vlTOPp->top__DOT__zx81a__DOT__addr;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__dout = vlTOPp->top__DOT__zx81a__DOT__cpu_dout;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__intcycle_n 
        = (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IMode = 3U;
    if ((0U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IMode 
                                            = ((1U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                                ? 2U
                                                : 1U);
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IMode = 0U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IMode = 0U;
                                }
                            }
                        }
                    } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IMode = 2U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IMode = 1U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IMode = 0U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IMode = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SetDI = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SetDI = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRS = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRS = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SetEI = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SetEI = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_SCF = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_SCF = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_CCF = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_CCF = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeAF = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeAF = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD = 0U;
    if ((0U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD = 5U;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD = 4U;
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD = 7U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD = 6U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDSPHL = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDSPHL = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpXY = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpXY = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Halt = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x36U == (0x3fU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Halt = 1U;
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_CPL = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_CPL = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Prefix = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Prefix = 3U;
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Prefix = 2U;
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Prefix = 3U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Prefix = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT____Vcellinp__ram__data_a 
        = ((IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader)
            ? (IData)(vlTOPp->top__DOT__zx81a__DOT__tape_in_byte_r)
            : (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu_dout));
    vlTOPp->top__DOT__zx81a__DOT__nINT = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                >> 6U));
    vlTOPp->top__DOT__zx81a__DOT__psg_sel = ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nIORQ)) 
                                             & (0xfU 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr))));
    vlTOPp->top__DOT__zx81a__DOT__zxp_sel = ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nIORQ)) 
                                             & (0xe007U 
                                                == (IData)(vlTOPp->top__DOT__zx81a__DOT__addr)));
    vlTOPp->top__DOT__zx81a__DOT__kbd_n = (1U & (((IData)(vlTOPp->top__DOT__zx81a__DOT__nIORQ) 
                                                  | (IData)(vlTOPp->top__DOT__zx81a__DOT__nRD)) 
                                                 | (IData)(vlTOPp->top__DOT__zx81a__DOT__addr)));
    vlTOPp->top__DOT__zx81a__DOT__key_data = ((((((
                                                   (((0x100U 
                                                      & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr))
                                                      ? 0x1fU
                                                      : 
                                                     vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                                                     [0U]) 
                                                    & ((0x200U 
                                                        & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr))
                                                        ? 0x1fU
                                                        : 
                                                       vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                                                       [1U])) 
                                                   & ((0x400U 
                                                       & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr))
                                                       ? 0x1fU
                                                       : 
                                                      vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                                                      [2U])) 
                                                  & ((0x800U 
                                                      & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr))
                                                      ? 0x1fU
                                                      : 
                                                     vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                                                     [3U])) 
                                                 & ((0x1000U 
                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr))
                                                     ? 0x1fU
                                                     : 
                                                    vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                                                    [4U])) 
                                                & ((0x2000U 
                                                    & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr))
                                                    ? 0x1fU
                                                    : 
                                                   vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                                                   [5U])) 
                                               & ((0x4000U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr))
                                                   ? 0x1fU
                                                   : 
                                                  vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                                                  [6U])) 
                                              & ((0x8000U 
                                                  & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr))
                                                  ? 0x1fU
                                                  : 
                                                 vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                                                 [7U]));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x36U != (0x3fU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((6U != (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__nHALT = (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Halt_FF)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask 
        = ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))
            ? ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                    ? 0x80U : 0x40U) : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                         ? 0x20U : 0x10U))
            : ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                    ? 8U : 4U) : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                   ? 2U : 1U)));
    vlTOPp->top__DOT__zx81a__DOT__ramHi_e = (1U & (
                                                   (((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                     >> 0xfU) 
                                                    & ((IData)(vlTOPp->top__DOT__zx81a__DOT__mem_size) 
                                                       >> 1U)) 
                                                   & ((~ 
                                                       ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                        >> 0xeU)) 
                                                      | ((IData)(vlTOPp->top__DOT__zx81a__DOT__nM1) 
                                                         & (IData)(vlTOPp->top__DOT__zx81a__DOT__mem_size)))));
    vlTOPp->top__DOT__zx81a__DOT__low16k_e = (IData)(
                                                     ((0x8000U 
                                                       != 
                                                       (0x8000U 
                                                        & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr))) 
                                                      | (2U 
                                                         != 
                                                         (2U 
                                                          & (IData)(vlTOPp->top__DOT__zx81a__DOT__mem_size)))));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ClkEn 
        = ((IData)(vlTOPp->top__DOT__zx81a__DOT__ce_cpu_p) 
           & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusAck)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__DI_Reg 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__di_reg;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycle 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__F 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BusA 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BusB 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__F_In 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__last_mcycle 
        = (1U & ((1U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles))
                  ? (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)
                  : ((2U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles))
                      ? ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                         >> 1U) : ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles))
                                    ? ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                       >> 2U) : ((4U 
                                                  == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles))
                                                  ? 
                                                 ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 3U)
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles))
                                                   ? 
                                                  ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                   >> 4U)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles))
                                                    ? 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 5U)
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles)) 
                                                    & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                       >> 6U)))))))));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait = 0U;
    if (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle) 
         | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle))) {
        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait = 1U;
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__mcycle 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__tstate 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RRD = 0U;
    if ((0U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                         >> 2U)))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RRD = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                             >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 0U;
    if ((0U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                         >> 1U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    }
                }
            } else if ((6U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                             >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((6U == (7U 
                                                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                            }
                                        }
                                    } else {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    }
                                } else if ((6U == (7U 
                                                   & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            } else if ((6U == (7U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            } else if ((6U == (7U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                }
            } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            }
        }
    } else if ((1U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                             | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                >> 6U))))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                         | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                            >> 6U))))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                             >> 6U)))) {
            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                         | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                            >> 6U))))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
            }
        }
    } else if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    }
                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                }
            }
        } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                }
            }
        } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                }
            }
        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            }
        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                } else if ((1U & (~ 
                                                  ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                   >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    }
                }
            } else if ((6U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
            }
        } else if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x36U != (0x3fU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                if ((6U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            }
        } else if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                 >> 1U)))) {
                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            }
        } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        } else if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                 >> 1U)))) {
                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            }
        } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                 >> 1U)))) {
                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            }
        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                } else if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 3U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 3U)))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                             >> 1U)))) {
            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            }
        }
    } else if ((1U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                             | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                >> 6U))))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                         | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                            >> 6U))))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                             >> 6U)))) {
            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                         | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                            >> 6U))))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
            }
        }
    } else if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        }
                                    }
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    if ((6U != (7U 
                                                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    }
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                }
            }
        } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    } else if ((0x10U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                 >> 2U)))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 2U)))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                             >> 2U)))) {
            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 2U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 2U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((6U == 
                                             (7U & 
                                              ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                                }
                                            }
                                        } else {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                        }
                                    } else if ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                    >> 3U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                            }
                                        }
                                    } else {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((6U == (7U 
                                                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                            }
                                        }
                                    } else {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                } else if ((6U == (7U 
                                                   & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((6U == (7U 
                                                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                            }
                                        }
                                    } else {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                } else if ((6U == (7U 
                                                   & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                }
                            } else if ((6U == (7U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((6U == (7U 
                                                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                            }
                                        }
                                    } else {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                } else if ((6U == (7U 
                                                   & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                }
                            } else if ((6U == (7U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                }
                            } else if ((6U == (7U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            }
                        } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        }
                    }
                }
            }
        }
    } else if ((1U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BC = 0U;
    if ((0U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
            if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 6U)))) {
                    if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BC = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BTR = 0U;
    if ((0U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
            if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 6U)))) {
                    if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BTR = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BTR = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RLD = 0U;
    if ((0U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 4U)))) {
                            if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                         >> 2U)))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RLD = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op 
        = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                 >> 3U));
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((6U == 
                                             (7U & 
                                              ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                                }
                                            }
                                        } else {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                        }
                                    } else if ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                    >> 3U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                            }
                                        }
                                    } else {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((6U == (7U 
                                                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                            }
                                        }
                                    } else {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                    }
                                } else if ((6U == (7U 
                                                   & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((6U == (7U 
                                                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                            }
                                        }
                                    } else {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                    }
                                } else if ((6U == (7U 
                                                   & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xcU;
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            }
                        } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                                }
                            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                }
                            } else if ((6U == (7U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            }
                        } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            }
                        } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                    }
                }
            }
        }
    } else if ((1U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                             | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                >> 6U))))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                         | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                            >> 6U))))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
            }
        } else if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                         | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                            >> 6U))))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 9U;
            }
        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                     | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                        >> 6U))))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
            }
        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
        }
    } else if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 7U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        }
                    }
                }
            }
        }
    } else if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xdU;
                                }
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xeU;
                            }
                        }
                    }
                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                    }
                }
            }
        } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    }
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                    }
                }
            }
        } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    }
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                    }
                }
            }
        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                }
            }
        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                         >> 3U)))) {
                                                    if (
                                                        (0x10U 
                                                         & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 3U)))) {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 3U)))) {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 3U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 3U)))) {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 3U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 3U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                 >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 3U)))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 3U)))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                 >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                }
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                             >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 4U)))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BT = 0U;
    if ((0U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
            if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 6U)))) {
                    if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BT = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 0U;
    if ((0U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        }
                                    }
                                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                             >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((6U == (7U 
                                                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        }
                                    } else if ((2U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                }
            } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                 >> 1U)))) {
                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    }
                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle)))) {
                    if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
    }
    if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
        if (((0x36U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)) 
             | (1U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet)))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        }
                                    }
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                    }
                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                             >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                 >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle)))) {
                                    if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle) {
                                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                        >> 1U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 2U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ = 1U;
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                   >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                   >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                    } else if ((8U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            }
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                 >> 2U)))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
        if ((1U & (~ ((0x36U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)) 
                      | (1U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet)))))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                            } else if (
                                                       (0x10U 
                                                        & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                 >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    } else if ((0x10U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                             >> 1U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 3U)))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                             >> 1U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    } else if ((0x10U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                             >> 1U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                         >> 1U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 2U)))) {
                            if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x36U != (0x3fU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                if ((6U != (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        }
                    }
                }
            }
        } else if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    }
                } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    }
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                  >> 1U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 2U)))) {
                            if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    }
                } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    }
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        }
                    }
                }
            }
        } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    }
                } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        }
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 3U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    }
                }
            } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 3U)))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                  >> 1U)))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        }
                    }
                }
            }
        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                }
            }
        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
            if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                    }
                }
            } else if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                    }
                }
            }
        }
    } else if ((1U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                             >> 6U))))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                         >> 6U))))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                             >> 6U)))) {
            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                         >> 6U))))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
        if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    } else if ((0x10U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                  >> 1U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 2U)))) {
                            if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                    }
                }
            }
        } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                 >> 2U)))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        }
                    }
                }
            }
        } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                             >> 2U)))) {
            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                  >> 1U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 2U)))) {
                            if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpE = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpE = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpE = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpE = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpE = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpE = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpE = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                        }
                                    }
                                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                            }
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                 >> 2U)))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc 
                                                    = 
                                                    (7U 
                                                     & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                        >> 3U));
                                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF 
                                                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout 
                                                    = 
                                                    (1U 
                                                     & ((4U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                           ? 
                                                          ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                           >> 7U)
                                                           : 
                                                          (~ 
                                                           ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                            >> 7U)))
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                           ? 
                                                          ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                           >> 2U)
                                                           : 
                                                          (~ 
                                                           ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                            >> 2U))))
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                           ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF)
                                                           : 
                                                          (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF)))
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                           ? 
                                                          ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                           >> 6U)
                                                           : 
                                                          (~ 
                                                           ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                            >> 6U))))));
                                                if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout) {
                                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc 
                                                = (7U 
                                                   & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF 
                                                = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout 
                                                = (1U 
                                                   & ((4U 
                                                       & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                         ? 
                                                        ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                         >> 7U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                          >> 7U)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                         ? 
                                                        ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                         >> 2U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                          >> 2U))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                         ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF)
                                                         : 
                                                        (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                         ? 
                                                        ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                         >> 6U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                          >> 6U))))));
                                            if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc 
                                                = (7U 
                                                   & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF 
                                                = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout 
                                                = (1U 
                                                   & ((4U 
                                                       & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                         ? 
                                                        ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                         >> 7U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                          >> 7U)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                         ? 
                                                        ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                         >> 2U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                          >> 2U))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                         ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF)
                                                         : 
                                                        (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                         ? 
                                                        ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                         >> 6U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                          >> 6U))))));
                                            if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc 
                                            = (7U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
                                        vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF 
                                            = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                        vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout 
                                            = (1U & 
                                               ((4U 
                                                 & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                    >> 2U))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                    >> 6U))))));
                                        if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc 
                                                = (7U 
                                                   & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF 
                                                = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout 
                                                = (1U 
                                                   & ((4U 
                                                       & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                         ? 
                                                        ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                         >> 7U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                          >> 7U)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                         ? 
                                                        ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                         >> 2U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                          >> 2U))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                         ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF)
                                                         : 
                                                        (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                         ? 
                                                        ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                         >> 6U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                          >> 6U))))));
                                            if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc 
                                            = (7U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
                                        vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF 
                                            = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                        vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout 
                                            = (1U & 
                                               ((4U 
                                                 & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                    >> 2U))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                    >> 6U))))));
                                        if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc 
                                            = (7U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
                                        vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF 
                                            = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                        vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout 
                                            = (1U & 
                                               ((4U 
                                                 & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                    >> 2U))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                    >> 6U))))));
                                        if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                             >> 1U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc 
                                    = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U));
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF 
                                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout 
                                    = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                    >> 6U))))));
                                if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                             >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                          >> 5U)))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle)))) {
                                        if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                                 >> 3U)))) {
                                                            if (
                                                                (0x10U 
                                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
