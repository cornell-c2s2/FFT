module TwiddleGeneratorVRTL (
	sine_wave_in,
	twiddle_real,
	twiddle_imaginary
);
	parameter BIT_WIDTH = 4;
	parameter DECIMAL_PT = 2;
	parameter SIZE_FFT = 8;
	parameter STAGE_FFT = 0;
	input wire [(SIZE_FFT * BIT_WIDTH) - 1:0] sine_wave_in;
	output wire [((SIZE_FFT / 2) * BIT_WIDTH) - 1:0] twiddle_real;
	output wire [((SIZE_FFT / 2) * BIT_WIDTH) - 1:0] twiddle_imaginary;
	wire signed [31:0] trace;
	assign trace = 1'd1 << DECIMAL_PT;
	wire signed [31:0] trace2;
	assign trace2 = (1 * (SIZE_FFT / (2 * (2 ** STAGE_FFT)))) % SIZE_FFT;
	wire signed [31:0] trace3;
	assign trace3 = (2 * (SIZE_FFT / (2 * (2 ** STAGE_FFT)))) % SIZE_FFT;
	wire signed [31:0] trace4;
	assign trace4 = (3 * (SIZE_FFT / (2 * (2 ** STAGE_FFT)))) % SIZE_FFT;
	genvar m;
	generate
		for (m = 0; m < (2 ** STAGE_FFT); m = m + 1) begin : genblk1
			genvar i;
			for (i = 0; i < SIZE_FFT; i = i + (2 ** (STAGE_FFT + 1))) begin : genblk1
				if (m == 0) begin : genblk1
					assign twiddle_real[((i / 2) + m) * BIT_WIDTH+:BIT_WIDTH] = 1'b1 << DECIMAL_PT;
					assign twiddle_imaginary[((i / 2) + m) * BIT_WIDTH+:BIT_WIDTH] = 0;
				end
				else begin : genblk1
					assign twiddle_real[((i / 2) + m) * BIT_WIDTH+:BIT_WIDTH] = sine_wave_in[((SIZE_FFT - 1) - (((m * (SIZE_FFT / (2 * (2 ** STAGE_FFT)))) % SIZE_FFT) + (SIZE_FFT / 4))) * BIT_WIDTH+:BIT_WIDTH];
					assign twiddle_imaginary[((i / 2) + m) * BIT_WIDTH+:BIT_WIDTH] = -sine_wave_in[((SIZE_FFT - 1) - ((m * (SIZE_FFT / (2 * (2 ** STAGE_FFT)))) % SIZE_FFT)) * BIT_WIDTH+:BIT_WIDTH];
				end
			end
		end
	endgenerate
endmodule
module SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_16VRTL (sine_wave_out);
	output wire [511:0] sine_wave_out;
	assign sine_wave_out[480+:32] = 0;
	assign sine_wave_out[448+:32] = 25079;
	assign sine_wave_out[416+:32] = 46340;
	assign sine_wave_out[384+:32] = 60547;
	assign sine_wave_out[352+:32] = 65536;
	assign sine_wave_out[320+:32] = 60547;
	assign sine_wave_out[288+:32] = 46340;
	assign sine_wave_out[256+:32] = 25079;
	assign sine_wave_out[224+:32] = 0;
	assign sine_wave_out[192+:32] = -25079;
	assign sine_wave_out[160+:32] = -46340;
	assign sine_wave_out[128+:32] = -60547;
	assign sine_wave_out[96+:32] = -65536;
	assign sine_wave_out[64+:32] = -60547;
	assign sine_wave_out[32+:32] = -46340;
	assign sine_wave_out[0+:32] = -25079;
endmodule
module SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_8VRTL (sine_wave_out);
	output wire [255:0] sine_wave_out;
	assign sine_wave_out[224+:32] = 0;
	assign sine_wave_out[192+:32] = 46340;
	assign sine_wave_out[160+:32] = 65536;
	assign sine_wave_out[128+:32] = 46340;
	assign sine_wave_out[96+:32] = 0;
	assign sine_wave_out[64+:32] = -46340;
	assign sine_wave_out[32+:32] = -65536;
	assign sine_wave_out[0+:32] = -46340;
endmodule
module SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_2VRTL (sine_wave_out);
	output wire [63:0] sine_wave_out;
	assign sine_wave_out[32+:32] = 0;
	assign sine_wave_out[0+:32] = 0;
endmodule
module SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_4VRTL (sine_wave_out);
	output wire [127:0] sine_wave_out;
	assign sine_wave_out[96+:32] = 0;
	assign sine_wave_out[64+:32] = 65536;
	assign sine_wave_out[32+:32] = 0;
	assign sine_wave_out[0+:32] = -65536;
