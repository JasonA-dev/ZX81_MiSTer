module ZX81
(
    input wire clk_sys,
    input wire reset,
    input wire locked,

    input wire        ioctl_wr,
    input wire [24:0] ioctl_addr,
    input wire  [7:0] ioctl_dout,
    input wire        ioctl_download,
    input wire  [7:0] ioctl_index,

    input wire  [1:0] jsel,
    input wire  [4:0] joystick_0,
    input wire  [4:0] joystick_1,

    input wire        vcrop_en,
    input wire        en216p,
    input wire  [1:0] mem_size,
    input wire        slowmode,
	output wire 	  FnReset,
	input wire 		  hz50,
	input wire 		  zx81,

	input wire [10:0] ps2_key,
	output wire [2:0] mod,

    input wire status5,	
    input wire status6,
    input wire status7,
    input wire status14,
    input wire status15,
    input wire status16,
    input wire status18,
    input wire status19,
    input wire status20,

    output reg i,
    output reg r,
    output reg g,
    output reg b,

    output reg VSync, 
    output reg HSync,
    output wire hblank, 
    output wire vblank,
	output wire ce_pix,

    output wire [9:0] audio_l,
    output wire [9:0] audio_r,

    input  wire tape_in,
    output wire tape_ready
);

////////////////////   CLOCKS   ///////////////////

reg  ce_cpu_p;
reg  ce_cpu_n;
reg  ce_6m5,ce_3m25,ce_psg;

assign 	ce_pix = ce_6m5;

always @(negedge clk_sys) begin
	reg [4:0] counter;
	reg [1:0] turbo;

	counter <= counter + 1'd1;
	if(~slow_mode) turbo <= slowmode;

	if(slow_mode & turbo[1]) begin
		ce_cpu_p <= (!counter[2] & !counter[1:0]) | turbo[0];
		ce_cpu_n <= ( counter[2] & !counter[1:0]) | turbo[0];
	end
	else begin
		ce_cpu_p <= !counter[3] & !counter[2:0];
		ce_cpu_n <=  counter[3] & !counter[2:0];
	end
	ce_3m25  <= !counter[3:0];
	ce_6m5   <= !counter[2:0];
	ce_psg   <= !counter[4:0];
end

///////////////////   CPU   ///////////////////

wire [15:0] addr;
reg  [7:0] cpu_din;
wire  [7:0] cpu_dout;
wire        nM1;
wire        nMREQ;
wire        nIORQ;
wire        nRD;
wire        nWR;
wire        nRFSH;
wire        nHALT;
wire        nINT = addr[6];

/*
T80pa cpu
(
	.RESET_n(~reset),
	.CLK(clk_sys),
	.CEN_p(ce_cpu_p),
	.CEN_n(ce_cpu_n),
	.WAIT_n(nWAIT),
	.INT_n(nINT),
	.NMI_n(nNMI),
	.BUSRQ_n(1),
	.M1_n(nM1),
	.MREQ_n(nMREQ),
	.IORQ_n(nIORQ),
	.RD_n(nRD),
	.WR_n(nWR),
	.RFSH_n(nRFSH),
	.HALT_n(nHALT),
	.A(addr),
	.DO(cpu_dout),
	.DI(cpu_din)
);
*/

tv80pa cpu
(
	.reset_n(~reset),
	.clk(clk_sys),
	.cen_p(ce_cpu_p),
	.cen_n(ce_cpu_n),	
	.wait_n(nWAIT),
	.int_n(nINT),
	.nmi_n(nNMI),
	.busrq_n(1),
	.m1_n(nM1),
	.mreq_n(nMREQ),
	.iorq_n(nIORQ),
	.rd_n(nRD),
	.wr_n(nWR),
	.rfsh_n(nRFSH),
	.halt_n(nHALT),
	.A(addr),
	.dout(cpu_dout),
	.di(cpu_din)
);

always_comb begin
	case({nMREQ, ~nM1 | nIORQ | nRD})
	    'b01: cpu_din = (~nM1 & nopgen) ? 8'h00 : mem_out;
	    'b10: cpu_din = io_dout;
	 default: cpu_din = 8'hFF;
	endcase
end

