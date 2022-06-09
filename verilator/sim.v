`timescale 1ns/1ns
// top end ff for verilator

module top(

   input clk_48 /*verilator public_flat*/,
   input reset/*verilator public_flat*/,
   input [11:0]  inputs/*verilator public_flat*/,

   output [7:0] VGA_R/*verilator public_flat*/,
   output [7:0] VGA_G/*verilator public_flat*/,
   output [7:0] VGA_B/*verilator public_flat*/,
   
   output VGA_HS,
   output VGA_VS,
   output VGA_HB,
   output VGA_VB,

   output [15:0] AUDIO_L,
   output [15:0] AUDIO_R,
   
   input        ioctl_download,
   input        ioctl_upload,
   input        ioctl_wr,
   input [24:0] ioctl_addr,
   input [7:0]  ioctl_dout,
   input [7:0]  ioctl_din,   
   input [7:0]  ioctl_index,
   output  reg  ioctl_wait=1'b0,
   
   output ce_pix
);
   
   // Core inputs/outputs
   wire       pause;
   wire [7:0] audio;
   wire [8:0] rgb;
   wire [3:0] led/*verilator public_flat*/;
   reg [7:0]  trakball/*verilator public_flat*/;
   reg [7:0]  joystick/*verilator public_flat*/;
   reg [9:0]  playerinput/*verilator public_flat*/;  

   // Hardcode default switches
   reg [7:0]  sw1 = { 1'b0, 1'b0,2'b0,2'b0,2'b0 };
   reg [7:0]  sw2 = 8'h02;

    
   // MAP INPUTS FROM SIM
   // -------------------
   assign playerinput[9] = ~inputs[10]; // coin r
   assign playerinput[8] = ~inputs[9]; // coin m
   assign playerinput[7] = ~inputs[8]; // coin l
   assign playerinput[6] = 1'b1;       // self-test
   assign playerinput[5] = 1'b0;       // cocktail
   assign playerinput[4] = 1'b1;       // slam
   assign playerinput[3] = ~inputs[7]; // start 2
   assign playerinput[2] = ~inputs[6]; // start 1
   assign playerinput[1] = ~inputs[5]; // fire 2
   assign playerinput[0] = ~inputs[4]; // fire 1  
   assign joystick[7:4] = { ~inputs[0],~inputs[1],~inputs[2],~inputs[3] }; // right, left, down, up 1
   assign joystick[3:0] = { ~inputs[0],~inputs[1],~inputs[2],~inputs[3] }; // right, left, down, up 2
   assign pause = inputs[11];       // pause

   // MAP OUTPUTS
assign AUDIO_L   = {audio_l, 6'd0};
assign AUDIO_R   = {audio_r, 6'd0};

ZX81 zx81a (
   .clk_sys(clk_48),
   .reset(reset),
   .locked(reset),

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
	.zx81(zx81),

	.ps2_key(ps2_key),
	.mod(mod),

   .status5(0),	
   .status6(0),
   .status7(0),
   .status14(0),
   .status15(0),
   .status16(0),
   .status18(0),
   .status19(0),
   .status20(0),

   .i(i),
   .r(r),
   .g(g),
   .b(b),

   .VSync(VGA_HS), 
   .HSync(VGA_VS),	
   .hblank(VGA_HB), 
   .vblank(VGA_VB),
	.ce_pix(ce_pix),

   .audio_l(audio_l),
   .audio_r(audio_r),

	.tape_in(tape_in),
	.tape_ready(tape_ready)
);

assign VGA_R = ({r,{3{i & r}}});
assign VGA_G = ({g,{3{i & g}}});
assign VGA_B = ({b,{3{i & b}}});

endmodule
