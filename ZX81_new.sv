//============================================================================
// 
//  Port to MiSTer.
//  Copyright (C) 2018,2019 Sorgelig
//
//  ZX80-ZX81 replica for MiST
//  Copyright (C) 2018 Szombathelyi Gyorgy
//
//  This program is free software; you can redistribute it and/or modify it
//  under the terms of the GNU General Public License as published by the Free
//  Software Foundation; either version 2 of the License, or (at your option)
//  any later version.
//
//  This program is distributed in the hope that it will be useful, but WITHOUT
//  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
//  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
//  more details.
//
//  You should have received a copy of the GNU General Public License along
//  with this program; if not, write to the Free Software Foundation, Inc.,
//  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//
//============================================================================

module emu
(
	//Master input clock
	input         CLK_50M,

	//Async reset from top-level module.
	//Can be used as initial reset.
	input         RESET,

	//Must be passed to hps_io module
	inout  [48:0] HPS_BUS,

	//Base video clock. Usually equals to CLK_SYS.
	output        CLK_VIDEO,

	//Multiple resolutions are supported using different CE_PIXEL rates.
	//Must be based on CLK_VIDEO
	output        CE_PIXEL,

	//Video aspect ratio for HDMI. Most retro systems have ratio 4:3.
	//if VIDEO_ARX[12] or VIDEO_ARY[12] is set then [11:0] contains scaled size instead of aspect ratio.
	output [12:0] VIDEO_ARX,
	output [12:0] VIDEO_ARY,

	output  [7:0] VGA_R,
	output  [7:0] VGA_G,
	output  [7:0] VGA_B,
	output        VGA_HS,
	output        VGA_VS,
	output        VGA_DE,    // = ~(VBlank | HBlank)
	output        VGA_F1,
	output [1:0]  VGA_SL,
	output        VGA_SCALER, // Force VGA scaler

	input  [11:0] HDMI_WIDTH,
	input  [11:0] HDMI_HEIGHT,
	output        HDMI_FREEZE,

`ifdef MISTER_FB
	// Use framebuffer in DDRAM (USE_FB=1 in qsf)
	// FB_FORMAT:
	//    [2:0] : 011=8bpp(palette) 100=16bpp 101=24bpp 110=32bpp
	//    [3]   : 0=16bits 565 1=16bits 1555
	//    [4]   : 0=RGB  1=BGR (for 16/24/32 modes)
	//
	// FB_STRIDE either 0 (rounded to 256 bytes) or multiple of pixel size (in bytes)
	output        FB_EN,
	output  [4:0] FB_FORMAT,
	output [11:0] FB_WIDTH,
	output [11:0] FB_HEIGHT,
	output [31:0] FB_BASE,
	output [13:0] FB_STRIDE,
	input         FB_VBL,
	input         FB_LL,
	output        FB_FORCE_BLANK,

`ifdef MISTER_FB_PALETTE
	// Palette control for 8bit modes.
	// Ignored for other video modes.
	output        FB_PAL_CLK,
	output  [7:0] FB_PAL_ADDR,
	output [23:0] FB_PAL_DOUT,
	input  [23:0] FB_PAL_DIN,
	output        FB_PAL_WR,
`endif
`endif

	output        LED_USER,  // 1 - ON, 0 - OFF.

	// b[1]: 0 - LED status is system status OR'd with b[0]
	//       1 - LED status is controled solely by b[0]
	// hint: supply 2'b00 to let the system control the LED.
	output  [1:0] LED_POWER,
	output  [1:0] LED_DISK,

	// I/O board button press simulation (active high)
	// b[1]: user button
	// b[0]: osd button
	output  [1:0] BUTTONS,

	input         CLK_AUDIO, // 24.576 MHz
	output [15:0] AUDIO_L,
	output [15:0] AUDIO_R,
	output        AUDIO_S,   // 1 - signed audio samples, 0 - unsigned
	output  [1:0] AUDIO_MIX, // 0 - no mix, 1 - 25%, 2 - 50%, 3 - 100% (mono)

	//ADC
	inout   [3:0] ADC_BUS,

	//SD-SPI
	output        SD_SCK,
	output        SD_MOSI,
	input         SD_MISO,
	output        SD_CS,
	input         SD_CD,

	//High latency DDR3 RAM interface
	//Use for non-critical time purposes
	output        DDRAM_CLK,
	input         DDRAM_BUSY,
	output  [7:0] DDRAM_BURSTCNT,
	output [28:0] DDRAM_ADDR,
	input  [63:0] DDRAM_DOUT,
	input         DDRAM_DOUT_READY,
	output        DDRAM_RD,
	output [63:0] DDRAM_DIN,
	output  [7:0] DDRAM_BE,
	output        DDRAM_WE,

	//SDRAM interface with lower latency
	output        SDRAM_CLK,
	output        SDRAM_CKE,
	output [12:0] SDRAM_A,
	output  [1:0] SDRAM_BA,
	inout  [15:0] SDRAM_DQ,
	output        SDRAM_DQML,
	output        SDRAM_DQMH,
	output        SDRAM_nCS,
	output        SDRAM_nCAS,
	output        SDRAM_nRAS,
	output        SDRAM_nWE,

`ifdef MISTER_DUAL_SDRAM
	//Secondary SDRAM
	//Set all output SDRAM_* signals to Z ASAP if SDRAM2_EN is 0
	input         SDRAM2_EN,
	output        SDRAM2_CLK,
	output [12:0] SDRAM2_A,
	output  [1:0] SDRAM2_BA,
	inout  [15:0] SDRAM2_DQ,
	output        SDRAM2_nCS,
	output        SDRAM2_nCAS,
	output        SDRAM2_nRAS,
	output        SDRAM2_nWE,
`endif

	input         UART_CTS,
	output        UART_RTS,
	input         UART_RXD,
	output        UART_TXD,
	output        UART_DTR,
	input         UART_DSR,

	// Open-drain User port.
	// 0 - D+/RX
	// 1 - D-/TX
	// 2..6 - USR2..USR6
	// Set USER_OUT to 1 to read from USER_IN.
	input   [6:0] USER_IN,
	output  [6:0] USER_OUT,

	input         OSD_STATUS
);