endmodule
module CombinationalFFTCrossbarVRTl (
	recv_real,
	recv_imaginary,
	recv_val,
	recv_rdy,
	send_real,
	send_imaginary,
	send_val,
	send_rdy
);
	parameter BIT_WIDTH = 32;
	parameter SIZE_FFT = 8;
	parameter STAGE_FFT = 0;
	parameter FRONT = 1;
	input wire [(SIZE_FFT * BIT_WIDTH) - 1:0] recv_real;
	input wire [(SIZE_FFT * BIT_WIDTH) - 1:0] recv_imaginary;
	input wire [SIZE_FFT - 1:0] recv_val;
	output wire [SIZE_FFT - 1:0] recv_rdy;
	output wire [(SIZE_FFT * BIT_WIDTH) - 1:0] send_real;
	output wire [(SIZE_FFT * BIT_WIDTH) - 1:0] send_imaginary;
	output wire [SIZE_FFT - 1:0] send_val;
	input wire [SIZE_FFT - 1:0] send_rdy;
	genvar m;
	generate
		for (m = 0; m < (2 ** STAGE_FFT); m = m + 1) begin : genblk1
			genvar i;
			for (i = m; i < SIZE_FFT; i = i + (2 ** (STAGE_FFT + 1))) begin : genblk1
				if (FRONT == 1) begin : genblk1
					assign send_real[(i + m) * BIT_WIDTH+:BIT_WIDTH] = recv_real[i * BIT_WIDTH+:BIT_WIDTH];
					assign send_imaginary[(i + m) * BIT_WIDTH+:BIT_WIDTH] = recv_imaginary[i * BIT_WIDTH+:BIT_WIDTH];
					assign send_val[i + m] = recv_val[i];
					assign recv_rdy[i + m] = send_rdy[i];
					assign send_real[((i + m) + 1) * BIT_WIDTH+:BIT_WIDTH] = recv_real[(i + (2 ** STAGE_FFT)) * BIT_WIDTH+:BIT_WIDTH];
					assign send_imaginary[((i + m) + 1) * BIT_WIDTH+:BIT_WIDTH] = recv_imaginary[(i + (2 ** STAGE_FFT)) * BIT_WIDTH+:BIT_WIDTH];
					assign send_val[(i + m) + 1] = recv_val[i + (2 ** STAGE_FFT)];
					assign recv_rdy[(i + m) + 1] = send_rdy[i + (2 ** STAGE_FFT)];
				end
				else begin : genblk1
					assign send_real[i * BIT_WIDTH+:BIT_WIDTH] = recv_real[(i + m) * BIT_WIDTH+:BIT_WIDTH];
					assign send_imaginary[i * BIT_WIDTH+:BIT_WIDTH] = recv_imaginary[(i + m) * BIT_WIDTH+:BIT_WIDTH];
					assign send_val[i] = recv_val[i + m];
					assign recv_rdy[i] = send_rdy[i + m];
					assign send_real[(i + (2 ** STAGE_FFT)) * BIT_WIDTH+:BIT_WIDTH] = recv_real[((i + m) + 1) * BIT_WIDTH+:BIT_WIDTH];
					assign send_imaginary[(i + (2 ** STAGE_FFT)) * BIT_WIDTH+:BIT_WIDTH] = recv_imaginary[((i + m) + 1) * BIT_WIDTH+:BIT_WIDTH];
					assign send_val[i + (2 ** STAGE_FFT)] = recv_val[(i + m) + 1];
					assign recv_rdy[i + (2 ** STAGE_FFT)] = send_rdy[(i + m) + 1];
				end
			end
		end
	endgenerate
