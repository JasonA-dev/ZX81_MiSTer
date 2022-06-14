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
const IData Vtop::var_top__DOT__zx81a__DOT__ram__DOT__MEM_INIT_FILE(0U);
const IData Vtop::var_top__DOT__zx81a__DOT__rom__DOT__DATAWIDTH(8U);
const IData Vtop::var_top__DOT__zx81a__DOT__rom__DOT__ADDRWIDTH(0xeU);
const IData Vtop::var_top__DOT__zx81a__DOT__rom__DOT__NUMWORDS(0x3000U);
const IData Vtop::var_top__DOT__zx81a__DOT__chroma81__DOT__DATAWIDTH(8U);
const IData Vtop::var_top__DOT__zx81a__DOT__chroma81__DOT__ADDRWIDTH(0xeU);
const IData Vtop::var_top__DOT__zx81a__DOT__chroma81__DOT__NUMWORDS(0x3000U);
const IData Vtop::var_top__DOT__zx81a__DOT__chroma81__DOT__MEM_INIT_FILE(0U);
const IData Vtop::var_top__DOT__zx81a__DOT__qschrs__DOT__DATAWIDTH(8U);
const IData Vtop::var_top__DOT__zx81a__DOT__qschrs__DOT__ADDRWIDTH(0xaU);
const IData Vtop::var_top__DOT__zx81a__DOT__qschrs__DOT__NUMWORDS(0x3000U);
const IData Vtop::var_top__DOT__zx81a__DOT__qschrs__DOT__MEM_INIT_FILE(0U);

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
    vluint64_t __Vcheckval = 0xe20d7bf89ae53c89ULL;
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
    os<<top__DOT__zx81a__DOT____Vcellinp__psg__BC;
    os<<top__DOT__zx81a__DOT____Vcellinp__psg__BDIR;
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
    os<<top__DOT__zx81a__DOT__wait_n;
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
    os<<top__DOT__zx81a__DOT__cpu__DOT__cen_p;
    os<<top__DOT__zx81a__DOT__cpu__DOT__cen_n;
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
    os<<top__DOT__zx81a__DOT__cpu__DOT__CEN_pol;
    os<<top__DOT__zx81a__DOT__cpu__DOT__intcycle_n;
    os<<top__DOT__zx81a__DOT__cpu__DOT__no_read;
    os<<top__DOT__zx81a__DOT__cpu__DOT__write;
    os<<top__DOT__zx81a__DOT__cpu__DOT__iorq;
    os<<top__DOT__zx81a__DOT__cpu__DOT__di_reg;
    os<<top__DOT__zx81a__DOT__cpu__DOT__mcycle;
    os<<top__DOT__zx81a__DOT__cpu__DOT__tstate;
    os<<top__DOT__zx81a__DOT__cpu__DOT__intcycled_n;
    os<<top__DOT__zx81a__DOT__cpu__DOT__A_int;
    os<<top__DOT__zx81a__DOT__cpu__DOT__A_last;
    os<<top__DOT__zx81a__DOT__cpu__DOT____Vcellinp__i_tv80_core__cen;
    os<<top__DOT__zx81a__DOT__cpu__DOT__cen_pol;
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
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XY_State;
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
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetDI;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetEI;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IMode;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Halt;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__NoRead;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Write;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XYbit_undoc;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair;
    os<<top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB;
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
    os<<top__DOT__zx81a__DOT__psg__DOT__CLK;
    os<<top__DOT__zx81a__DOT__psg__DOT__CE;
    os<<top__DOT__zx81a__DOT__psg__DOT__RESET;
    os<<top__DOT__zx81a__DOT__psg__DOT__BDIR;
    os<<top__DOT__zx81a__DOT__psg__DOT__BC;
    os<<top__DOT__zx81a__DOT__psg__DOT__DI;
    os<<top__DOT__zx81a__DOT__psg__DOT__DO;
    os<<top__DOT__zx81a__DOT__psg__DOT__CHANNEL_A;
    os<<top__DOT__zx81a__DOT__psg__DOT__CHANNEL_B;
    os<<top__DOT__zx81a__DOT__psg__DOT__CHANNEL_C;
    os<<top__DOT__zx81a__DOT__psg__DOT__SEL;
    os<<top__DOT__zx81a__DOT__psg__DOT__MODE;
    os<<top__DOT__zx81a__DOT__psg__DOT__ACTIVE;
    os<<top__DOT__zx81a__DOT__psg__DOT__IOA_in;
    os<<top__DOT__zx81a__DOT__psg__DOT__IOA_out;
    os<<top__DOT__zx81a__DOT__psg__DOT__IOB_in;
    os<<top__DOT__zx81a__DOT__psg__DOT__IOB_out;
    os<<top__DOT__zx81a__DOT__psg__DOT__addr;
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        os<<top__DOT__zx81a__DOT__psg__DOT__ymreg[__Vi0];
    }
    os<<top__DOT__zx81a__DOT__psg__DOT__env_reset;
    os<<top__DOT__zx81a__DOT__psg__DOT__dout;
    os<<top__DOT__zx81a__DOT__psg__DOT__ena_div;
    os<<top__DOT__zx81a__DOT__psg__DOT__ena_div_noise;
    os<<top__DOT__zx81a__DOT__psg__DOT__noise_gen_op;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        os<<top__DOT__zx81a__DOT__psg__DOT__tone_gen_freq[__Vi0];
    }
    os<<top__DOT__zx81a__DOT__psg__DOT__tone_gen_op;
    os<<top__DOT__zx81a__DOT__psg__DOT__env_ena;
    os<<top__DOT__zx81a__DOT__psg__DOT__env_gen_comp;
    os<<top__DOT__zx81a__DOT__psg__DOT__env_vol;
    os<<top__DOT__zx81a__DOT__psg__DOT__is_bot;
    os<<top__DOT__zx81a__DOT__psg__DOT__is_bot_p1;
    os<<top__DOT__zx81a__DOT__psg__DOT__is_top_m1;
    os<<top__DOT__zx81a__DOT__psg__DOT__is_top;
    os<<top__DOT__zx81a__DOT__psg__DOT__A;
    os<<top__DOT__zx81a__DOT__psg__DOT__B;
    os<<top__DOT__zx81a__DOT__psg__DOT__C;
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        os<<top__DOT__zx81a__DOT__psg__DOT__volTable[__Vi0];
    }
    os<<top__DOT__zx81a__DOT__psg__DOT__unnamedblk1__DOT__cnt_div;
    os<<top__DOT__zx81a__DOT__psg__DOT__unnamedblk1__DOT__noise_div;
    os<<top__DOT__zx81a__DOT__psg__DOT__unnamedblk2__DOT__poly17;
    os<<top__DOT__zx81a__DOT__psg__DOT__unnamedblk2__DOT__noise_gen_cnt;
    os<<top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__i;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        os<<top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt[__Vi0];
    }
    os<<top__DOT__zx81a__DOT__psg__DOT__unnamedblk4__DOT__env_gen_cnt;
    os<<top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_hold;
    os<<top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_inc;
    os<<top__DOT__zx81a__DOT__psg__DOT____Vlvbound2;
    os<<top__DOT__zx81a__DOT__psg__DOT____Vlvbound3;
    os<<top__DOT__zx81a__DOT__psg__DOT____Vlvbound4;
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
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__F;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__F;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__F;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__F;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__F;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__F;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__F;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__F;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__F;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__F;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__F;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__F;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__F;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__F;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__F;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__F;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__F;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__F;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__F;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__F;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__F;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__F;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__F;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout;
    os<<__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__F;
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
    vluint64_t __Vcheckval = 0xe20d7bf89ae53c89ULL;
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
    os>>top__DOT__zx81a__DOT____Vcellinp__psg__BC;
    os>>top__DOT__zx81a__DOT____Vcellinp__psg__BDIR;
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
    os>>top__DOT__zx81a__DOT__wait_n;
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
    os>>top__DOT__zx81a__DOT__cpu__DOT__cen_p;
    os>>top__DOT__zx81a__DOT__cpu__DOT__cen_n;
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
    os>>top__DOT__zx81a__DOT__cpu__DOT__CEN_pol;
    os>>top__DOT__zx81a__DOT__cpu__DOT__intcycle_n;
    os>>top__DOT__zx81a__DOT__cpu__DOT__no_read;
    os>>top__DOT__zx81a__DOT__cpu__DOT__write;
    os>>top__DOT__zx81a__DOT__cpu__DOT__iorq;
    os>>top__DOT__zx81a__DOT__cpu__DOT__di_reg;
    os>>top__DOT__zx81a__DOT__cpu__DOT__mcycle;
    os>>top__DOT__zx81a__DOT__cpu__DOT__tstate;
    os>>top__DOT__zx81a__DOT__cpu__DOT__intcycled_n;
    os>>top__DOT__zx81a__DOT__cpu__DOT__A_int;
    os>>top__DOT__zx81a__DOT__cpu__DOT__A_last;
    os>>top__DOT__zx81a__DOT__cpu__DOT____Vcellinp__i_tv80_core__cen;
    os>>top__DOT__zx81a__DOT__cpu__DOT__cen_pol;
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
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XY_State;
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
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetDI;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetEI;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IMode;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Halt;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__NoRead;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Write;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XYbit_undoc;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair;
    os>>top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB;
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
    os>>top__DOT__zx81a__DOT__psg__DOT__CLK;
    os>>top__DOT__zx81a__DOT__psg__DOT__CE;
    os>>top__DOT__zx81a__DOT__psg__DOT__RESET;
    os>>top__DOT__zx81a__DOT__psg__DOT__BDIR;
    os>>top__DOT__zx81a__DOT__psg__DOT__BC;
    os>>top__DOT__zx81a__DOT__psg__DOT__DI;
    os>>top__DOT__zx81a__DOT__psg__DOT__DO;
    os>>top__DOT__zx81a__DOT__psg__DOT__CHANNEL_A;
    os>>top__DOT__zx81a__DOT__psg__DOT__CHANNEL_B;
    os>>top__DOT__zx81a__DOT__psg__DOT__CHANNEL_C;
    os>>top__DOT__zx81a__DOT__psg__DOT__SEL;
    os>>top__DOT__zx81a__DOT__psg__DOT__MODE;
    os>>top__DOT__zx81a__DOT__psg__DOT__ACTIVE;
    os>>top__DOT__zx81a__DOT__psg__DOT__IOA_in;
    os>>top__DOT__zx81a__DOT__psg__DOT__IOA_out;
    os>>top__DOT__zx81a__DOT__psg__DOT__IOB_in;
    os>>top__DOT__zx81a__DOT__psg__DOT__IOB_out;
    os>>top__DOT__zx81a__DOT__psg__DOT__addr;
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        os>>top__DOT__zx81a__DOT__psg__DOT__ymreg[__Vi0];
    }
    os>>top__DOT__zx81a__DOT__psg__DOT__env_reset;
    os>>top__DOT__zx81a__DOT__psg__DOT__dout;
    os>>top__DOT__zx81a__DOT__psg__DOT__ena_div;
    os>>top__DOT__zx81a__DOT__psg__DOT__ena_div_noise;
    os>>top__DOT__zx81a__DOT__psg__DOT__noise_gen_op;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        os>>top__DOT__zx81a__DOT__psg__DOT__tone_gen_freq[__Vi0];
    }
    os>>top__DOT__zx81a__DOT__psg__DOT__tone_gen_op;
    os>>top__DOT__zx81a__DOT__psg__DOT__env_ena;
    os>>top__DOT__zx81a__DOT__psg__DOT__env_gen_comp;
    os>>top__DOT__zx81a__DOT__psg__DOT__env_vol;
    os>>top__DOT__zx81a__DOT__psg__DOT__is_bot;
    os>>top__DOT__zx81a__DOT__psg__DOT__is_bot_p1;
    os>>top__DOT__zx81a__DOT__psg__DOT__is_top_m1;
    os>>top__DOT__zx81a__DOT__psg__DOT__is_top;
    os>>top__DOT__zx81a__DOT__psg__DOT__A;
    os>>top__DOT__zx81a__DOT__psg__DOT__B;
    os>>top__DOT__zx81a__DOT__psg__DOT__C;
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        os>>top__DOT__zx81a__DOT__psg__DOT__volTable[__Vi0];
    }
    os>>top__DOT__zx81a__DOT__psg__DOT__unnamedblk1__DOT__cnt_div;
    os>>top__DOT__zx81a__DOT__psg__DOT__unnamedblk1__DOT__noise_div;
    os>>top__DOT__zx81a__DOT__psg__DOT__unnamedblk2__DOT__poly17;
    os>>top__DOT__zx81a__DOT__psg__DOT__unnamedblk2__DOT__noise_gen_cnt;
    os>>top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__i;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        os>>top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt[__Vi0];
    }
    os>>top__DOT__zx81a__DOT__psg__DOT__unnamedblk4__DOT__env_gen_cnt;
    os>>top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_hold;
    os>>top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_inc;
    os>>top__DOT__zx81a__DOT__psg__DOT____Vlvbound2;
    os>>top__DOT__zx81a__DOT__psg__DOT____Vlvbound3;
    os>>top__DOT__zx81a__DOT__psg__DOT____Vlvbound4;
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
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__F;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__F;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__F;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__F;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__F;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__F;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__F;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__F;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__F;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__F;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__F;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__F;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__F;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__F;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__F;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__F;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__F;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__F;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__F;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__F;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__F;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__F;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__F;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout;
    os>>__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__F;
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
    // Variables
    VlWide<3>/*95:0*/ __Vtemp1;
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
    __Vtemp1[0U] = 0x2e686578U;
    __Vtemp1[1U] = 0x7a783878U;
    __Vtemp1[2U] = 0x72746c2fU;
    VL_READMEM_N(true, 8, 16384, 0, VL_CVT_PACK_STR_NW(3, __Vtemp1)
                 ,  &(vlTOPp->top__DOT__zx81a__DOT__rom__DOT__mem)
                 , 0, ~0ULL);
    vlTOPp->top__DOT__zx81a__DOT__ch81_dat = 0U;
    vlTOPp->top__DOT__zx81a__DOT__qs = 0U;
    vlTOPp->top__DOT__zx81a__DOT__Fn = 0U;
    vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn = 0U;
    vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__input_strobe = 0U;
    vlTOPp->top__DOT__zx81a__DOT__slow_mode = 0U;
    vlTOPp->top__DOT__ioctl_wait = vlTOPp->ioctl_wait;
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
    vlTOPp->top__DOT__zx81a__DOT__ps2_key = vlTOPp->top__DOT__ps2_key;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__reset_n 
        = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__busrq_n 
        = vlTOPp->top__DOT__zx81a__DOT__wait_n;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0U] = 0U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[1U] = 1U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[2U] = 1U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[3U] = 2U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[4U] = 2U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[5U] = 3U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[6U] = 3U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[7U] = 4U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[8U] = 6U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[9U] = 7U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0xaU] = 9U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0xbU] = 0xaU;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0xcU] = 0xcU;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0xdU] = 0xeU;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0xeU] = 0x11U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0xfU] = 0x13U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x10U] = 0x17U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x11U] = 0x1bU;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x12U] = 0x20U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x13U] = 0x25U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x14U] = 0x2cU;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x15U] = 0x35U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x16U] = 0x3eU;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x17U] = 0x47U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x18U] = 0x54U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x19U] = 0x66U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x1aU] = 0x77U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x1bU] = 0x88U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x1cU] = 0xa1U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x1dU] = 0xc0U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x1eU] = 0xe0U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x1fU] = 0xffU;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x20U] = 0U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x21U] = 0U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x22U] = 3U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x23U] = 3U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x24U] = 4U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x25U] = 4U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x26U] = 6U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x27U] = 6U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x28U] = 0xaU;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x29U] = 0xaU;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x2aU] = 0xfU;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x2bU] = 0xfU;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x2cU] = 0x15U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x2dU] = 0x15U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x2eU] = 0x22U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x2fU] = 0x22U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x30U] = 0x28U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x31U] = 0x28U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x32U] = 0x41U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x33U] = 0x41U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x34U] = 0x5bU;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x35U] = 0x5bU;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x36U] = 0x72U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x37U] = 0x72U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x38U] = 0x90U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x39U] = 0x90U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x3aU] = 0xb5U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x3bU] = 0xb5U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x3cU] = 0xd7U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x3dU] = 0xd7U;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x3eU] = 0xffU;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable[0x3fU] = 0xffU;
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
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__is_bot 
        = (0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__env_vol));
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__is_bot_p1 
        = (1U == (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__env_vol));
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__is_top_m1 
        = (0x1eU == (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__env_vol));
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__is_top 
        = (0x1fU == (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__env_vol));
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
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__A = vlTOPp->top__DOT__zx81a__DOT__addr;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ACTIVE 
        = (0x3fU & (~ vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                    [7U]));
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__IOA_out 
        = vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
        [0xeU];
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__IOB_out 
        = vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
        [0xfU];
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__env_gen_comp 
        = (((0U != vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
             [0xcU]) | (0U != vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                        [0xbU])) ? (0xffffU & (((vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                 [0xcU] 
                                                 << 8U) 
                                                | vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                [0xbU]) 
                                               - (IData)(1U)))
            : 0U);
    vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__addr = vlTOPp->top__DOT__zx81a__DOT__addr;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__tone_gen_freq[0U] 
        = ((0xf00U & (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                      [1U] << 8U)) | vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
           [0U]);
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__tone_gen_freq[1U] 
        = ((0xf00U & (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                      [3U] << 8U)) | vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
           [2U]);
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__tone_gen_freq[2U] 
        = ((0xf00U & (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                      [5U] << 8U)) | vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
           [4U]);
    vlTOPp->top__DOT__VGA_VS = vlTOPp->VGA_VS;
    vlTOPp->top__DOT__tape_ready = (0U != (IData)(vlTOPp->top__DOT__zx81a__DOT__tape_size));
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
    vlTOPp->top__DOT__zx81a__DOT__low16k_e = (IData)(
                                                     ((0x8000U 
                                                       != 
                                                       (0x8000U 
                                                        & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr))) 
                                                      | (2U 
                                                         != 
                                                         (2U 
                                                          & (IData)(vlTOPp->top__DOT__zx81a__DOT__mem_size)))));
    vlTOPp->top__DOT__zx81a__DOT__chroma81__DOT__q_a 
        = vlTOPp->top__DOT__zx81a__DOT__ch81_out;
    vlTOPp->top__DOT__VGA_HB = vlTOPp->VGA_HB;
    vlTOPp->top__DOT__VGA_VB = vlTOPp->VGA_VB;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__mreq_n 
        = vlTOPp->top__DOT__zx81a__DOT__nMREQ;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__iorq_n 
        = vlTOPp->top__DOT__zx81a__DOT__nIORQ;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__rd_n = vlTOPp->top__DOT__zx81a__DOT__nRD;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__wr_n = vlTOPp->top__DOT__zx81a__DOT__nWR;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__di 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__di_reg;
    vlTOPp->top__DOT__zx81a__DOT__zxp_sel = ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nIORQ)) 
                                             & (0xe007U 
                                                == (IData)(vlTOPp->top__DOT__zx81a__DOT__addr)));
    vlTOPp->top__DOT__zx81a__DOT__kbd_n = (1U & (((IData)(vlTOPp->top__DOT__zx81a__DOT__nIORQ) 
                                                  | (IData)(vlTOPp->top__DOT__zx81a__DOT__nRD)) 
                                                 | (IData)(vlTOPp->top__DOT__zx81a__DOT__addr)));
    vlTOPp->top__DOT__zx81a__DOT__psg_sel = ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nIORQ)) 
                                             & (0xfU 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr))));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__cen_p = vlTOPp->top__DOT__zx81a__DOT__ce_cpu_p;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__cen_n = vlTOPp->top__DOT__zx81a__DOT__ce_cpu_n;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__A 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__A_int;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ISet 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Arith16 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16_r;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Z16 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Z16_r;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__ALU_Op 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__ISet 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet;
    vlTOPp->top__DOT__zx81a__DOT__chroma81__DOT__data_a 
        = vlTOPp->top__DOT__zx81a__DOT__cpu_dout;
    vlTOPp->top__DOT__zx81a__DOT__qschrs__DOT__data_a 
        = vlTOPp->top__DOT__zx81a__DOT__cpu_dout;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__CE = vlTOPp->top__DOT__zx81a__DOT__ce_psg;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__DI = vlTOPp->top__DOT__zx81a__DOT__cpu_dout;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__dout = vlTOPp->top__DOT__zx81a__DOT__cpu_dout;
    vlTOPp->top__DOT__zx81a__DOT____Vcellinp__ram__data_a 
        = ((IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader)
            ? (IData)(vlTOPp->top__DOT__zx81a__DOT__tape_in_byte_r)
            : (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu_dout));
    vlTOPp->ce_pix = vlTOPp->top__DOT__zx81a__DOT__ce_6m5;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__DI_Reg 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__di_reg;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IntCycle 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BusA 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BusB 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__m1_n = vlTOPp->top__DOT__zx81a__DOT__nM1;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__busak_n 
        = (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusAck)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__intcycle_n 
        = (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle)));
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
    vlTOPp->top__DOT__zx81a__DOT__nINT = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                >> 6U));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IR 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycle 
        = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                 >> 0U));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__F 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__NMICycle 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__IR 
        = (0x3fU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                    >> 0U));
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
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry 
        = (IData)((1U == (5U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Carry_In 
        = (1U & (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r) 
                  >> 1U) ^ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry) 
                            & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F))));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Sub 
        = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r) 
                 >> 1U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B 
        = (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__A 
        = (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Vfuncout 
        = (0x1fU & (((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__A) 
                     + (0xfU & ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Sub)
                                 ? (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B))
                                 : (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B)))) 
                    + (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Carry_In)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v 
        = (1U & ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Vfuncout) 
                 >> 4U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In 
        = (1U & (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r) 
                  >> 1U) ^ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry) 
                            & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F))));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub 
        = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r) 
                 >> 1U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B 
        = (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A 
        = (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout 
        = (0x1fU & (((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A) 
                     + (0xfU & ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub)
                                 ? (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B))
                                 : (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B)))) 
                    + (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v 
        = ((0xf0U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v)) 
           | (0xfU & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout)));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Carry_In 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v;
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Sub 
        = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r) 
                 >> 1U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B 
        = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                 >> 4U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__A 
        = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                 >> 4U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Vfuncout 
        = (0xfU & (((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__A) 
                    + (7U & ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Sub)
                              ? (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B))
                              : (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B)))) 
                   + (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Carry_In)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v 
        = (1U & ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Vfuncout) 
                 >> 3U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v;
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub 
        = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r) 
                 >> 1U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B 
        = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                 >> 4U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A 
        = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                 >> 4U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout 
        = (0xfU & (((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A) 
                    + (7U & ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub)
                              ? (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B))
                              : (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B)))) 
                   + (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v 
        = ((0x8fU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v)) 
           | (0x70U & ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout) 
                       << 4U)));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Carry_In 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v;
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Sub 
        = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r) 
                 >> 1U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B 
        = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                 >> 7U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__A 
        = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                 >> 7U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Vfuncout 
        = (3U & (((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__A) 
                  + (1U & ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Sub)
                            ? (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B))
                            : (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B)))) 
                 + (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Carry_In)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v 
        = (1U & ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Vfuncout) 
                 >> 1U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v;
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub 
        = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r) 
                 >> 1U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B 
        = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                 >> 7U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A 
        = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                 >> 7U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout 
        = (3U & (((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A) 
                  + (1U & ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub)
                            ? (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B))
                            : (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B)))) 
                 + (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v 
        = ((0x7fU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v)) 
           | (0x80U & ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout) 
                       << 7U)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v 
        = ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v) 
           ^ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD 
        = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                 >> 3U));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS 
        = (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair 
        = (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                 >> 4U));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 1U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates 
        = ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))
            ? 4U : 3U);
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Prefix = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op 
        = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                 >> 3U));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 7U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpE = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpXY = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDSPHL = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeAF = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRS = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_CPL = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_CCF = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_SCF = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BT = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BC = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BTR = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RLD = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RRD = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SetDI = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SetEI = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IMode = 3U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Halt = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XYbit_undoc = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                        if ((1U == 
                                             (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                        } else if (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                        } else if (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                                        }
                                    } else {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                        if ((2U == 
                                             (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                                = (
                                                   (8U 
                                                    & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                                = (7U 
                                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                                        }
                                    }
                                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Prefix = 3U;
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                    if ((2U == (7U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    } else if ((3U 
                                                == 
                                                (7U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc 
                                            = (7U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                        vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__F 
                                            = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                        vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__Vfuncout 
                                            = (1U & 
                                               ((4U 
                                                 & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__F) 
                                                    >> 2U))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__F)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__F) 
                                                    >> 6U))))));
                                        if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__Vfuncout) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                        } else {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                        }
                                    } else if ((4U 
                                                == 
                                                (7U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                    } else if ((5U 
                                                == 
                                                (7U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                                    }
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SetEI = 1U;
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((2U == (7U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    } else if ((3U 
                                                == 
                                                (7U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc 
                                            = (7U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__F 
                                            = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                        vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout 
                                            = (1U & 
                                               ((4U 
                                                 & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__F) 
                                                    >> 2U))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__F)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__F) 
                                                    >> 6U))))));
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump 
                                            = vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout;
                                    }
                                }
                            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 6U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDSPHL = 1U;
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc 
                                        = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U));
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__F 
                                        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout 
                                        = (1U & ((4U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__F) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__F) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__F) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__F) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                    ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__F)
                                                    : 
                                                   (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__F)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__F) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__F) 
                                                     >> 6U))))));
                                    if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    } else {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                                    }
                                } else if ((2U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((3U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((1U == (7U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else if ((2U 
                                                == 
                                                (7U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                    } else if ((3U 
                                                == 
                                                (7U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                                    }
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                    if ((2U == (7U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                            = ((8U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                                    }
                                }
                            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                            ? 7U : 
                                           ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                            << 1U));
                                } else if ((2U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                            ? 0xbU : 
                                           (1U | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                                  << 1U)));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                } else if ((3U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                }
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((3U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc 
                                        = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__F 
                                        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout 
                                        = (1U & ((4U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__F) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__F) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__F) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__F) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                    ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__F)
                                                    : 
                                                   (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__F)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__F) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__F) 
                                                     >> 6U))))));
                                    if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    }
                                } else if ((4U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                } else if ((5U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SetDI = 1U;
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((3U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc 
                                        = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__F 
                                        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout 
                                        = (1U & ((4U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__F) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__F) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__F) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__F) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                    ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__F)
                                                    : 
                                                   (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__F)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__F) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__F) 
                                                     >> 6U))))));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump 
                                        = vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout;
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                        ? 0xbU : ((8U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                                  | (1U 
                                                     | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                                        << 1U))));
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                        ? 7U : ((8U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                                | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                                   << 1U)));
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc 
                                    = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U));
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__F 
                                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout 
                                    = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__F) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__F)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__F) 
                                                    >> 6U))))));
                                if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                                }
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((1U == (7U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else if ((2U 
                                                == 
                                                (7U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                    } else if ((3U 
                                                == 
                                                (7U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                                    }
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                    if ((2U == (7U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                            = ((8U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                                    }
                                }
                            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Prefix = 2U;
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((3U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc 
                                        = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__F 
                                        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout 
                                        = (1U & ((4U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__F) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__F) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__F) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__F) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                    ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__F)
                                                    : 
                                                   (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__F)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__F) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__F) 
                                                     >> 6U))))));
                                    if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    }
                                } else if ((4U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                } else if ((5U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH = 1U;
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((3U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc 
                                        = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__F 
                                        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout 
                                        = (1U & ((4U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__F) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__F) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__F) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__F) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                    ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__F)
                                                    : 
                                                   (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__F)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__F) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__F) 
                                                     >> 6U))))));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump 
                                        = vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout;
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpXY = 1U;
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc 
                                    = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U));
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__F 
                                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout 
                                    = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__F) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__F)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__F) 
                                                    >> 6U))))));
                                if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                                }
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else if ((2U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                } else if ((3U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                                }
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                        ? 7U : ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                                << 1U));
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                        ? 0xbU : (1U 
                                                  | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                                     << 1U)));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc 
                                    = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__F 
                                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout 
                                    = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__F) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__F)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__F) 
                                                    >> 6U))))));
                                if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                }
                            } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                            } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To = 4U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 4U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                            } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc 
                                    = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__F 
                                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout 
                                    = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__F) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__F)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__F) 
                                                    >> 6U))))));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump 
                                    = vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                    ? 0xbU : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                              | (1U 
                                                 | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                                    << 1U))));
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                    ? 7U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                               << 1U)));
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc 
                                = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U));
                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__F 
                                = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout 
                                = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                          ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__F) 
                                                  >> 7U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__F) 
                                                   >> 7U)))
                                              : ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__F) 
                                                  >> 2U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__F) 
                                                   >> 2U))))
                                          : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                                  ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__F)
                                                  : 
                                                 (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__F)))
                                              : ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__F) 
                                                  >> 6U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__F) 
                                                   >> 6U))))));
                            if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                            }
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((1U == (7U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else if ((2U 
                                                == 
                                                (7U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                    } else if ((3U 
                                                == 
                                                (7U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                                    }
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                    if ((2U == (7U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                            = ((8U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                                    }
                                }
                            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Prefix = 3U;
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((3U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc 
                                        = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__F 
                                        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout 
                                        = (1U & ((4U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__F) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__F) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__F) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__F) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                    ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__F)
                                                    : 
                                                   (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__F)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__F) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__F) 
                                                     >> 6U))))));
                                    if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    }
                                } else if ((4U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                } else if ((5U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                } else if ((3U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((3U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc 
                                        = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__F 
                                        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout 
                                        = (1U & ((4U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__F) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__F) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__F) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__F) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                    ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__F)
                                                    : 
                                                   (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__F)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__F) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__F) 
                                                     >> 6U))))));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump 
                                        = vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout;
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRS = 1U;
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc 
                                    = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U));
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__F 
                                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout 
                                    = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__F) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__F)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__F) 
                                                    >> 6U))))));
                                if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                                }
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else if ((2U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                } else if ((3U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                                }
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                        ? 7U : ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                                << 1U));
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                        ? 0xbU : (1U 
                                                  | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                                     << 1U)));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc 
                                    = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__F 
                                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout 
                                    = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__F) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__F)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__F) 
                                                    >> 6U))))));
                                if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                }
                            } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                            } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc 
                                    = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__F 
                                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout 
                                    = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__F) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__F)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__F) 
                                                    >> 6U))))));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump 
                                    = vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                    ? 0xbU : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                              | (1U 
                                                 | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                                    << 1U))));
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                    ? 7U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                               << 1U)));
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc 
                                = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U));
                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__F 
                                = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout 
                                = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                          ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__F) 
                                                  >> 7U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__F) 
                                                   >> 7U)))
                                              : ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__F) 
                                                  >> 2U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__F) 
                                                   >> 2U))))
                                          : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                                  ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__F)
                                                  : 
                                                 (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__F)))
                                              : ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__F) 
                                                  >> 6U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__F) 
                                                   >> 6U))))));
                            if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                            }
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else if ((2U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                } else if ((3U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                                }
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                            } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                            } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc 
                                    = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__F 
                                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout 
                                    = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__F) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__F)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__F) 
                                                    >> 6U))))));
                                if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                }
                            } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                            } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Prefix = 1U;
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc 
                                    = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__F 
                                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout 
                                    = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__F) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__F)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__F) 
                                                    >> 6U))))));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump 
                                    = vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc 
                                = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U));
                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__F 
                                = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout 
                                = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                          ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__F) 
                                                  >> 7U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__F) 
                                                   >> 7U)))
                                              : ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__F) 
                                                  >> 2U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__F) 
                                                   >> 2U))))
                                          : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                                  ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__F)
                                                  : 
                                                 (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__F)))
                                              : ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__F) 
                                                  >> 6U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__F) 
                                                   >> 6U))))));
                            if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                            }
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                    ? 7U : ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                            << 1U));
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                    ? 0xbU : (1U | 
                                              ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                               << 1U)));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc 
                                = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__F 
                                = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout 
                                = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                          ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__F) 
                                                  >> 7U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__F) 
                                                   >> 7U)))
                                              : ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__F) 
                                                  >> 2U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__F) 
                                                   >> 2U))))
                                          : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                  ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__F)
                                                  : 
                                                 (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__F)))
                                              : ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__F) 
                                                  >> 6U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__F) 
                                                   >> 6U))))));
                            if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            }
                        } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                        } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc 
                                = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__F 
                                = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout 
                                = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                          ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__F) 
                                                  >> 7U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__F) 
                                                   >> 7U)))
                                              : ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__F) 
                                                  >> 2U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__F) 
                                                   >> 2U))))
                                          : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                  ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__F)
                                                  : 
                                                 (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__F)))
                                              : ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__F) 
                                                  >> 6U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__F) 
                                                   >> 6U))))));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump 
                                = vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                ? 0xbU : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                          | (1U | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                                   << 1U))));
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                ? 7U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                        | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                           << 1U)));
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc 
                            = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 3U));
                        vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__F 
                            = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                        vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout 
                            = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                      ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                          ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                              ? ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__F) 
                                                 >> 7U)
                                              : (~ 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__F) 
                                                  >> 7U)))
                                          : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                              ? ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__F) 
                                                 >> 2U)
                                              : (~ 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__F) 
                                                  >> 2U))))
                                      : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                          ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                              ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__F)
                                              : (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__F)))
                                          : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                              ? ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__F) 
                                                 >> 6U)
                                              : (~ 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__F) 
                                                  >> 6U))))));
                        if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                        }
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                        }
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                       | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
            }
        } else if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                    if ((1U == (7U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                    } else if ((2U 
                                                == 
                                                (7U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = ((8U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS;
                                } else if ((2U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                }
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Halt = 1U;
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS;
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                       | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                       | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
            }
        } else if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_CCF = 1U;
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 6U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                                = (0xcU | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair));
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (1U | (6U 
                                                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U))))
                                    : 8U);
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 3U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((9U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))
                                    : 9U);
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                            }
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpE = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_SCF = 1U;
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 6U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                            = (4U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair));
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 2U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                        } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                ? 8U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                        | (1U | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                                 << 1U))));
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                ? 9U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                        | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                           << 1U)));
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        }
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpE = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_CPL = 1U;
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 6U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                            = (0xcU | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair));
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                        } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))))
                                : 8U);
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 3U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((9U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)))
                                : 9U);
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                      >> 6U)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        }
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpE = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xcU;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 6U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                        = (4U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair));
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                    if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 5U;
                    } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 4U;
                    } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                            ? 8U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                    | (1U | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                             << 1U))));
                } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                            ? 9U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                    | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                       << 1U)));
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    }
                } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpE = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                }
            }
        } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 6U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                            = (0xcU | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair));
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 1U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))))
                                : 8U);
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 3U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((9U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)))
                                : 9U);
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpE = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 6U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                        = (4U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair));
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 2U;
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                            ? 8U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                    | (1U | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                             << 1U))));
                } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                            ? 9U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                    | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                       << 1U)));
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpE = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                }
            }
        } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 6U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                        = (0xcU | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair));
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (5U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                           >> 4U))) 
                             | (1U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))) 
                            | (2U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 4U))))
                            ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (1U | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U))))
                            : 8U);
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 3U;
                } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (4U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                           >> 4U))) 
                             | (1U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))) 
                            | (2U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 4U))))
                            ? ((9U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U))) : 9U);
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeAF = 1U;
            }
        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                       | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                       | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
            }
        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 6U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                    = (4U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair));
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 2U;
                } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                }
            }
        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                        ? 8U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                | (1U | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                         << 1U))));
            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                        ? 9U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                   << 1U)));
            }
        } else if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
            }
        } else if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
            } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
            } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
            }
        }
    } else if ((1U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
               | (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)));
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
               | (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)));
        if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XY_State))) {
                                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XYbit_undoc = 1U;
                                if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                                     | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                } else if ((2U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                                } else if ((3U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                                 | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    } else if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XY_State))) {
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XYbit_undoc = 1U;
                        if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                             | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        }
                    }
                } else if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XY_State))) {
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XYbit_undoc = 1U;
                    if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                         | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XY_State))) {
                            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XYbit_undoc = 1U;
                            if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                                 | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                             | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        }
                    }
                } else if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XY_State))) {
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XYbit_undoc = 1U;
                    if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                         | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                    }
                }
            } else if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XY_State))) {
                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XYbit_undoc = 1U;
                if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                     | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                }
            }
        } else if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XY_State))) {
                            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XYbit_undoc = 1U;
                            if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                                 | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                             | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                        }
                    }
                } else if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XY_State))) {
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XYbit_undoc = 1U;
                    if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                         | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                    }
                }
            } else if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XY_State))) {
                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XYbit_undoc = 1U;
                if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                     | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                }
            }
        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XY_State))) {
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XYbit_undoc = 1U;
                        if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                             | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        }
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                         | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                    }
                }
            } else if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XY_State))) {
                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XYbit_undoc = 1U;
                if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                     | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                }
            }
        } else if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XY_State))) {
            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
            }
        } else {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XYbit_undoc = 1U;
            if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                 | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
            }
        }
    } else if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To = 0U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 3U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                                    = ((7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16)) 
                                       | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)));
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                        ? 0xeU : 6U);
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BTR = 1U;
                            } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To = 0U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 3U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                                    = ((7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16)) 
                                       | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)));
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                        ? 0xeU : 6U);
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BTR = 1U;
                            } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xcU;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 7U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? 0xeU : 6U);
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                        } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xcU;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? 0xeU : 6U);
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BT = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? 0xdU : 5U);
                        } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                        }
                    }
                }
            }
        }
    } else if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
        if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                } else if ((2U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((3U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                }
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                            } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((3U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))
                                        ? 8U : ((8U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                                | (1U 
                                                   | (6U 
                                                      & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                         >> 3U)))));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((3U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))
                                        ? 9U : ((8U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                                | (6U 
                                                   & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U))));
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = (5U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((((0U == (3U 
                                                 & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                    >> 4U))) 
                                         | (1U == (3U 
                                                   & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 4U)))) 
                                        | (2U == (3U 
                                                  & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                     >> 4U))))
                                        ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (1U | 
                                              (6U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U))))
                                        : 8U);
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 3U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = (4U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((((0U == (3U 
                                                 & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                    >> 4U))) 
                                         | (1U == (3U 
                                                   & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 4U)))) 
                                        | (2U == (3U 
                                                  & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                     >> 4U))))
                                        ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (6U & 
                                              ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U)))
                                        : 9U);
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)));
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = (8U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To));
                            }
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                            if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)));
                            }
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IMode 
                            = ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))
                                ? 2U : 1U);
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 8U : (1U | (6U 
                                                  & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                     >> 3U))));
                        } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 9U : (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)));
                        } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (1U | (6U 
                                                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U))))
                                    : 8U);
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 3U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((9U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))
                                    : 9U);
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = (8U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To));
                        }
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                        if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)));
                        }
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = (6U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xdU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RLD = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IMode = 0U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                        } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 8U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | (1U | 
                                               (6U 
                                                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 9U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | (6U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U))));
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (1U | (6U 
                                                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U))))
                                    : 8U);
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 3U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))
                                    : 9U);
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = (8U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To));
                        }
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                        if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)));
                        }
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = (6U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xeU;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RRD = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IMode = 0U;
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                    if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))
                                ? 8U : (1U | (6U & 
                                              ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U))));
                    } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))
                                ? 9U : (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)));
                    } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))))
                                : 8U);
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 3U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((9U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)))
                                : 9U);
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                    >> 3U)));
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = (8U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To));
                    }
                } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
                } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                    if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                    }
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
                }
            }
        } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD = 5U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IMode = 2U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                        } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 8U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | (1U | 
                                               (6U 
                                                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 9U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | (6U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U))));
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (1U | (6U 
                                                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U))))
                                    : 8U);
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 3U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))
                                    : 9U);
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = (8U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To));
                        }
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                        if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)));
                        }
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD = 4U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IMode = 1U;
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                    if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))
                                ? 8U : (1U | (6U & 
                                              ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U))));
                    } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))
                                ? 9U : (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)));
                    } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))))
                                : 8U);
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 3U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((9U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)))
                                : 9U);
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                    >> 3U)));
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = (8U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To));
                    }
                } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
                } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                    if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                    }
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
                }
            }
        } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD = 7U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IMode = 0U;
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                    if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                    } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))
                                ? 8U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                        | (1U | (6U 
                                                 & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                    >> 3U)))));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                    } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))
                                ? 9U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                        | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U))));
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))))
                                : 8U);
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 3U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)))
                                : 9U);
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                    >> 3U)));
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = (8U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To));
                    }
                } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
                } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                    if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                    }
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
                }
            }
        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD = 6U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IMode = 0U;
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
            }
        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 4U))) ? 8U
                            : (1U | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                           >> 3U))));
                } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 4U))) ? 9U
                            : (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 3U)));
                } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (5U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                           >> 4U))) 
                             | (1U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))) 
                            | (2U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 4U))))
                            ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (1U | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U))))
                            : 8U);
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 3U;
                } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (4U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                           >> 4U))) 
                             | (1U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))) 
                            | (2U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 4U))))
                            ? ((9U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U))) : 9U);
                }
            }
        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                       | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                >> 3U)));
                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 3U)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = (8U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To));
                }
            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
            }
        } else {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 3U)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                    >> 3U)));
                }
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
            }
        }
    }
    if ((6U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
        if (((0x36U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB)) 
             | (0xcbU == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB)))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 7U;
        }
    }
    if ((7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
        if ((1U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
        }
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
            = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS;
        if (((0x36U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB)) 
             | (1U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet)))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
        } else {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
        }
    }
    vlTOPp->top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n 
        = (1U & (~ (IData)(vlTOPp->reset)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT____Vcellinp__i_tv80_core__cen 
        = ((IData)(vlTOPp->top__DOT__zx81a__DOT__ce_cpu_p) 
           & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__cen_pol)));
    vlTOPp->top__DOT__zx81a__DOT__nHALT = (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Halt_FF)));
    vlTOPp->top__DOT__zx81a__DOT__shifter_start = (
                                                   ((((IData)(vlTOPp->top__DOT__zx81a__DOT__nMREQ) 
                                                      & (IData)(vlTOPp->top__DOT__zx81a__DOT__nopgen_store)) 
                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__ce_cpu_p)) 
                                                    & (IData)(vlTOPp->top__DOT__zx81a__DOT__shifter_en)) 
                                                   & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__NMIlatch)));
    vlTOPp->top__DOT__zx81a__DOT__nNMI = (1U & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__NMIlatch)) 
                                                | (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__hsync))));
    vlTOPp->top__DOT__ioctl_wait = vlTOPp->ioctl_wait;
    vlTOPp->top__DOT__mod = (1U & (IData)(vlTOPp->top__DOT____Vcellout__zx81a__mod));
    vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__shift = 
        (1U & (IData)(vlTOPp->top__DOT____Vcellout__zx81a__mod));
    vlTOPp->top__DOT__zx81a__DOT__mod = vlTOPp->top__DOT____Vcellout__zx81a__mod;
    vlTOPp->top__DOT__zx81a__DOT____Vcellinp__chroma81__wren_a 
        = (((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nWR)) 
            & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nMREQ))) 
           & (IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_e));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__rfsh_n 
        = vlTOPp->top__DOT__zx81a__DOT__nRFSH;
    vlTOPp->top__DOT__zx81a__DOT__rom_a = (0x1fffU 
                                           & ((IData)(vlTOPp->top__DOT__zx81a__DOT__nRFSH)
                                               ? (IData)(vlTOPp->top__DOT__zx81a__DOT__addr)
                                               : ((0x1e00U 
                                                   & ((((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                        >> 9U) 
                                                       + 
                                                       (1U 
                                                        & ((((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                             >> 0xdU) 
                                                            & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ram_data_latch) 
                                                               >> 7U)) 
                                                           & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                              >> 8U)))) 
                                                      << 9U)) 
                                                  | ((0x1f8U 
                                                      & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ram_data_latch) 
                                                         << 3U)) 
                                                     | (IData)(vlTOPp->top__DOT__zx81a__DOT__row_counter)))));
    vlTOPp->top__DOT__zx81a__DOT__data_latch_enable 
        = (((IData)(vlTOPp->top__DOT__zx81a__DOT__nRFSH) 
            & (IData)(vlTOPp->top__DOT__zx81a__DOT__ce_cpu_p)) 
           & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nMREQ)));
    vlTOPp->top__DOT__zx81a__DOT__qs_e = ((IData)(vlTOPp->top__DOT__zx81a__DOT__nRFSH)
                                           ? (0x21U 
                                              == (0x3fU 
                                                  & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                     >> 0xaU)))
                                           : ((IData)(vlTOPp->top__DOT__zx81a__DOT__qs) 
                                              & (0xfU 
                                                 == 
                                                 (0x7fU 
                                                  & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                     >> 9U)))));
    vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__Fn = vlTOPp->top__DOT__zx81a__DOT__Fn;
    vlTOPp->top__DOT__FnReset = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__Fn) 
                                       >> 0xaU));
    vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__ps2_key 
        = vlTOPp->top__DOT__zx81a__DOT__ps2_key;
    vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__ps2_key 
        = vlTOPp->top__DOT__zx81a__DOT__ps2_key;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__reset_n 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__reset_n;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__busrq_n 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__busrq_n;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__busrq_n 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__busrq_n;
    vlTOPp->top__DOT__zx81a__DOT__psg_ch_a = vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable
        [vlTOPp->top__DOT__zx81a__DOT__psg__DOT__A];
    vlTOPp->top__DOT__zx81a__DOT__psg_ch_c = vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable
        [vlTOPp->top__DOT__zx81a__DOT__psg__DOT__C];
    vlTOPp->top__DOT__zx81a__DOT__psg_ch_b = vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable
        [vlTOPp->top__DOT__zx81a__DOT__psg__DOT__B];
    vlTOPp->top__DOT__zx81a__DOT__ioctl_download = vlTOPp->top__DOT__ioctl_download;
    vlTOPp->top__DOT__zx81a__DOT__ioctl_wr = vlTOPp->top__DOT__ioctl_wr;
    vlTOPp->top__DOT__zx81a__DOT__ioctl_addr = vlTOPp->top__DOT__ioctl_addr;
    vlTOPp->top__DOT__zx81a__DOT__ioctl_index = vlTOPp->top__DOT__ioctl_index;
    vlTOPp->top__DOT__zx81a__DOT__locked = vlTOPp->top__DOT__reset;
    vlTOPp->top__DOT__zx81a__DOT__reset = vlTOPp->top__DOT__reset;
    vlTOPp->top__DOT__zx81a__DOT__ioctl_dout = vlTOPp->top__DOT__ioctl_dout;
    vlTOPp->top__DOT__zx81a__DOT__clk_sys = vlTOPp->top__DOT__clk_48;
    vlTOPp->top__DOT__zx81a__DOT__rom__DOT__wren_b 
        = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__rom__wren_b;
    vlTOPp->top__DOT__zx81a__DOT__chroma81__DOT__wren_b 
        = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__chroma81__wren_b;
    vlTOPp->top__DOT__zx81a__DOT__qschrs__DOT__wren_b 
        = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__qschrs__wren_b;
    vlTOPp->top__DOT__zx81a__DOT__joyzx = ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlTOPp->top__DOT__jsel) 
                                                          >> 1U)))) 
                                           & ((0x10U 
                                               & ((IData)(vlTOPp->top__DOT__zx81a__DOT__joy) 
                                                  << 2U)) 
                                              | ((8U 
                                                  & (IData)(vlTOPp->top__DOT__zx81a__DOT__joy)) 
                                                 | ((4U 
                                                     & ((IData)(vlTOPp->top__DOT__zx81a__DOT__joy) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & (IData)(vlTOPp->top__DOT__zx81a__DOT__joy)) 
                                                       | (1U 
                                                          & ((IData)(vlTOPp->top__DOT__zx81a__DOT__joy) 
                                                             >> 4U)))))));
    vlTOPp->top__DOT__zx81a__DOT__joys1 = ((- (IData)((IData)(vlTOPp->top__DOT__jsel))) 
                                           & ((0x18U 
                                               & ((IData)(vlTOPp->top__DOT__zx81a__DOT__joy) 
                                                  << 3U)) 
                                              | ((4U 
                                                  & (IData)(vlTOPp->top__DOT__zx81a__DOT__joy)) 
                                                 | ((2U 
                                                     & ((IData)(vlTOPp->top__DOT__zx81a__DOT__joy) 
                                                        >> 2U)) 
                                                    | (1U 
                                                       & ((IData)(vlTOPp->top__DOT__zx81a__DOT__joy) 
                                                          >> 4U))))));
    vlTOPp->top__DOT__zx81a__DOT__joyc1 = ((- (IData)(
                                                      (1U 
                                                       & (~ (IData)(vlTOPp->top__DOT__jsel))))) 
                                           & ((0x10U 
                                               & ((IData)(vlTOPp->top__DOT__zx81a__DOT__joy) 
                                                  << 2U)) 
                                              | ((8U 
                                                  & (IData)(vlTOPp->top__DOT__zx81a__DOT__joy)) 
                                                 | ((4U 
                                                     & ((IData)(vlTOPp->top__DOT__zx81a__DOT__joy) 
                                                        << 2U)) 
                                                    | (1U 
                                                       & ((IData)(vlTOPp->top__DOT__zx81a__DOT__joy) 
                                                          >> 4U))))));
    vlTOPp->top__DOT__zx81a__DOT__joyc2 = (0x10U & 
                                           ((- (IData)(
                                                       (1U 
                                                        & (~ (IData)(vlTOPp->top__DOT__jsel))))) 
                                            & ((IData)(vlTOPp->top__DOT__zx81a__DOT__joy) 
                                               << 3U)));
    vlTOPp->top__DOT__zx81a__DOT__joyzx = ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlTOPp->top__DOT__jsel) 
                                                          >> 1U)))) 
                                           & ((0x10U 
                                               & ((IData)(vlTOPp->top__DOT__zx81a__DOT__joy) 
                                                  << 2U)) 
                                              | ((8U 
                                                  & (IData)(vlTOPp->top__DOT__zx81a__DOT__joy)) 
                                                 | ((4U 
                                                     & ((IData)(vlTOPp->top__DOT__zx81a__DOT__joy) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & (IData)(vlTOPp->top__DOT__zx81a__DOT__joy)) 
                                                       | (1U 
                                                          & ((IData)(vlTOPp->top__DOT__zx81a__DOT__joy) 
                                                             >> 4U)))))));
    vlTOPp->top__DOT__zx81a__DOT__joys1 = ((- (IData)((IData)(vlTOPp->top__DOT__jsel))) 
                                           & ((0x18U 
                                               & ((IData)(vlTOPp->top__DOT__zx81a__DOT__joy) 
                                                  << 3U)) 
                                              | ((4U 
                                                  & (IData)(vlTOPp->top__DOT__zx81a__DOT__joy)) 
                                                 | ((2U 
                                                     & ((IData)(vlTOPp->top__DOT__zx81a__DOT__joy) 
                                                        >> 2U)) 
                                                    | (1U 
                                                       & ((IData)(vlTOPp->top__DOT__zx81a__DOT__joy) 
                                                          >> 4U))))));
    vlTOPp->top__DOT__zx81a__DOT__joyc1 = ((- (IData)(
                                                      (1U 
                                                       & (~ (IData)(vlTOPp->top__DOT__jsel))))) 
                                           & ((0x10U 
                                               & ((IData)(vlTOPp->top__DOT__zx81a__DOT__joy) 
                                                  << 2U)) 
                                              | ((8U 
                                                  & (IData)(vlTOPp->top__DOT__zx81a__DOT__joy)) 
                                                 | ((4U 
                                                     & ((IData)(vlTOPp->top__DOT__zx81a__DOT__joy) 
                                                        << 2U)) 
                                                    | (1U 
                                                       & ((IData)(vlTOPp->top__DOT__zx81a__DOT__joy) 
                                                          >> 4U))))));
    vlTOPp->top__DOT__zx81a__DOT__joyc2 = (0x10U & 
                                           ((- (IData)(
                                                       (1U 
                                                        & (~ (IData)(vlTOPp->top__DOT__jsel))))) 
                                            & ((IData)(vlTOPp->top__DOT__zx81a__DOT__joy) 
                                               << 3U)));
    vlTOPp->top__DOT__zx81a__DOT__VSync = vlTOPp->top__DOT__VGA_HS;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOCH 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCH;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOCL 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCL;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusC 
        = (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCH) 
            << 8U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCL));
    if ((8U == (0xfffffff8U & ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                                      >> 3U)) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                                  << 1U) 
                                                 | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out)))))) {
        vlTOPp->top__DOT__r = 0U;
    } else if ((0U == (0xfffffffcU & ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                                             >> 3U)) 
                                      | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out)))))) {
        vlTOPp->top__DOT__r = vlTOPp->top__DOT__zx81a__DOT__video_out;
    } else if ((6U == (0xfffffffeU & ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                                             >> 3U)) 
                                      | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out)))))) {
        vlTOPp->top__DOT__r = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                                     >> 1U));
    } else if ((5U == ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                              >> 3U)) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out))))) {
        vlTOPp->top__DOT__r = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__attr) 
                                     >> 5U));
    } else if ((4U == ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                              >> 3U)) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out))))) {
        vlTOPp->top__DOT__r = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__attr) 
                                     >> 1U));
    }
    if ((8U == (0xfffffff8U & ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                                      >> 3U)) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                                  << 1U) 
                                                 | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out)))))) {
        vlTOPp->top__DOT__g = 0U;
    } else if ((0U == (0xfffffffcU & ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                                             >> 3U)) 
                                      | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out)))))) {
        vlTOPp->top__DOT__g = vlTOPp->top__DOT__zx81a__DOT__video_out;
    } else if ((6U == (0xfffffffeU & ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                                             >> 3U)) 
                                      | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out)))))) {
        vlTOPp->top__DOT__g = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                                     >> 2U));
    } else if ((5U == ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                              >> 3U)) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out))))) {
        vlTOPp->top__DOT__g = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__attr) 
                                     >> 6U));
    } else if ((4U == ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                              >> 3U)) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out))))) {
        vlTOPp->top__DOT__g = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__attr) 
                                     >> 2U));
    }
    if ((8U == (0xfffffff8U & ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                                      >> 3U)) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                                  << 1U) 
                                                 | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out)))))) {
        vlTOPp->top__DOT__b = 0U;
    } else if ((0U == (0xfffffffcU & ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                                             >> 3U)) 
                                      | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out)))))) {
        vlTOPp->top__DOT__b = vlTOPp->top__DOT__zx81a__DOT__video_out;
    } else if ((6U == (0xfffffffeU & ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                                             >> 3U)) 
                                      | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out)))))) {
        vlTOPp->top__DOT__b = (1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat));
    } else if ((5U == ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                              >> 3U)) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out))))) {
        vlTOPp->top__DOT__b = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__attr) 
                                     >> 4U));
    } else if ((4U == ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                              >> 3U)) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out))))) {
        vlTOPp->top__DOT__b = (1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__attr));
    }
    if ((8U == (0xfffffff8U & ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                                      >> 3U)) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                                  << 1U) 
                                                 | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out)))))) {
        vlTOPp->top__DOT__i = 0U;
    } else if ((0U == (0xfffffffcU & ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                                             >> 3U)) 
                                      | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out)))))) {
        vlTOPp->top__DOT__i = vlTOPp->top__DOT__zx81a__DOT__video_out;
    } else if ((6U == (0xfffffffeU & ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                                             >> 3U)) 
                                      | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out)))))) {
        vlTOPp->top__DOT__i = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                                     >> 3U));
    } else if ((5U == ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                              >> 3U)) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out))))) {
        vlTOPp->top__DOT__i = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__attr) 
                                     >> 7U));
    } else if ((4U == ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                              >> 3U)) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out))))) {
        vlTOPp->top__DOT__i = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__attr) 
                                     >> 3U));
    }
    vlTOPp->top__DOT__zx81a__DOT__HSync = vlTOPp->top__DOT__VGA_VS;
    vlTOPp->top__DOT__zx81a__DOT__tape_ready = vlTOPp->top__DOT__tape_ready;
    vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__key_data 
        = vlTOPp->top__DOT__zx81a__DOT__key_data;
    vlTOPp->top__DOT__zx81a__DOT__ramLo_e = ((IData)(
                                                     (0x2000U 
                                                      == 
                                                      (0x6000U 
                                                       & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr)))) 
                                             & (IData)(vlTOPp->top__DOT__zx81a__DOT__low16k_e));
    vlTOPp->top__DOT__zx81a__DOT__rom_e = (((IData)(
                                                    (0U 
                                                     == 
                                                     (0x6000U 
                                                      & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr)))) 
                                            & ((~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                   >> 0xcU)) 
                                               | (IData)(vlTOPp->top__DOT__zx81))) 
                                           & (IData)(vlTOPp->top__DOT__zx81a__DOT__low16k_e));
    vlTOPp->top__DOT__zx81a__DOT__hblank = vlTOPp->top__DOT__VGA_HB;
    vlTOPp->top__DOT__zx81a__DOT__vblank = vlTOPp->top__DOT__VGA_VB;
    vlTOPp->top__DOT__zx81a__DOT____Vcellinp__psg__BDIR 
        = ((IData)(vlTOPp->top__DOT__zx81a__DOT__psg_sel) 
           & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nWR)));
    vlTOPp->top__DOT__zx81a__DOT____Vcellinp__psg__BC 
        = ((IData)(vlTOPp->top__DOT__zx81a__DOT__psg_sel) 
           & ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                            >> 6U))) ^ (IData)(vlTOPp->top__DOT__zx81a__DOT__nWR)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__dout 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__dout;
    vlTOPp->top__DOT__zx81a__DOT__ram__DOT__data_a 
        = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__ram__data_a;
    vlTOPp->top__DOT__ce_pix = vlTOPp->ce_pix;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__m1_n 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__m1_n;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__busak_n 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__busak_n;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__intcycle_n 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__intcycle_n;
    vlTOPp->top__DOT__zx81a__DOT__ram_e = (1U & (((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                  >> 0xeU) 
                                                 | (IData)(vlTOPp->top__DOT__zx81a__DOT__ramHi_e)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__int_n = vlTOPp->top__DOT__zx81a__DOT__nINT;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mc 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__mcycle;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ts 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__tstate;
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
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycles 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Prefix 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Prefix;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_PC 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_WZ 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Acc 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Reg 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusB_To 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusA_To 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ALU_Op 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Save_ALU 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__PreserveC 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Arith16 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Jump 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpXY 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpXY;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Call 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__RstP 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__LDZ 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__LDW 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__LDSPHL 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDSPHL;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Special_LD 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeAF 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeAF;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRS 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRS;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_CPL 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_CPL;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_CCF 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_CCF;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_SCF 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_SCF;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RETN 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BT 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BT;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BC 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BC;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BTR 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BTR;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RLD 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RLD;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RRD 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RRD;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_INRC 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetDI 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SetDI;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetEI 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SetEI;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IMode 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IMode;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Halt 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Halt;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__stop 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_DJNZ 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ;
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
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRp 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IncDec_16 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeDH 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB 
        = (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH) 
            & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
               >> 3U)) ? (1U | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Alternate) 
                                << 2U)) : (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB_r));
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
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__cen 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT____Vcellinp__i_tv80_core__cen;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ClkEn 
        = ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT____Vcellinp__i_tv80_core__cen) 
           & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusAck)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__halt_n 
        = vlTOPp->top__DOT__zx81a__DOT__nHALT;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__nmi_n = vlTOPp->top__DOT__zx81a__DOT__nNMI;
    vlTOPp->top__DOT__zx81a__DOT__nWAIT = (1U & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nHALT)) 
                                                 | (IData)(vlTOPp->top__DOT__zx81a__DOT__nNMI)));
    vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__mod = vlTOPp->top__DOT__zx81a__DOT__mod;
    vlTOPp->top__DOT__zx81a__DOT__chroma81__DOT__wren_a 
        = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__chroma81__wren_a;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__rfsh_n 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__rfsh_n;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__rfsh_n 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__rfsh_n;
    vlTOPp->top__DOT__zx81a__DOT____Vcellinp__rom__address_a 
        = ((((IData)(vlTOPp->top__DOT__zx81) ? (1U 
                                                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__rom_a) 
                                                   >> 0xcU))
              : 2U) << 0xcU) | (0xfffU & (IData)(vlTOPp->top__DOT__zx81a__DOT__rom_a)));
    if (vlTOPp->top__DOT__zx81a__DOT__nRFSH) {
        vlTOPp->top__DOT__zx81a__DOT____Vcellinp__chroma81__address_a 
            = (0x3fffU & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr));
        vlTOPp->top__DOT__zx81a__DOT____Vcellinp__qschrs__address_a 
            = (0x3ffU & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr));
    } else {
        vlTOPp->top__DOT__zx81a__DOT____Vcellinp__chroma81__address_a 
            = (0x3fffU & ((0x200U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ram_data_latch) 
                                     << 2U)) | (0x1ffU 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__rom_a))));
        vlTOPp->top__DOT__zx81a__DOT____Vcellinp__qschrs__address_a 
            = (0x3ffU & ((0x200U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ram_data_latch) 
                                    << 2U)) | (0x1ffU 
                                               & (IData)(vlTOPp->top__DOT__zx81a__DOT__rom_a))));
    }
    vlTOPp->top__DOT__zx81a__DOT____Vcellinp__qschrs__wren_a 
        = (((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nWR)) 
            & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nMREQ))) 
           & (IData)(vlTOPp->top__DOT__zx81a__DOT__qs_e));
    vlTOPp->top__DOT__zx81a__DOT__FnReset = vlTOPp->top__DOT__FnReset;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__CHANNEL_A 
        = vlTOPp->top__DOT__zx81a__DOT__psg_ch_a;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__CHANNEL_C 
        = vlTOPp->top__DOT__zx81a__DOT__psg_ch_c;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__CHANNEL_B 
        = vlTOPp->top__DOT__zx81a__DOT__psg_ch_b;
    vlTOPp->top__DOT____Vcellout__zx81a__audio_l = 
        (0x3ffU & (((IData)(vlTOPp->top__DOT__zx81a__DOT__psg_ch_a) 
                    << 1U) + (IData)(vlTOPp->top__DOT__zx81a__DOT__psg_ch_b)));
    vlTOPp->top__DOT____Vcellout__zx81a__audio_r = 
        (0x3ffU & (((IData)(vlTOPp->top__DOT__zx81a__DOT__psg_ch_c) 
                    << 1U) + (IData)(vlTOPp->top__DOT__zx81a__DOT__psg_ch_b)));
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__RESET = vlTOPp->top__DOT__zx81a__DOT__reset;
    vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__reset = vlTOPp->top__DOT__zx81a__DOT__reset;
    vlTOPp->top__DOT__zx81a__DOT__rom__DOT__data_b 
        = vlTOPp->top__DOT__zx81a__DOT__ioctl_dout;
    vlTOPp->top__DOT__zx81a__DOT__chroma81__DOT__data_b 
        = vlTOPp->top__DOT__zx81a__DOT__ioctl_dout;
    vlTOPp->top__DOT__zx81a__DOT__qschrs__DOT__data_b 
        = vlTOPp->top__DOT__zx81a__DOT__ioctl_dout;
    vlTOPp->top__DOT__zx81a__DOT__ram__DOT__clock = vlTOPp->top__DOT__zx81a__DOT__clk_sys;
    vlTOPp->top__DOT__zx81a__DOT__rom__DOT__clock = vlTOPp->top__DOT__zx81a__DOT__clk_sys;
    vlTOPp->top__DOT__zx81a__DOT__chroma81__DOT__clock 
        = vlTOPp->top__DOT__zx81a__DOT__clk_sys;
    vlTOPp->top__DOT__zx81a__DOT__qschrs__DOT__clock 
        = vlTOPp->top__DOT__zx81a__DOT__clk_sys;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__CLK = vlTOPp->top__DOT__zx81a__DOT__clk_sys;
    vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__clk_sys 
        = vlTOPp->top__DOT__zx81a__DOT__clk_sys;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__clk = vlTOPp->top__DOT__zx81a__DOT__clk_sys;
    vlTOPp->top__DOT__zx81a__DOT__joy_kbd = (0x1fU 
                                             & ((- (IData)((IData)(vlTOPp->top__DOT__zx81a__DOT__zxp_use))) 
                                                | (((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                                   >> 0xcU)))) 
                                                    | (~ 
                                                       (((IData)(vlTOPp->top__DOT__zx81a__DOT__joys1) 
                                                         | (IData)(vlTOPp->top__DOT__zx81a__DOT__joyc1)) 
                                                        | (IData)(vlTOPp->top__DOT__zx81a__DOT__joyzx)))) 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                                     >> 0xbU)))) 
                                                      | (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__joyc2))))));
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
    vlTOPp->top__DOT__zx81a__DOT__r = vlTOPp->top__DOT__r;
    vlTOPp->top__DOT__zx81a__DOT__g = vlTOPp->top__DOT__g;
    vlTOPp->top__DOT__zx81a__DOT__b = vlTOPp->top__DOT__b;
    vlTOPp->top__DOT__zx81a__DOT__i = vlTOPp->top__DOT__i;
    vlTOPp->top__DOT__VGA_R = (((IData)(vlTOPp->top__DOT__r) 
                                << 3U) | (7U & (- (IData)(
                                                          ((IData)(vlTOPp->top__DOT__i) 
                                                           & (IData)(vlTOPp->top__DOT__r))))));
    vlTOPp->top__DOT__VGA_G = (((IData)(vlTOPp->top__DOT__g) 
                                << 3U) | (7U & (- (IData)(
                                                          ((IData)(vlTOPp->top__DOT__i) 
                                                           & (IData)(vlTOPp->top__DOT__g))))));
    vlTOPp->top__DOT__VGA_B = (((IData)(vlTOPp->top__DOT__b) 
                                << 3U) | (7U & (- (IData)(
                                                          ((IData)(vlTOPp->top__DOT__i) 
                                                           & (IData)(vlTOPp->top__DOT__b))))));
    if ((0x20U == (0xffffffe0U & (((IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader) 
                                   << 5U) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__ramLo_e) 
                                              << 4U) 
                                             | (((IData)(vlTOPp->top__DOT__zx81a__DOT__mem_size) 
                                                 << 2U) 
                                                | (3U 
                                                   & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                      >> 0xeU)))))))) {
        vlTOPp->top__DOT__zx81a__DOT__ram_a = (0x4000U 
                                               | (0x3fffU 
                                                  & ((IData)(vlTOPp->top__DOT__zx81a__DOT__tape_type)
                                                      ? 
                                                     ((IData)(8U) 
                                                      + (IData)(vlTOPp->top__DOT__zx81a__DOT__tape_addr))
                                                      : 
                                                     ((IData)(vlTOPp->top__DOT__zx81a__DOT__tape_addr) 
                                                      - (IData)(1U)))));
    } else if ((0x10U == (0xfffffff0U & (((IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader) 
                                          << 5U) | 
                                         (((IData)(vlTOPp->top__DOT__zx81a__DOT__ramLo_e) 
                                           << 4U) | 
                                          (((IData)(vlTOPp->top__DOT__zx81a__DOT__mem_size) 
                                            << 2U) 
                                           | (3U & 
                                              ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                               >> 0xeU)))))))) {
        vlTOPp->top__DOT__zx81a__DOT__ram_a = (0x2000U 
                                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__rom_a));
    } else if ((0U == (0xfffffffcU & (((IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader) 
                                       << 5U) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__ramLo_e) 
                                                  << 4U) 
                                                 | (((IData)(vlTOPp->top__DOT__zx81a__DOT__mem_size) 
                                                     << 2U) 
                                                    | (3U 
                                                       & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                          >> 0xeU)))))))) {
        vlTOPp->top__DOT__zx81a__DOT__ram_a = (0x4000U 
                                               | (0x3ffU 
                                                  & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr)));
    } else if ((((4U == (0xfffffffcU & (((IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader) 
                                         << 5U) | (
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__ramLo_e) 
                                                    << 4U) 
                                                   | (((IData)(vlTOPp->top__DOT__zx81a__DOT__mem_size) 
                                                       << 2U) 
                                                      | (3U 
                                                         & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                            >> 0xeU))))))) 
                 | (8U == (0xfffffffaU & (((IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader) 
                                           << 5U) | 
                                          (((IData)(vlTOPp->top__DOT__zx81a__DOT__ramLo_e) 
                                            << 4U) 
                                           | (((IData)(vlTOPp->top__DOT__zx81a__DOT__mem_size) 
                                               << 2U) 
                                              | (3U 
                                                 & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                    >> 0xeU)))))))) 
                | (0xbU == (((IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader) 
                             << 5U) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__ramLo_e) 
                                        << 4U) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__mem_size) 
                                                   << 2U) 
                                                  | (3U 
                                                     & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                        >> 0xeU)))))))) {
        vlTOPp->top__DOT__zx81a__DOT__ram_a = (0x4000U 
                                               | (0x3fffU 
                                                  & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr)));
    } else if ((0xaU == (0xfffffffbU & (((IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader) 
                                         << 5U) | (
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__ramLo_e) 
                                                    << 4U) 
                                                   | (((IData)(vlTOPp->top__DOT__zx81a__DOT__mem_size) 
                                                       << 2U) 
                                                      | (3U 
                                                         & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                            >> 0xeU)))))))) {
        vlTOPp->top__DOT__zx81a__DOT__ram_a = (0x8000U 
                                               | (0x3fffU 
                                                  & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr)));
    } else if ((0xfU == (((IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader) 
                          << 5U) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__ramLo_e) 
                                     << 4U) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__mem_size) 
                                                << 2U) 
                                               | (3U 
                                                  & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                     >> 0xeU))))))) {
        vlTOPp->top__DOT__zx81a__DOT__ram_a = (0x4000U 
                                               | (((IData)(vlTOPp->top__DOT__zx81a__DOT__nM1) 
                                                   << 0xfU) 
                                                  | (0x3fffU 
                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr))));
    }
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__BDIR = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__psg__BDIR;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__BC = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__psg__BC;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__dout = 0xffU;
    if ((((~ (IData)(vlTOPp->top__DOT__zx81a__DOT____Vcellinp__psg__BDIR)) 
          & (IData)(vlTOPp->top__DOT__zx81a__DOT____Vcellinp__psg__BC)) 
         & (~ (IData)((0U != (0xfU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr) 
                                      >> 4U))))))) {
        if (((((((((0U == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr))) 
                   | (1U == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))) 
                  | (2U == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))) 
                 | (3U == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))) 
                | (4U == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))) 
               | (5U == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))) 
              | (6U == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))) 
             | (7U == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr))))) {
            vlTOPp->top__DOT__zx81a__DOT__psg__DOT__dout 
                = ((0U == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))
                    ? vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                   [0U] : ((1U == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))
                            ? (0xfU & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                               [1U]) : ((2U == (0xfU 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))
                                         ? vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                        [2U] : ((3U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))
                                                 ? 
                                                (0xfU 
                                                 & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                 [3U])
                                                 : 
                                                ((4U 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))
                                                  ? 
                                                 vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                 [4U]
                                                  : 
                                                 ((5U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))
                                                   ? 
                                                  (0xfU 
                                                   & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                   [5U])
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))
                                                    ? 
                                                   (0x1fU 
                                                    & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                    [6U])
                                                    : 
                                                   vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                   [7U])))))));
        } else if (((((((((8U == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr))) 
                          | (9U == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))) 
                         | (0xaU == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))) 
                        | (0xbU == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))) 
                       | (0xcU == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))) 
                      | (0xdU == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))) 
                     | (0xeU == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))) 
                    | (0xfU == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr))))) {
            vlTOPp->top__DOT__zx81a__DOT__psg__DOT__dout 
                = ((8U == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))
                    ? (0x1fU & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                       [8U]) : ((9U == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))
                                 ? (0x1fU & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                    [9U]) : ((0xaU 
                                              == (0xfU 
                                                  & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))
                                              ? (0x1fU 
                                                 & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                 [0xaU])
                                              : ((0xbU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))
                                                  ? 
                                                 vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                 [0xbU]
                                                  : 
                                                 ((0xcU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))
                                                   ? 
                                                  vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                  [0xcU]
                                                   : 
                                                  ((0xdU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))
                                                    ? 
                                                   (0xfU 
                                                    & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                    [0xdU])
                                                    : 
                                                   ((0xeU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))
                                                     ? 
                                                    ((0x40U 
                                                      & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                      [7U])
                                                      ? 
                                                     vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                     [0xeU]
                                                      : (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__IOA_in))
                                                     : 
                                                    ((0x80U 
                                                      & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                      [7U])
                                                      ? 
                                                     vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                     [0xfU]
                                                      : (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__IOB_in)))))))));
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__ce_pix = vlTOPp->top__DOT__ce_pix;
    vlTOPp->top__DOT__zx81a__DOT____Vcellinp__ram__wren_a 
        = (((((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nWR)) 
              & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nMREQ))) 
             & (IData)(vlTOPp->top__DOT__zx81a__DOT__ram_e)) 
            & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_e))) 
           | (IData)(vlTOPp->top__DOT__zx81a__DOT__tapewrite_we));
    vlTOPp->top__DOT__zx81a__DOT__mem_out = ((0x10U 
                                              == (0xfffffff0U 
                                                  & (((IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader) 
                                                      << 4U) 
                                                     | (((IData)(vlTOPp->top__DOT__zx81a__DOT__qs_e) 
                                                         << 3U) 
                                                        | (((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_e) 
                                                            << 2U) 
                                                           | (((IData)(vlTOPp->top__DOT__zx81a__DOT__rom_e) 
                                                               << 1U) 
                                                              | (IData)(vlTOPp->top__DOT__zx81a__DOT__ram_e)))))))
                                              ? ((6U 
                                                  >= 
                                                  (7U 
                                                   & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                      - 
                                                      ((IData)(vlTOPp->top__DOT__zx81)
                                                        ? 0x347U
                                                        : 0x207U))))
                                                  ? 
                                                 vlTOPp->top__DOT__zx81a__DOT__tape_loader_patch
                                                 [(7U 
                                                   & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                      - 
                                                      ((IData)(vlTOPp->top__DOT__zx81)
                                                        ? 0x347U
                                                        : 0x207U)))]
                                                  : 0U)
                                              : ((8U 
                                                  == 
                                                  (0xfffffff8U 
                                                   & (((IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader) 
                                                       << 4U) 
                                                      | (((IData)(vlTOPp->top__DOT__zx81a__DOT__qs_e) 
                                                          << 3U) 
                                                         | (((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_e) 
                                                             << 2U) 
                                                            | (((IData)(vlTOPp->top__DOT__zx81a__DOT__rom_e) 
                                                                << 1U) 
                                                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__ram_e)))))))
                                                  ? (IData)(vlTOPp->top__DOT__zx81a__DOT__qs_out)
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0xfffffffcU 
                                                    & (((IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader) 
                                                        << 4U) 
                                                       | (((IData)(vlTOPp->top__DOT__zx81a__DOT__qs_e) 
                                                           << 3U) 
                                                          | (((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_e) 
                                                              << 2U) 
                                                             | (((IData)(vlTOPp->top__DOT__zx81a__DOT__rom_e) 
                                                                 << 1U) 
                                                                | (IData)(vlTOPp->top__DOT__zx81a__DOT__ram_e)))))))
                                                   ? (IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_out)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0xfffffffeU 
                                                     & (((IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader) 
                                                         << 4U) 
                                                        | (((IData)(vlTOPp->top__DOT__zx81a__DOT__qs_e) 
                                                            << 3U) 
                                                           | (((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_e) 
                                                               << 2U) 
                                                              | (((IData)(vlTOPp->top__DOT__zx81a__DOT__rom_e) 
                                                                  << 1U) 
                                                                 | (IData)(vlTOPp->top__DOT__zx81a__DOT__ram_e)))))))
                                                    ? (IData)(vlTOPp->top__DOT__zx81a__DOT__rom_out)
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (((IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader) 
                                                       << 4U) 
                                                      | (((IData)(vlTOPp->top__DOT__zx81a__DOT__qs_e) 
                                                          << 3U) 
                                                         | (((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_e) 
                                                             << 2U) 
                                                            | (((IData)(vlTOPp->top__DOT__zx81a__DOT__rom_e) 
                                                                << 1U) 
                                                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__ram_e))))))
                                                     ? (IData)(vlTOPp->top__DOT__zx81a__DOT__ram_out)
                                                     : 0xffU)))));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__int_n 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__int_n;
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
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__NoRead 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__no_read;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Write 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__write;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__iorq;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__T_Res 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__last_tstate;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__AddrB 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBH 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB];
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBL 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB];
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__AddrA 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAH 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA];
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAL 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA];
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__CEN 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ClkEn;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__halt_n 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__halt_n;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__nmi_n 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__nmi_n;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__wait_n 
        = vlTOPp->top__DOT__zx81a__DOT__nWAIT;
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
    vlTOPp->top__DOT__zx81a__DOT__rom__DOT__address_a 
        = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__rom__address_a;
    vlTOPp->top__DOT__zx81a__DOT__chroma81__DOT__address_a 
        = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__chroma81__address_a;
    vlTOPp->top__DOT__zx81a__DOT__qschrs__DOT__address_a 
        = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__qschrs__address_a;
    vlTOPp->top__DOT__zx81a__DOT__qschrs__DOT__wren_a 
        = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__qschrs__wren_a;
    vlTOPp->top__DOT__zx81a__DOT__audio_l = vlTOPp->top__DOT____Vcellout__zx81a__audio_l;
    vlTOPp->top__DOT__audio_l = (1U & (IData)(vlTOPp->top__DOT____Vcellout__zx81a__audio_l));
    vlTOPp->top__DOT__zx81a__DOT__audio_r = vlTOPp->top__DOT____Vcellout__zx81a__audio_r;
    vlTOPp->top__DOT__audio_r = (1U & (IData)(vlTOPp->top__DOT____Vcellout__zx81a__audio_r));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__clk 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__clk;
    vlTOPp->VGA_R = vlTOPp->top__DOT__VGA_R;
    vlTOPp->VGA_G = vlTOPp->top__DOT__VGA_G;
    vlTOPp->VGA_B = vlTOPp->top__DOT__VGA_B;
    vlTOPp->top__DOT__zx81a__DOT__ram__DOT__address_a 
        = vlTOPp->top__DOT__zx81a__DOT__ram_a;
    vlTOPp->top__DOT__zx81a__DOT__psg_out = vlTOPp->top__DOT__zx81a__DOT__psg__DOT__dout;
    vlTOPp->top__DOT__zx81a__DOT__ram__DOT__wren_a 
        = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__ram__wren_a;
    vlTOPp->top__DOT__zx81a__DOT__nopgen = ((((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                              >> 0xfU) 
                                             & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__mem_out) 
                                                   >> 6U))) 
                                            & (IData)(vlTOPp->top__DOT__zx81a__DOT__nHALT));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOBH 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBH;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOBL 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBL;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusB 
        = (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBH) 
            << 8U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBL));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOAH 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAH;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOAL 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAL;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA 
        = (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAH) 
            << 8U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAL));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__wait_n 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__wait_n;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__WEH 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEH;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__WEL 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEL;
    vlTOPp->AUDIO_L = ((IData)(vlTOPp->top__DOT__audio_l) 
                       << 6U);
    vlTOPp->AUDIO_R = ((IData)(vlTOPp->top__DOT__audio_r) 
                       << 6U);
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__clk 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__clk;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__DO = vlTOPp->top__DOT__zx81a__DOT__psg_out;
    if ((8U == (0xfffffff8U & ((8U & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd_n)) 
                                      << 3U)) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__zxp_sel) 
                                                  << 2U) 
                                                 | (((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_sel) 
                                                     << 1U) 
                                                    | (IData)(vlTOPp->top__DOT__zx81a__DOT__psg_sel))))))) {
        vlTOPp->top__DOT__zx81a__DOT__io_dout = (((IData)(vlTOPp->top__DOT__tape_in) 
                                                  << 7U) 
                                                 | (((IData)(vlTOPp->top__DOT__hz50) 
                                                     << 6U) 
                                                    | ((IData)(vlTOPp->top__DOT__zx81a__DOT__key_data) 
                                                       & (IData)(vlTOPp->top__DOT__zx81a__DOT__joy_kbd))));
    } else if ((4U == (0xfffffffcU & ((8U & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd_n)) 
                                             << 3U)) 
                                      | (((IData)(vlTOPp->top__DOT__zx81a__DOT__zxp_sel) 
                                          << 2U) | 
                                         (((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_sel) 
                                           << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__psg_sel))))))) {
        vlTOPp->top__DOT__zx81a__DOT__io_dout = vlTOPp->top__DOT__zx81a__DOT__zxp_out;
    } else if ((2U == (0xfffffffeU & ((8U & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd_n)) 
                                             << 3U)) 
                                      | (((IData)(vlTOPp->top__DOT__zx81a__DOT__zxp_sel) 
                                          << 2U) | 
                                         (((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_sel) 
                                           << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__psg_sel))))))) {
        vlTOPp->top__DOT__zx81a__DOT__io_dout = 0xdfU;
    } else if ((1U == ((8U & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd_n)) 
                              << 3U)) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__zxp_sel) 
                                          << 2U) | 
                                         (((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_sel) 
                                           << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__psg_sel)))))) {
        vlTOPp->top__DOT__zx81a__DOT__io_dout = vlTOPp->top__DOT__zx81a__DOT__psg_out;
    } else if ((0U == ((8U & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd_n)) 
                              << 3U)) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__zxp_sel) 
                                          << 2U) | 
                                         (((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_sel) 
                                           << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__psg_sel)))))) {
        vlTOPp->top__DOT__zx81a__DOT__io_dout = 0xffU;
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ID16_B 
        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16))
            ? 0xffffU : 1U);
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ID16 
        = (0xffffU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA) 
                      + (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ID16_B)));
    vlTOPp->top__DOT__AUDIO_L = vlTOPp->AUDIO_L;
    vlTOPp->top__DOT__AUDIO_R = vlTOPp->AUDIO_R;
    vlTOPp->top__DOT__zx81a__DOT__cpu_din = ((1U == 
                                              (((IData)(vlTOPp->top__DOT__zx81a__DOT__nMREQ) 
                                                << 1U) 
                                               | (1U 
                                                  & (((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nM1)) 
                                                      | (IData)(vlTOPp->top__DOT__zx81a__DOT__nIORQ)) 
                                                     | (IData)(vlTOPp->top__DOT__zx81a__DOT__nRD)))))
                                              ? (((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nM1)) 
                                                  & (IData)(vlTOPp->top__DOT__zx81a__DOT__nopgen))
                                                  ? 0U
                                                  : (IData)(vlTOPp->top__DOT__zx81a__DOT__mem_out))
                                              : ((2U 
                                                  == 
                                                  (((IData)(vlTOPp->top__DOT__zx81a__DOT__nMREQ) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nM1)) 
                                                          | (IData)(vlTOPp->top__DOT__zx81a__DOT__nIORQ)) 
                                                         | (IData)(vlTOPp->top__DOT__zx81a__DOT__nRD)))))
                                                  ? (IData)(vlTOPp->top__DOT__zx81a__DOT__io_dout)
                                                  : 0xffU));
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
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__di = vlTOPp->top__DOT__zx81a__DOT__cpu_din;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DIL 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegDIL;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DIH 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegDIH;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__dinst 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__di;
}