reg [7:0] io_dout;
always_comb begin
	casex({~kbd_n, zxp_sel, ch81_sel, psg_sel})
		'b1XXX: io_dout = { tape_in, hz50, 1'b0, key_data[4:0] & joy_kbd };
		'b01XX: io_dout = zxp_out;
		'b001X: io_dout = 8'hDF;
		'b0001: io_dout = psg_out;
		'b0000: io_dout = 8'hFF;
	endcase
end

reg  [7:0] mem_out;
always_comb begin
	casex({ tapeloader, ~status19 & qs_e, ch81_e, rom_e, ram_e })
		  'b1_XX_XX: mem_out = tape_loader_patch[addr - (zx81 ? 13'h0347 : 13'h0207)];
		  'b0_1X_XX: mem_out = qs_out;
		  'b0_01_XX: mem_out = ch81_out;
		  'b0_00_1X: mem_out = rom_out;
		  'b0_00_01: mem_out = ram_out;
		default: mem_out = 8'hFF;
	endcase
end

//////////////////   MEMORY   //////////////////
wire low16k_e = ~addr[15] | ~mem_size[1];
wire ramLo_e  = ~addr[14] & addr[13] & low16k_e;
wire ramHi_e  = addr[15] & mem_size[1] & (~addr[14] | (nM1 & mem_size[0]));
wire ram_e    = addr[14] | ramHi_e | (ramLo_e & status16);

reg [15:0] ram_a;
always_comb begin
	casex({tapeloader, ramLo_e, mem_size, addr[15:14]})
		'b1_X_XX_XX: ram_a = {2'b01, tape_type ? tape_addr + 4'd8 : tape_addr-1'd1}; // loading address

		'b0_1_XX_XX: ram_a = {3'b001,  ~status15 ? rom_a : addr[12:0] }; //8K at 2000h
		'b0_0_00_XX: ram_a = {6'b010000, addr[9:0] }; //1k

		'b0_0_01_XX,                                  //16K 
		'b0_0_1X_0X,                                  //main 16k for 32K/48K
		'b0_0_10_11: ram_a = {2'b01,     addr[13:0]}; //mirrored main 16k for 32K

		'b0_0_1X_10: ram_a = {2'b10,     addr[13:0]}; //data 16k for 32K/48K
		'b0_0_11_11: ram_a = {nM1, 1'b1, addr[13:0]}; //48K: last 16k on non-M1 cycle, mirrored main 16K on M1 cycle
	endcase
end

wire [7:0] ram_out;
dpram #(.ADDRWIDTH(16)) ram
(
	.clock(clk_sys),
	.address_a(ram_a),
	.data_a(tapeloader ? tape_in_byte_r : cpu_dout),
	.wren_a((~nWR & ~nMREQ & ram_e & ~ch81_e) | tapewrite_we),
	.q_a(ram_out)
);