endmodule
module vc_Mux2 (
	in0,
	in1,
	sel,
	out
);
	parameter p_nbits = 1;
	input wire [p_nbits - 1:0] in0;
	input wire [p_nbits - 1:0] in1;
	input wire sel;
	output reg [p_nbits - 1:0] out;
	always @(*)
		case (sel)
			1'd0: out = in0;
			1'd1: out = in1;
			default: out = {p_nbits {1'bx}};
		endcase
endmodule
module vc_Mux3 (
	in0,
	in1,
	in2,
	sel,
	out
);
	parameter p_nbits = 1;
	input wire [p_nbits - 1:0] in0;
	input wire [p_nbits - 1:0] in1;
	input wire [p_nbits - 1:0] in2;
	input wire [1:0] sel;
	output reg [p_nbits - 1:0] out;
	always @(*)
		case (sel)
			2'd0: out = in0;
			2'd1: out = in1;
			2'd2: out = in2;
			default: out = {p_nbits {1'bx}};
		endcase
endmodule
module vc_Mux4 (
	in0,
	in1,
	in2,
	in3,
	sel,
	out
);
	parameter p_nbits = 1;
	input wire [p_nbits - 1:0] in0;
	input wire [p_nbits - 1:0] in1;
	input wire [p_nbits - 1:0] in2;
	input wire [p_nbits - 1:0] in3;
	input wire [1:0] sel;
	output reg [p_nbits - 1:0] out;
	always @(*)
		case (sel)
			2'd0: out = in0;
			2'd1: out = in1;
			2'd2: out = in2;
			2'd3: out = in3;
			default: out = {p_nbits {1'bx}};
		endcase
endmodule
module vc_Mux5 (
	in0,
	in1,
	in2,
	in3,
	in4,
	sel,
	out
);
	parameter p_nbits = 1;
	input wire [p_nbits - 1:0] in0;
	input wire [p_nbits - 1:0] in1;
	input wire [p_nbits - 1:0] in2;
	input wire [p_nbits - 1:0] in3;
	input wire [p_nbits - 1:0] in4;
	input wire [2:0] sel;
	output reg [p_nbits - 1:0] out;
	always @(*)
		case (sel)
			3'd0: out = in0;
			3'd1: out = in1;
			3'd2: out = in2;
			3'd3: out = in3;
			3'd4: out = in4;
			default: out = {p_nbits {1'bx}};
		endcase
endmodule
module vc_Mux6 (
	in0,
	in1,
	in2,
	in3,
	in4,
	in5,
	sel,
	out
);
	parameter p_nbits = 1;
	input wire [p_nbits - 1:0] in0;
	input wire [p_nbits - 1:0] in1;
	input wire [p_nbits - 1:0] in2;
	input wire [p_nbits - 1:0] in3;
	input wire [p_nbits - 1:0] in4;
	input wire [p_nbits - 1:0] in5;
	input wire [2:0] sel;
	output reg [p_nbits - 1:0] out;
	always @(*)
		case (sel)
			3'd0: out = in0;
			3'd1: out = in1;
			3'd2: out = in2;
			3'd3: out = in3;
			3'd4: out = in4;
			3'd5: out = in5;
			default: out = {p_nbits {1'bx}};
		endcase
endmodule
module vc_Mux7 (
	in0,
	in1,
	in2,
	in3,
	in4,
	in5,
	in6,
	sel,
	out
);
	parameter p_nbits = 1;
	input wire [p_nbits - 1:0] in0;
	input wire [p_nbits - 1:0] in1;
	input wire [p_nbits - 1:0] in2;
	input wire [p_nbits - 1:0] in3;
	input wire [p_nbits - 1:0] in4;
	input wire [p_nbits - 1:0] in5;
	input wire [p_nbits - 1:0] in6;
	input wire [2:0] sel;
	output reg [p_nbits - 1:0] out;
	always @(*)
		case (sel)
			3'd0: out = in0;
			3'd1: out = in1;
			3'd2: out = in2;
			3'd3: out = in3;
			3'd4: out = in4;
			3'd5: out = in5;
			3'd6: out = in6;
			default: out = {p_nbits {1'bx}};
		endcase
endmodule
module vc_Mux8 (
	in0,
	in1,
	in2,
	in3,
	in4,
	in5,
	in6,
	in7,
	sel,
	out
);
	parameter p_nbits = 1;
	input wire [p_nbits - 1:0] in0;
	input wire [p_nbits - 1:0] in1;
	input wire [p_nbits - 1:0] in2;
	input wire [p_nbits - 1:0] in3;
	input wire [p_nbits - 1:0] in4;
	input wire [p_nbits - 1:0] in5;
	input wire [p_nbits - 1:0] in6;
	input wire [p_nbits - 1:0] in7;
	input wire [2:0] sel;
	output reg [p_nbits - 1:0] out;
	always @(*)
		case (sel)
			3'd0: out = in0;
			3'd1: out = in1;
			3'd2: out = in2;
			3'd3: out = in3;
			3'd4: out = in4;
			3'd5: out = in5;
			3'd6: out = in6;
			3'd7: out = in7;
			default: out = {p_nbits {1'bx}};
		endcase
endmodule
module vc_MuxN (
	in,
	sel,
	out
);
	parameter p_nbits = 1;
	parameter p_ninputs = 2;
	input wire [(p_ninputs * p_nbits) - 1:0] in;
	input wire [$clog2(p_ninputs) - 1:0] sel;
	output wire [p_nbits - 1:0] out;
	assign out = in[sel * p_nbits+:p_nbits];
endmodule
module RegisterV_Reset (
	clk,
	reset,
	w,
	d,
	q
);
	parameter N = 8;
	input wire clk;
	input wire reset;
	input wire w;
	input wire [N - 1:0] d;
	output wire [N - 1:0] q;
	reg [N - 1:0] regout;
	assign q = regout;
	always @(posedge clk)
		if (reset)
			regout <= 0;
		else if (w)
			regout <= d;
endmodule
module FpmultVRTL (
	clk,
	reset,
	recv_val,
	recv_rdy,
	send_val,
	send_rdy,
	a,
	b,
	c
);
	parameter n = 32;
	parameter d = 16;
	parameter sign = 1;
	input wire clk;
	input wire reset;
	input wire recv_val;
	input wire send_rdy;
	input wire [n - 1:0] a;
	input wire [n - 1:0] b;
	output wire [n - 1:0] c;
	output wire send_val;
	output wire recv_rdy;
	wire do_carry;
	wire do_add;
	wire in_wait;
	fpmult_control #(
		.n(n),
		.d(d)
	) control(
		.clk(clk),
		.reset(reset),
		.recv_val(recv_val),
		.recv_rdy(recv_rdy),
		.send_val(send_val),
		.send_rdy(send_rdy),
		.in_wait(in_wait),
		.do_add(do_add),
		.do_carry(do_carry)
	);
	fpmult_datapath #(
		.n(n),
		.d(d)
	) datapath(
		.clk(clk),
		.reset(reset),
		.in_wait(in_wait),
		.do_add(do_add),
		.do_carry((sign != 0) & do_carry),
		.a({{d {(sign != 0) & a[n - 1]}}, a}),
		.b(b),
		.c(c)
	);
endmodule
module fpmult_control (
	clk,
	reset,
	recv_val,
	recv_rdy,
	send_val,
	send_rdy,
	in_wait,
	do_add,
	do_carry
);
	parameter n = 0;
	parameter d = 0;
	input wire clk;
	input wire reset;
	input wire recv_val;
	output reg recv_rdy;
	output reg send_val;
	input wire send_rdy;
	output reg in_wait;
	output reg do_add;
	output reg do_carry;
	localparam [1:0] IDLE = 2'd0;
	localparam [1:0] CALC = 2'd1;
	localparam [1:0] DONE = 2'd2;
	reg [1:0] state;
	reg [1:0] next_state;
	reg [$clog2(n) - 1:0] counter;
	reg counter_reset;
	function automatic signed [$clog2(n) - 1:0] sv2v_cast_2A747_signed;
		input reg signed [$clog2(n) - 1:0] inp;
		sv2v_cast_2A747_signed = inp;
	endfunction
	always @(*)
		case (state)
			IDLE:
				if (recv_val)
					next_state = CALC;
				else
					next_state = IDLE;
			CALC:
				if (counter == sv2v_cast_2A747_signed(n - 1))
					next_state = DONE;
				else
					next_state = CALC;
			DONE:
				if (send_rdy)
					next_state = IDLE;
				else
					next_state = DONE;
			default: next_state = IDLE;
		endcase
	always @(*)
		case (state)
			IDLE: begin
				in_wait = 1;
				do_add = 0;
				do_carry = 0;
				counter_reset = 0;
				recv_rdy = 1;
				send_val = 0;
			end
			CALC: begin
				in_wait = 0;
				do_add = 1;
				do_carry = counter == sv2v_cast_2A747_signed(n - 1);
				counter_reset = 0;
				recv_rdy = 0;
				send_val = 0;
			end
			DONE: begin
				in_wait = 0;
				do_add = 0;
				do_carry = 0;
				counter_reset = 1;
				recv_rdy = 0;
				send_val = 1;
			end
			default:
				;
		endcase
	always @(posedge clk)
		if (reset)
			state <= IDLE;
		else
			state <= next_state;
	always @(posedge clk)
		if (reset || counter_reset)
			counter <= 0;
		else if (state == CALC)
			counter <= counter + 1;
		else
			counter <= counter;
endmodule
module fpmult_datapath (
	clk,
	reset,
	in_wait,
	do_add,
	do_carry,
	a,
	b,
	c
);
	parameter n = 0;
	parameter d = 0;
	input wire clk;
	input wire reset;
	input wire in_wait;
	input wire do_add;
	input wire do_carry;
	input wire [(n + d) - 1:0] a;
	input wire [n - 1:0] b;
	output wire [n - 1:0] c;
	wire [(n + d) - 1:0] acc_in;
	wire [(n + d) - 1:0] acc_out;
	RegisterV_Reset #(.N(n + d)) acc_reg(
		.clk(clk),
		.reset(in_wait | reset),
		.w(1),
		.d(acc_in),
		.q(acc_out)
	);
	wire [(n + d) - 1:0] a_const_out;
	RegisterV_Reset #(.N(n + d)) a_const_reg(
		.clk(clk),
		.reset(reset),
		.w(in_wait),
		.d(a),
		.q(a_const_out)
	);
	wire [(n + d) - 1:0] a_in;
	wire [(n + d) - 1:0] a_out;
	RegisterV_Reset #(.N(n + d)) a_reg(
		.clk(clk),
		.reset(reset),
		.w(1),
		.d(a_in),
		.q(a_out)
	);
	wire [(n + d) - 1:0] b_in;
	wire [(n + d) - 1:0] b_out;
	RegisterV_Reset #(.N(n)) b_reg(
		.clk(clk),
		.reset(reset),
		.w(1),
		.d(b_in),
		.q(b_out)
	);
	vc_Mux2 #(.p_nbits(n + d)) a_sel(
		.in0(a_out << 1),
		.in1(a),
		.sel(in_wait),
		.out(a_in)
	);
	vc_Mux2 #(.p_nbits(n)) b_sel(
		.in0(b_out >> 1),
		.in1(b),
		.sel(in_wait),
		.out(b_in)
	);
	wire [(n + d) - 1:0] add_tmp;
	wire [(n + d) - 1:0] carry;
	wire [(2 * n) - 1:0] carry_tmp;
	wire [(2 * n) - 1:0] carry_tmp2;
	assign carry_tmp = {{n - d {a_const_out[(n + d) - 1]}}, a_const_out};
	assign carry_tmp2 = ((carry_tmp << n) - carry_tmp) << (n - 1);
	vc_Mux2 #(.p_nbits(n + d)) carry_sel(
		.in0(a_out),
		.in1(carry_tmp2[(n + d) - 1:0]),
		.sel(do_carry),
		.out(add_tmp)
	);
	vc_Mux2 #(.p_nbits(n + d)) add_sel(
		.in0(acc_out),
		.in1(acc_out + add_tmp),
		.sel(do_add & b_out[0]),
		.out(acc_in)
	);
	assign c = acc_out[(n + d) - 1:d];
endmodule
module FpcmultVRTL (
	clk,
	reset,
	recv_val,
	recv_rdy,
	send_val,
	send_rdy,
	ar,
	ac,
	br,
	bc,
	cr,
	cc
);
	parameter n = 32;
	parameter d = 16;
	input wire clk;
	input wire reset;
	input wire recv_val;
	output wire recv_rdy;
	output wire send_val;
	input wire send_rdy;
	input wire [n - 1:0] ar;
	input wire [n - 1:0] ac;
	input wire [n - 1:0] br;
	input wire [n - 1:0] bc;
	output wire [n - 1:0] cr;
	output wire [n - 1:0] cc;
	wire [n - 1:0] arbr;
	wire [n - 1:0] acbc;
	wire [n - 1:0] ar_plus_ac;
	wire [n - 1:0] br_plus_bc;
	wire [n - 1:0] ab;
	assign ar_plus_ac = ar + ac;
	assign br_plus_bc = br + bc;
	wire recv_rdy_imm [2:0];
	assign recv_rdy = (recv_rdy_imm[0] & recv_rdy_imm[1]) & recv_rdy_imm[2];
	wire send_val_imm [2:0];
	assign send_val = (send_val_imm[0] & send_val_imm[1]) & send_val_imm[2];
	FpmultVRTL #(
		.n(n),
		.d(d),
		.sign(1)
	) m1(
		.clk(clk),
		.reset(reset),
		.a(ar),
		.b(br),
		.c(arbr),
		.recv_val(recv_val),
		.recv_rdy(recv_rdy_imm[0]),
		.send_val(send_val_imm[0]),
		.send_rdy(send_rdy)
	);
	FpmultVRTL #(
		.n(n),
		.d(d),
		.sign(1)
	) m2(
		.clk(clk),
		.reset(reset),
		.a(ac),
		.b(bc),
		.c(acbc),
		.recv_val(recv_val),
		.recv_rdy(recv_rdy_imm[1]),
		.send_val(send_val_imm[1]),
		.send_rdy(send_rdy)
	);
	FpmultVRTL #(
		.n(n),
		.d(d),
		.sign(1)
	) m3(
		.clk(clk),
		.reset(reset),
		.a(ar_plus_ac),
		.b(br_plus_bc),
		.c(ab),
		.recv_val(recv_val),
		.recv_rdy(recv_rdy_imm[2]),
		.send_val(send_val_imm[2]),
		.send_rdy(send_rdy)
	);
	assign cr = arbr - acbc;
	assign cc = (ab - arbr) - acbc;
endmodule
module RegisterV (
	clk,
	reset,
	w,
	d,
	q
);
	parameter N = 32;
	input wire clk;
	input wire reset;
	input wire w;
	input wire [N - 1:0] d;
	output wire [N - 1:0] q;
	reg [N - 1:0] regout;
	assign q = regout;
	always @(posedge clk)
		if (w)
			regout <= d;
endmodule
module ButterflyVRTL (
	clk,
	reset,
	recv_val,
	recv_rdy,
	send_val,
	send_rdy,
	ar,
	ac,
	br,
	bc,
	wr,
	wc,
	cr,
	cc,
	dr,
	dc
);
	parameter n = 32;
	parameter d = 16;
	parameter mult = 1;
	input wire clk;
	input wire reset;
	input wire recv_val;
	input wire send_rdy;
	input wire [n - 1:0] ar;
	input wire [n - 1:0] ac;
	input wire [n - 1:0] br;
	input wire [n - 1:0] bc;
	input wire [n - 1:0] wr;
	input wire [n - 1:0] wc;
	output wire send_val;
	output wire recv_rdy;
	output wire [n - 1:0] cr;
	output wire [n - 1:0] cc;
	output wire [n - 1:0] dr;
	output wire [n - 1:0] dc;
	wire [n - 1:0] ar_imm;
	wire [n - 1:0] ac_imm;
	wire mul_rdy;
	wire [n - 1:0] tr;
	wire [n - 1:0] tc;
	FpcmultVRTL #(
		.n(n),
		.d(d)
	) mul(
		.clk(clk),
		.reset(reset),
		.ar(br),
		.ac(bc),
		.br(wr),
		.bc(wc),
		.cr(tr),
		.cc(tc),
		.recv_val(recv_val),
		.recv_rdy(recv_rdy),
		.send_val(send_val),
		.send_rdy(send_rdy)
	);
	RegisterV #(.N(n)) ac_reg(
		.clk(clk),
		.w(recv_rdy),
		.d(ac),
		.q(ac_imm)
	);
	RegisterV #(.N(n)) ar_reg(
		.clk(clk),
		.w(recv_rdy),
		.d(ar),
		.q(ar_imm)
	);
	assign cr = ar_imm + tr;
	assign cc = ac_imm + tc;
	assign dr = ar_imm - tr;
	assign dc = ac_imm - tc;