assign ADC_BUS  = 'Z;
assign USER_OUT = '1;
assign {UART_RTS, UART_TXD, UART_DTR} = 0;
assign {SDRAM_DQ, SDRAM_A, SDRAM_BA, SDRAM_CLK, SDRAM_CKE, SDRAM_DQML, SDRAM_DQMH, SDRAM_nWE, SDRAM_nCAS, SDRAM_nRAS, SDRAM_nCS} = 'Z;
assign {DDRAM_CLK, DDRAM_BURSTCNT, DDRAM_ADDR, DDRAM_DIN, DDRAM_BE, DDRAM_RD, DDRAM_WE} = 0;
assign {SD_SCK, SD_MOSI, SD_CS} = 'Z;

assign LED_USER  = ioctl_download | tape_ready;
assign LED_DISK  = 0;
assign LED_POWER = 0;
assign BUTTONS   = 0;
assign VGA_SCALER= 0;
assign HDMI_FREEZE = 0;

wire [1:0] ar = status[22:21];
wire       vcrop_en = status[23];
reg        en216p;
always @(posedge CLK_VIDEO) begin
	en216p <= ((HDMI_WIDTH == 1920) && (HDMI_HEIGHT == 1080) && !forced_scandoubler && !scale);
end

wire vga_de;
video_freak video_freak
(
	.*,
	.VGA_DE_IN(vga_de),
	.ARX((!ar) ? 12'd4 : (ar - 1'd1)),
	.ARY((!ar) ? 12'd3 : 12'd0),
	.CROP_SIZE((en216p & vcrop_en) ? (hz50 ? 10'd270 : 10'd216) : 10'd0),
	.CROP_OFF(0),
	.SCALE(status[25:24])
);

`include "build_id.v"
localparam CONF_STR = {
	"ZX81;;",
	"F,O  P  ,Load tape;",
	"-;",	
	"OT,Play,Off,On;",
	"-;",
	"OLM,Aspect ratio,Original,Full Screen,[ARC1],[ARC2];",
	"O6,Video frequency,50Hz,60Hz;",
	"O7,Inverse video,Off,On;",
	"O5,Black border,Off,On;",
	"OCD,Scandoubler Fx,None,HQ2x,CRT 25%,CRT 50%;",
	"-;",
	"d1ON,Vertical Crop,Disabled,216p/270p(5x);",
	"OOP,Scale,Normal,V-Integer,Narrower HV-Integer,Wider HV-Integer;",
	"-;",
	"O23,Stereo mix,none,25%,50%,100%;", 
	"-;",
	"O4,Model,ZX81,ZX80;",
	"OHI,Slow mode speed,Original,NoWait,x2,x8;",
	"OAB,Main RAM,16KB,32KB,48KB,1KB;",
	"OG,Low RAM,Off,8KB;",
	"D0OEF,CHR$128/UDG,128 Chars,64 Chars,Disabled;",
	"OJ,QS CHRS,Enabled(F1),Disabled;",
	"OK,CHROMA81,Disabled,Enabled;",
	"-;",
	"O89,Joystick,Cursor,Sinclair,ZX81;",
	"R0,Reset;",
	"V,v",`BUILD_DATE
};

////////////////////   CLOCKS   ///////////////////