wire [12:0] rom_a = nRFSH ? addr[12:0] : { addr[12:9]+(addr[13] & ram_data_latch[7] & addr[8] & ~status14), ram_data_latch[5:0], row_counter };
wire        rom_e = ~addr[14] & ~addr[13] & (~addr[12] | zx81) & low16k_e;
wire  [7:0] rom_out;
dpram #(.ADDRWIDTH(14), .NUMWORDS(12288), .MEM_INIT_FILE("rtl/zx8x.mif")) rom
(
	.clock(clk_sys),
	.address_a({(zx81 ? rom_a[12] : 2'h2), rom_a[11:0]}),
	.q_a(rom_out),

	.address_b(ioctl_addr[13:0]),
	.wren_b(ioctl_wr && !ioctl_index),
	.data_b(ioctl_dout)
);

////////////////////  TAPE  //////////////////////
reg         tape_type;
reg   [7:0] tape_ram[16384];
reg         tapeloader, tapewrite_we;
reg  [13:0] tape_addr;
reg  [13:0] tape_size;
reg   [7:0] tape_in_byte,tape_in_byte_r;

assign tape_ready = |tape_size;  // there is data in the tape memory

// patch the load ROM routines to loop until the memory is filled from $4000(.o file ) $4009 (.p file)
// xor a; loop: nop or scf, jr nc loop, jp h0207 (jp h0203 - ZX80)
reg   [7:0] tape_loader_patch[7] = '{8'haf, 8'h00, 8'h30, 8'hfd, 8'hc3, 8'h07, 8'h02};

// TAPE LOAD
always @(posedge clk_sys) begin
	reg old_download;

	if (reset) tape_size <= 0;
	
	if(ioctl_index[4:0] && !ioctl_index[7] && !ioctl_index[5]) begin
		if (ioctl_wr) tape_ram[ioctl_addr] <= ioctl_dout;
		
		old_download <= ioctl_download;
		if(old_download && ~ioctl_download) begin
			tape_size <= ioctl_addr[13:0];
			tape_type <= ioctl_index[6];
		end
	end
end

always @(posedge clk_sys) tape_in_byte <= tape_ram[tape_addr];

// TAP WRITE
always @(posedge clk_sys) begin
	reg old_nM1;

	old_nM1 <= nM1;
	tapewrite_we <= 0;
	
	if (~nM1 & old_nM1) begin
		if (zx81) begin
			if (addr == 16'h0347) begin
				tape_loader_patch[1] <= 8'h00; //nop
				tape_loader_patch[5] <= 8'h07; //0207h
				tape_addr <= 14'h0;
				tapeloader <= 1;
			end
			if (addr >= 16'h03c3 || addr < 16'h0347) begin
				tapeloader <= 0;
			end
		end else begin
			if (addr == 16'h0207) begin
				tape_loader_patch[1] <= 8'h00; //nop
				tape_loader_patch[5] <= 8'h03; //0203h
				tape_addr <= 14'h0;
				tapeloader <= 1;
			end
			if (addr >= 16'h024d || addr < 16'h0207) begin
				tapeloader <= 0;
			end
		end
	end

	if (tapeloader & ce_cpu_p) begin
		if (tape_addr < tape_size) begin
			tape_addr <= tape_addr + 1'h1;
			tape_in_byte_r <= tape_in_byte;
			tapewrite_we <= 1;
		end else begin
			tape_loader_patch[1] <= 8'h37; //scf
		end
	end
end

////////////////////  VIDEO //////////////////////
// Based on the schematic:
// http://searle.hostei.com/grant/zx80/zx80.html

// character generation
wire      nopgen = addr[15] & ~mem_out[6] & nHALT;
wire      data_latch_enable = nRFSH & ce_cpu_p & ~nMREQ;
reg [7:0] ram_data_latch;
reg       nopgen_store;
reg [2:0] row_counter;
wire      shifter_start = nMREQ & nopgen_store & ce_cpu_p & shifter_en & ~NMIlatch;
reg [7:0] shifter_reg;
reg       inverse;
wire      video_out = (~status7 ^ shifter_reg[7] ^ inverse);
reg [7:0] paper_reg;
wire      border = ~paper_reg[7];
reg [7:0] attr, attr_latch;
reg       shifter_en;

always @(posedge clk_sys) begin
	reg old_hsync, old_hblank;
	reg old_shifter_start;

	if (ce_6m5) begin
		old_hsync <= hsync;

		if (data_latch_enable) begin
			ram_data_latch <= mem_out;
			nopgen_store <= nopgen;
			attr_latch <= ch81_out;
		end

		if (nMREQ & ce_cpu_p) inverse <= 0;

		old_shifter_start <= shifter_start;
		shifter_reg <= { shifter_reg[6:0], 1'b0 };
		paper_reg   <= { paper_reg[6:0], 1'b0 };
		
		if (~old_shifter_start & shifter_start) begin
			shifter_reg <= (~nM1 & nopgen) ? 8'h0 : mem_out;
			inverse <= ram_data_latch[7];
			paper_reg <= 'hFF;
			attr <= ch81_dat[4] ? attr_latch : ch81_out;
		end

		if (~old_hsync & hsync)	row_counter <= row_counter + 1'd1;
		if (vs) row_counter <= 0;

		//extended suppress to reduce garbage
		old_hblank <= hblank;
		if(~old_hblank & hblank) shifter_en <= 0;
		if(old_hblank & ~hblank) shifter_en <= ~NMIlatch;
	end
end

// vsync generator
reg vsync; // cleaned version
reg vs;    // momentary version, sometimes used for row_counter reset trick
always @(posedge clk_sys) begin
	if (~nIORQ & ~nWR & ~NMIlatch) vs <= 0;
	if (~kbd_n & ~NMIlatch)        vs <= 1;
	if(!hsync) vsync<=vs;
end

// ZX81 upgrade
// http://searle.hostei.com/grant/zx80/zx80nmi.html
wire nWAIT = ~nHALT | nNMI | (slow_mode & |status18);
wire nNMI = ~NMIlatch | ~hsync;

reg slow_mode = 0;
always @(posedge clk_sys) begin
	reg [6:0] fcnt;
	reg old_halt, old_latch;

	old_latch <= NMIlatch;
	old_halt  <= nHALT;

	// Time out to enable turbo modes after reset,
	// otherwise ZX81 FW won't enter slow mode!
	if(~old_latch & NMIlatch) begin
		if(&fcnt) slow_mode <= 1;
		else fcnt <= fcnt + 1'd1;
	end
	if(old_halt & ~nHALT) slow_mode <= 0;
	
	if(reset) {fcnt,slow_mode} <= 0;
end

reg [7:0] sync_counter;
reg       NMIlatch;
reg       hsync;
always @(posedge clk_sys) begin
	if(ce_3m25) begin
		sync_counter <= sync_counter + 1'd1;
		if(sync_counter == 206) sync_counter <= 0;
		if(sync_counter == 15)  hsync <= 1;
		if(sync_counter == 31)  hsync <= 0;
	end

	if (~nM1 & ~nIORQ) {hsync,sync_counter} <= 0;

	if (zx81) begin
		if (~nIORQ & ~nWR & (addr[0] ^ addr[1])) NMIlatch <= addr[1];
	end
	else begin
		NMIlatch <= 0;
	end
end

//re-sync
reg hsync2, vsync2;
always @(posedge clk_sys) begin
	reg [8:0] cnt;
	reg [4:0] vreg;
	reg       old_hsync;

	if(ce_6m5) begin
		cnt <= cnt + 1'd1;
		if(cnt == 413) cnt <= 0;

		if(cnt == 0)   hsync2 <= 1;
		if(cnt == 32)  hsync2 <= 0;

		if(cnt == 400) hblank <= 1;
		if(cnt == 72)  hblank <= 0;

		old_hsync <= hsync;
		if(~old_hsync & hsync) begin
			vreg <= {vreg[3:0], vsync};
			vblank <= |{vreg,vsync};
			vsync2 <= vreg[2];
			if(&vreg[3:2]) cnt <= 0;
		end
	end
end

always_comb begin
	casex({status5 & border, ch81_dat[5], border, video_out})
		'b1XXX: {i,g,r,b} = 0;
		'b00XX: {i,g,r,b} = {4{video_out}};
		'b011X: {i,g,r,b} = ch81_dat[3:0];
		'b0101: {i,g,r,b} = attr[7:4];
		'b0100: {i,g,r,b} = attr[3:0];
	endcase
end

always @(posedge clk_sys) begin
	HSync <= hsync2;
	if(~HSync & hsync2) VSync <= vsync2;
end
 
//////////////////// CHROMA81 ////////////////////
// mapped at C000 and accessible only in non-M1 cycle
wire      ch81_e = status20 & ~nMREQ & nM1 & &addr[15:14];
wire      ch81_sel = ~nIORQ & (addr == 'h7FEF) & status20;
reg [7:0] ch81_dat = 0;

always @(posedge clk_sys) begin
	reg set_m0;
	reg old_tapeloader;

	if(reset | ~status20) {set_m0, ch81_dat} <= 0;
	else if(ch81_sel & ~nWR) ch81_dat = cpu_dout;
	
	if(ioctl_wr) begin
		if(ioctl_index[4:0] && (ioctl_index[7:5]==1)) begin
			set_m0 <= 1;
			if(ioctl_addr == 1024) ch81_dat <= ioctl_dout[3:0];
		end
		else if(~ioctl_index[5]) set_m0 <= 0;
	end
	
	old_tapeloader <= tapeloader;
	if(old_tapeloader & ~tapeloader & set_m0 & status20) ch81_dat[5:4] <= 2'b10;
end

wire [7:0] ch81_out;
dpram #(.ADDRWIDTH(14)) chroma81
(
	.clock(clk_sys),
	.address_a(nRFSH ? addr[13:0] : {ram_data_latch[7], rom_a[8:0]}),
	.wren_a(~nWR & ~nMREQ & ch81_e),
	.data_a(cpu_dout),
	.q_a(ch81_out),
	
	.address_b(ioctl_addr[13:0]),
	.data_b(ioctl_dout),
	.wren_b(ioctl_wr && ioctl_index[4:0] && (ioctl_index[7:5]==1) && !ioctl_addr[24:10])
);

//////////////////// QS CHRS /////////////////////
wire       qs_e = nRFSH ? (addr[15:10] == 'b100001) : (qs & (addr[15:9] == 'b0001111)); //8400-87FF / 1E00-1F00
wire [7:0] qs_out;

dpram #(.ADDRWIDTH(10)) qschrs
(
	.clock(clk_sys),
	.address_a(nRFSH ? addr[9:0] : {ram_data_latch[7], rom_a[8:0]}),
	.wren_a(~nWR & ~nMREQ & qs_e),
	.data_a(cpu_dout),
	.q_a(qs_out),
	
	.address_b(ioctl_addr[9:0]),
	.wren_b(ioctl_wr && ioctl_index[4:0] && (ioctl_index[7:5]==3) && !ioctl_addr[24:10]),
	.data_b(ioctl_dout)
);

reg qs = 0;
always @(posedge clk_sys) begin
	reg qs_set;
	reg old_f1;
	reg old_tapeloader;
	
	old_f1 <= Fn[1];
	if(~old_f1 & Fn[1]) qs <= ~qs;
	
	if(ioctl_wr) begin
		if(ioctl_index[4:0] && (ioctl_index[7:5]==3)) qs_set <= 1;
		else if(~ioctl_index[5]) qs_set <= 0;
	end
	
	old_tapeloader <= tapeloader;
	if(old_tapeloader & ~tapeloader & qs_set) qs <= 1;

	if(reset) {qs_set,qs} <= 0;
end

////////////////////  SOUND //////////////////////
wire [7:0] psg_out;
wire       psg_sel = ~nIORQ & &addr[3:0]; //xF
wire [7:0] psg_ch_a, psg_ch_b, psg_ch_c;

assign FnReset = Fn[11];

/*
ym2149 psg
(
	.CLK(clk_sys),
	.CE(ce_psg),
	.RESET(reset),
	.BDIR(psg_sel & ~nWR),
	.BC(psg_sel & (&addr[7:6] ^ nWR)),
	.DI(cpu_dout),
	.DO(psg_out),
	.CHANNEL_A(psg_ch_a),
	.CHANNEL_B(psg_ch_b),
	.CHANNEL_C(psg_ch_c)
);
*/

assign audio_l = { 1'b0, psg_ch_a, 1'b0 } + { 2'b00, psg_ch_b };
assign audio_r = { 1'b0, psg_ch_c, 1'b0 } + { 2'b00, psg_ch_b };

////////////////////   HID   /////////////////////

wire kbd_n = nIORQ | nRD | addr[0];

wire  [4:0] key_data;
wire [11:1] Fn;
keyboard kbd( .* );

wire [4:0] joy = joystick_0 | joystick_1;

//ZX81 67890
wire [4:0] joyzx = ({5{jsel[1]}} & {joy[2], joy[3], joy[0], joy[1], joy[4]});

//Sinclair 1 67890
wire [4:0] joys1 = ({5{jsel[0]}} & {joy[1:0], joy[2], joy[3], joy[4]});

//Cursor 56780
wire [4:0] joyc1 = {5{!jsel}} & {joy[2], joy[3], joy[0], 1'b0, joy[4]};
wire [4:0] joyc2 = {5{!jsel}} & {joy[1], 4'b0000};

//map to keyboard
wire [4:0] joy_kbd = {5{zxp_use}} | (({5{addr[12]}} | ~(joys1 | joyc1 | joyzx)) & ({5{addr[11]}} | ~joyc2));

reg [7:0] zxp_out = 'hFF;
reg       zxp_use = 0;
wire      zxp_sel = ~nIORQ & (addr == 'hE007);

always @(posedge clk_sys) begin
	if(reset) {zxp_use,zxp_out} <= 'hFF;
	else if(zxp_sel & ~nWR) begin
		zxp_out <= 'hFF;
		if(cpu_dout == 'hAA) zxp_out <= 'hF0;
		if(cpu_dout == 'h55) zxp_out <= 'h0F;
		if(cpu_dout == 'hA0) {zxp_use,zxp_out} <= {1'b1, ~joy[3:0],~joy[4],3'b000};
	end
end

endmodule