endmodule
module FFT_StageVRTL (
	recv_msg_real,
	recv_msg_imag,
	recv_val,
	recv_rdy,
	send_msg_real,
	send_msg_imag,
	send_val,
	send_rdy,
	sine_wave_out,
	reset,
	clk
);
	parameter BIT_WIDTH = 32;
	parameter DECIMAL_PT = 16;
	parameter N_SAMPLES = 8;
	parameter STAGE_FFT = 0;
	input wire [(N_SAMPLES * BIT_WIDTH) - 1:0] recv_msg_real;
	input wire [(N_SAMPLES * BIT_WIDTH) - 1:0] recv_msg_imag;
	input wire recv_val;
	output reg recv_rdy;
	output wire [(N_SAMPLES * BIT_WIDTH) - 1:0] send_msg_real;
	output wire [(N_SAMPLES * BIT_WIDTH) - 1:0] send_msg_imag;
	output reg send_val;
	input wire send_rdy;
	input wire [(N_SAMPLES * BIT_WIDTH) - 1:0] sine_wave_out;
	input wire reset;
	input wire clk;
	reg [N_SAMPLES - 1:0] val_in;
	wire [N_SAMPLES - 1:0] rdy_in;
	wire [N_SAMPLES - 1:0] val_out;
	reg [N_SAMPLES - 1:0] rdy_out;
	reg [N_SAMPLES - 1:0] imm;
	always @(*) begin : sv2v_autoblock_1
		reg signed [31:0] i;
		for (i = 0; i < N_SAMPLES; i = i + 1)
			begin
				val_in[i] = recv_val;
				imm[i] = rdy_in[i];
			end
		recv_rdy = &imm;
	end
	wire [(N_SAMPLES * BIT_WIDTH) - 1:0] butterfly_in_real;
	wire [(N_SAMPLES * BIT_WIDTH) - 1:0] butterfly_out_real;
	wire [(N_SAMPLES * BIT_WIDTH) - 1:0] butterfly_in_imaginary;
	wire [(N_SAMPLES * BIT_WIDTH) - 1:0] butterfly_out_imaginary;
	wire [N_SAMPLES - 1:0] val_interior_in;
	wire [N_SAMPLES - 1:0] rdy_interior_in;
	wire [N_SAMPLES - 1:0] val_interior_out;
	wire [N_SAMPLES - 1:0] rdy_interior_out;
	wire [((N_SAMPLES / 2) * BIT_WIDTH) - 1:0] twiddle_real;
	wire [((N_SAMPLES / 2) * BIT_WIDTH) - 1:0] twiddle_imaginary;
	wire val_interior_mini [(N_SAMPLES / 2) - 1:0];
	wire rdy_interior_mini [(N_SAMPLES / 2) - 1:0];
	CombinationalFFTCrossbarVRTl #(
		.BIT_WIDTH(BIT_WIDTH),
		.SIZE_FFT(N_SAMPLES),
		.STAGE_FFT(STAGE_FFT),
		.FRONT(1)
	) xbar_in_1(
		.recv_real(recv_msg_real),
		.recv_imaginary(recv_msg_imag),
		.recv_val(val_in),
		.recv_rdy(rdy_in),
		.send_real(butterfly_in_real[BIT_WIDTH * ((N_SAMPLES - 1) - (N_SAMPLES - 1))+:BIT_WIDTH * N_SAMPLES]),
		.send_imaginary(butterfly_in_imaginary[BIT_WIDTH * ((N_SAMPLES - 1) - (N_SAMPLES - 1))+:BIT_WIDTH * N_SAMPLES]),
		.send_val(val_interior_in),
		.send_rdy(rdy_interior_in)
	);
	genvar b;
	generate
		for (b = 0; b < (N_SAMPLES / 2); b = b + 1) begin : genblk1
			ButterflyVRTL #(
				.n(BIT_WIDTH),
				.d(DECIMAL_PT)
			) bfu_in(
				.ar(butterfly_in_real[(b * 2) * BIT_WIDTH+:BIT_WIDTH]),
				.ac(butterfly_in_imaginary[(b * 2) * BIT_WIDTH+:BIT_WIDTH]),
				.br(butterfly_in_real[((b * 2) + 1) * BIT_WIDTH+:BIT_WIDTH]),
				.bc(butterfly_in_imaginary[((b * 2) + 1) * BIT_WIDTH+:BIT_WIDTH]),
				.wr(twiddle_real[b * BIT_WIDTH+:BIT_WIDTH]),
				.wc(twiddle_imaginary[b * BIT_WIDTH+:BIT_WIDTH]),
				.recv_val(val_interior_in[b * 2] && val_interior_in[(b * 2) + 1]),
				.recv_rdy(rdy_interior_mini[b]),
				.cr(butterfly_out_real[(b * 2) * BIT_WIDTH+:BIT_WIDTH]),
				.cc(butterfly_out_imaginary[(b * 2) * BIT_WIDTH+:BIT_WIDTH]),
				.dr(butterfly_out_real[((b * 2) + 1) * BIT_WIDTH+:BIT_WIDTH]),
				.dc(butterfly_out_imaginary[((b * 2) + 1) * BIT_WIDTH+:BIT_WIDTH]),
				.send_rdy(rdy_interior_out[b * 2] && rdy_interior_out[(b * 2) + 1]),
				.send_val(val_interior_mini[b]),
				.reset(reset),
				.clk(clk)
			);
			assign val_interior_out[(b * 2) + 1] = val_interior_mini[b];
			assign val_interior_out[b * 2] = val_interior_mini[b];
			assign rdy_interior_in[(b * 2) + 1] = rdy_interior_mini[b];
			assign rdy_interior_in[b * 2] = rdy_interior_mini[b];
		end
	endgenerate
	CombinationalFFTCrossbarVRTl #(
		.BIT_WIDTH(BIT_WIDTH),
		.SIZE_FFT(N_SAMPLES),
		.STAGE_FFT(STAGE_FFT),
		.FRONT(0)
	) xbar_out_1(
		.recv_real(butterfly_out_real),
		.recv_imaginary(butterfly_out_imaginary),
		.recv_val(val_interior_out),
		.recv_rdy(rdy_interior_out),
		.send_real(send_msg_real),
		.send_imaginary(send_msg_imag),
		.send_val(val_out),
		.send_rdy(rdy_out)
	);
	TwiddleGeneratorVRTL #(
		.BIT_WIDTH(BIT_WIDTH),
		.DECIMAL_PT(DECIMAL_PT),
		.SIZE_FFT(N_SAMPLES),
		.STAGE_FFT(STAGE_FFT)
	) twiddle_generator(
		.sine_wave_in(sine_wave_out),
		.twiddle_real(twiddle_real),
		.twiddle_imaginary(twiddle_imaginary)
	);
	reg [N_SAMPLES - 1:0] imm2;
	always @(*) begin : sv2v_autoblock_2
		reg signed [31:0] i;
		for (i = 0; i < N_SAMPLES; i = i + 1)
			begin
				imm2[i] = val_out[i];
				rdy_out[i] = send_rdy;
			end
		send_val = &imm2;
	end