wire clk_sys;
wire locked;

pll pll
(
	.refclk(CLK_50M),
	.outclk_0(clk_sys),
	.locked(locked)
);

reg        zx81;
reg  [1:0] mem_size; //0 - 1k, 1 - 16k, 2 - 32k, 3 - 48k
wire       hz50 = ~status[6];
wire  [2:0] mod;

always @(posedge clk_sys) begin
	int timeout;

	reset <= buttons[1] | status[0] | (mod[1] & FnReset) | |timeout;
	if (reset) begin
		zx81 <= ~status[4];
		mem_size <= status[11] + 1'd1;
	end

	if(timeout) timeout <= timeout - 1;
	if(zx81 != ~status[4] || mem_size != (status[11] + 1'd1)) timeout <= 1000000;
end

//////////////////////  HPS I/O  //////////////////////

wire        ioctl_wr;
wire [24:0] ioctl_addr;
wire  [7:0] ioctl_dout;
wire        ioctl_download;
wire  [7:0] ioctl_index;

wire [10:0] ps2_key;
wire [24:0] ps2_mouse;

wire  [1:0] buttons;
wire  [4:0] joystick_0;
wire  [4:0] joystick_1;
wire [31:0] status;

wire        forced_scandoubler;
wire [21:0] gamma_bus;

wire [1:0] jsel = status[9:8];
wire slowmode = status[18:17];

hps_io #(.CONF_STR(CONF_STR)) hps_io
(
	.clk_sys(clk_sys),
	.HPS_BUS(HPS_BUS),

	.ps2_key(ps2_key),
	.ps2_mouse(ps2_mouse),

	.joystick_0(joystick_0),
	.joystick_1(joystick_1),

	.buttons(buttons),
	.status(status),
	.status_menumask({en216p,~status[16]}), 
	.forced_scandoubler(forced_scandoubler),
	.gamma_bus(gamma_bus),

	.ioctl_wr(ioctl_wr),
	.ioctl_addr(ioctl_addr),
	.ioctl_dout(ioctl_dout),
	.ioctl_download(ioctl_download),
	.ioctl_index(ioctl_index)
);

ZX81 zx81a (
    .clk_sys(clk_sys),
    .reset(reset),
    .locked(locked),

    .ioctl_wr(ioctl_wr),
    .ioctl_addr(ioctl_addr),
    .ioctl_dout(ioctl_dout),
    .ioctl_download(ioctl_download),
    .ioctl_index(ioctl_index),

	.jsel(jsel),
	.joystick_0(joystick_0),
	.joystick_1(joystick_1),

	.vcrop_en(vcrop_en),
	.en216p(en216p),
	.slowmode(slowmode),

	.FnReset(FnReset),

	.hz50(hz50),

	.ps2_key(ps2_key),
	.mod(mod),

    .status5(status[5]),	
    .status6(status[6]),
    .status7(status[7]),
    .status14(status[14]),
    .status15(status[15]),
    .status16(status[16]),
    .status18(status[18:17]),
    .status19(status[19]),
    .status20(status[20]),

    .i(i),
    .r(r),
    .g(g),
    .b(b),

    .VSync(VSync), 
    .HSync(HSync),	
    .hblank(hblank), 
    .vblank(vblank),
	.ce_pix(ce_pix),

    .audio_l(audio_l),
    .audio_r(audio_r),

	.tape_in(tape_in),
	.tape_ready(tape_ready)
);

wire [1:0] scale = status[13:12];
assign VGA_SL = scale ? scale - 1'd1 : 2'd0;
assign VGA_F1 = 0;
 
video_mixer #(400,1,1) video_mixer
(
	.*,
	.ce_pix(ce_6m5),
	.scandoubler(scale || forced_scandoubler),
	.hq2x(scale == 1),
	.freeze_sync(),

	.VGA_DE(vga_de),
	.R({r,{3{i & r}}}),
	.G({g,{3{i & g}}}),
	.B({b,{3{i & b}}}),

	.HBlank(hblank),
	.VBlank(vblank)
);

assign CLK_VIDEO = clk_sys;

assign AUDIO_L   = {audio_l, 6'd0};
assign AUDIO_R   = {audio_r, 6'd0};
assign AUDIO_S   = 0;
assign AUDIO_MIX = status[3:2]; 

// MiSTer ADC TapeIn
wire tape_adc, tape_adc_act;
always @(posedge clk_sys) begin
	if(status[22])
		tape_in <= tape_adc_act & tape_adc;
end

ltc2308_tape tape
(
	.clk		(CLK_50M		), 
	.ADC_BUS	(ADC_BUS		),
	.dout		(tape_adc		),
	.active		(tape_adc_act	)
);

endmodule