endmodule
module FFTVRTL (
	recv_msg,
	recv_val,
	recv_rdy,
	send_msg,
	send_val,
	send_rdy,
	reset,
	clk
);
	parameter BIT_WIDTH = 32;
	parameter DECIMAL_PT = 16;
	parameter N_SAMPLES = 8;
	input wire [(N_SAMPLES * BIT_WIDTH) - 1:0] recv_msg;
	input wire recv_val;
	output wire recv_rdy;
	output reg [(N_SAMPLES * BIT_WIDTH) - 1:0] send_msg;
	output wire send_val;
	input wire send_rdy;
	input wire reset;
	input wire clk;
	wire [(N_SAMPLES * BIT_WIDTH) - 1:0] real_msg [$clog2(N_SAMPLES):0];
	reg [(N_SAMPLES * BIT_WIDTH) - 1:0] complex_msg [$clog2(N_SAMPLES):0];
	wire val_in [$clog2(N_SAMPLES):0];
	wire rdy_in [$clog2(N_SAMPLES):0];
	wire [(N_SAMPLES * BIT_WIDTH) - 1:0] sine_wave_out;
	assign val_in[0] = recv_val;
	assign recv_rdy = rdy_in[0];
	assign send_val = val_in[$clog2(N_SAMPLES)];
	assign rdy_in[$clog2(N_SAMPLES)] = send_rdy;
	always @(*) begin : sv2v_autoblock_1
		reg signed [31:0] i;
		for (i = 0; i < N_SAMPLES; i = i + 1)
			complex_msg[0][i * BIT_WIDTH+:BIT_WIDTH] = 0;
	end
	generate
		if (N_SAMPLES == 16) begin : genblk1
			assign real_msg[0][0+:BIT_WIDTH] = recv_msg[0+:BIT_WIDTH];
			assign real_msg[0][8 * BIT_WIDTH+:BIT_WIDTH] = recv_msg[BIT_WIDTH+:BIT_WIDTH];
			assign real_msg[0][4 * BIT_WIDTH+:BIT_WIDTH] = recv_msg[2 * BIT_WIDTH+:BIT_WIDTH];
			assign real_msg[0][12 * BIT_WIDTH+:BIT_WIDTH] = recv_msg[3 * BIT_WIDTH+:BIT_WIDTH];
			assign real_msg[0][2 * BIT_WIDTH+:BIT_WIDTH] = recv_msg[4 * BIT_WIDTH+:BIT_WIDTH];
			assign real_msg[0][10 * BIT_WIDTH+:BIT_WIDTH] = recv_msg[5 * BIT_WIDTH+:BIT_WIDTH];
			assign real_msg[0][6 * BIT_WIDTH+:BIT_WIDTH] = recv_msg[6 * BIT_WIDTH+:BIT_WIDTH];
			assign real_msg[0][14 * BIT_WIDTH+:BIT_WIDTH] = recv_msg[7 * BIT_WIDTH+:BIT_WIDTH];
			assign real_msg[0][BIT_WIDTH+:BIT_WIDTH] = recv_msg[8 * BIT_WIDTH+:BIT_WIDTH];
			assign real_msg[0][9 * BIT_WIDTH+:BIT_WIDTH] = recv_msg[9 * BIT_WIDTH+:BIT_WIDTH];
			assign real_msg[0][5 * BIT_WIDTH+:BIT_WIDTH] = recv_msg[10 * BIT_WIDTH+:BIT_WIDTH];
			assign real_msg[0][13 * BIT_WIDTH+:BIT_WIDTH] = recv_msg[11 * BIT_WIDTH+:BIT_WIDTH];
			assign real_msg[0][3 * BIT_WIDTH+:BIT_WIDTH] = recv_msg[12 * BIT_WIDTH+:BIT_WIDTH];
			assign real_msg[0][11 * BIT_WIDTH+:BIT_WIDTH] = recv_msg[13 * BIT_WIDTH+:BIT_WIDTH];
			assign real_msg[0][7 * BIT_WIDTH+:BIT_WIDTH] = recv_msg[14 * BIT_WIDTH+:BIT_WIDTH];
			assign real_msg[0][15 * BIT_WIDTH+:BIT_WIDTH] = recv_msg[15 * BIT_WIDTH+:BIT_WIDTH];
			SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_16VRTL SineWave(.sine_wave_out(sine_wave_out));
		end
		else if (N_SAMPLES == 8) begin : genblk1
			assign real_msg[0][0+:BIT_WIDTH] = recv_msg[0+:BIT_WIDTH];
			assign real_msg[0][4 * BIT_WIDTH+:BIT_WIDTH] = recv_msg[BIT_WIDTH+:BIT_WIDTH];
			assign real_msg[0][2 * BIT_WIDTH+:BIT_WIDTH] = recv_msg[2 * BIT_WIDTH+:BIT_WIDTH];
			assign real_msg[0][6 * BIT_WIDTH+:BIT_WIDTH] = recv_msg[3 * BIT_WIDTH+:BIT_WIDTH];
			assign real_msg[0][BIT_WIDTH+:BIT_WIDTH] = recv_msg[4 * BIT_WIDTH+:BIT_WIDTH];
			assign real_msg[0][5 * BIT_WIDTH+:BIT_WIDTH] = recv_msg[5 * BIT_WIDTH+:BIT_WIDTH];
			assign real_msg[0][3 * BIT_WIDTH+:BIT_WIDTH] = recv_msg[6 * BIT_WIDTH+:BIT_WIDTH];
			assign real_msg[0][7 * BIT_WIDTH+:BIT_WIDTH] = recv_msg[7 * BIT_WIDTH+:BIT_WIDTH];
			SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_8VRTL SineWave(.sine_wave_out(sine_wave_out));
		end
		else if (N_SAMPLES == 4) begin : genblk1
			assign real_msg[0][0+:BIT_WIDTH] = recv_msg[0+:BIT_WIDTH];
			assign real_msg[0][2 * BIT_WIDTH+:BIT_WIDTH] = recv_msg[BIT_WIDTH+:BIT_WIDTH];
			assign real_msg[0][BIT_WIDTH+:BIT_WIDTH] = recv_msg[2 * BIT_WIDTH+:BIT_WIDTH];
			assign real_msg[0][3 * BIT_WIDTH+:BIT_WIDTH] = recv_msg[3 * BIT_WIDTH+:BIT_WIDTH];
			SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_4VRTL SineWave(.sine_wave_out(sine_wave_out));
		end
		else if (N_SAMPLES == 2) begin : genblk1
			assign real_msg[0][0+:BIT_WIDTH] = recv_msg[0+:BIT_WIDTH];
			assign real_msg[0][BIT_WIDTH+:BIT_WIDTH] = recv_msg[BIT_WIDTH+:BIT_WIDTH];
			SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_2VRTL SineWave(.sine_wave_out(sine_wave_out));
		end
	endgenerate
	genvar i;
	genvar b;
	generate
		for (i = 0; i < $clog2(N_SAMPLES); i = i + 1) begin : genblk2
			wire [N_SAMPLES * BIT_WIDTH:1] sv2v_tmp_fft_stage_send_msg_imag;
			always @(*) complex_msg[i + 1] = sv2v_tmp_fft_stage_send_msg_imag;
			FFT_StageVRTL #(
				.BIT_WIDTH(BIT_WIDTH),
				.DECIMAL_PT(DECIMAL_PT),
				.N_SAMPLES(N_SAMPLES),
				.STAGE_FFT(i)
			) fft_stage(
				.recv_msg_real(real_msg[i]),
				.recv_msg_imag(complex_msg[i]),
				.recv_val(val_in[i]),
				.recv_rdy(rdy_in[i]),
				.send_msg_real(real_msg[i + 1]),
				.send_msg_imag(sv2v_tmp_fft_stage_send_msg_imag),
				.send_val(val_in[i + 1]),
				.send_rdy(rdy_in[i + 1]),
				.sine_wave_out(sine_wave_out),
				.reset(reset),
				.clk(clk)
			);
		end
	endgenerate
	always @(*) begin : sv2v_autoblock_2
		reg signed [31:0] i;
		for (i = 0; i < N_SAMPLES; i = i + 1)
			send_msg[i * BIT_WIDTH+:BIT_WIDTH] = real_msg[$clog2(N_SAMPLES)][i * BIT_WIDTH+:BIT_WIDTH];
	end
endmodule
module FFTTestHarnessVRTL (
	recv_msg,
	recv_val,
	recv_rdy,
	send_msg,
	send_val,
	send_rdy,
	reset,
	clk
);
	parameter BIT_WIDTH = 32;
	parameter DECIMAL_PT = 16;
	parameter N_SAMPLES = 8;
	input wire [(BIT_WIDTH * N_SAMPLES) - 1:0] recv_msg;
	input wire recv_val;
	output wire recv_rdy;
	output reg [(BIT_WIDTH * N_SAMPLES) - 1:0] send_msg;
	output wire send_val;
	input wire send_rdy;
	input wire reset;
	input wire clk;
	reg [(N_SAMPLES * BIT_WIDTH) - 1:0] recv_msg_intermediate;
	wire [(N_SAMPLES * BIT_WIDTH) - 1:0] send_msg_intermediate;
	always @(*) begin : sv2v_autoblock_1
		reg signed [31:0] i;
		for (i = 0; i < N_SAMPLES; i = i + 1)
			begin
				send_msg[BIT_WIDTH * i+:BIT_WIDTH] = send_msg_intermediate[(i * BIT_WIDTH) + (BIT_WIDTH - 1)-:BIT_WIDTH];
				recv_msg_intermediate[(i * BIT_WIDTH) + (BIT_WIDTH - 1)-:BIT_WIDTH] = recv_msg[BIT_WIDTH * i+:BIT_WIDTH];
			end
	end
	FFTVRTL #(
		.BIT_WIDTH(BIT_WIDTH),
		.DECIMAL_PT(DECIMAL_PT),
		.N_SAMPLES(N_SAMPLES)
	) comb_fft(
		.recv_msg(recv_msg_intermediate),
		.recv_val(recv_val),
		.recv_rdy(recv_rdy),
		.send_msg(send_msg_intermediate),
		.send_val(send_val),
		.send_rdy(send_rdy),
		.reset(reset),
		.clk(clk)
	);
endmodule
module CombinationalFFT (
	clk,
	reset,
	recv_msg,
	recv_rdy,
	recv_val,
	send_msg,
	send_rdy,
	send_val
);
	input wire [0:0] clk;
	input wire [0:0] reset;
	input wire [255:0] recv_msg;
	output wire [0:0] recv_rdy;
	input wire [0:0] recv_val;
	output wire [255:0] send_msg;
	input wire [0:0] send_rdy;
	output wire [0:0] send_val;
	FFTTestHarnessVRTL #(
		.BIT_WIDTH(32),
		.DECIMAL_PT(16),
		.N_SAMPLES(8)
	) v(
		.clk(clk),
		.reset(reset),
		.recv_msg(recv_msg),
		.recv_rdy(recv_rdy),
		.recv_val(recv_val),
		.send_msg(send_msg),
		.send_rdy(send_rdy),
		.send_val(send_val)
	);
endmodule
