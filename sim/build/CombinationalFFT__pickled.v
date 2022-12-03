//-------------------------------------------------------------------------
// CombinationalFFT.v
//-------------------------------------------------------------------------
// This file is generated by PyMTL SystemVerilog translation pass.

// PyMTL VerilogPlaceholder FFTTestHarnessVRTL Definition
// Full name: FFTTestHarnessVRTL__BIT_WIDTH_32__DECIMAL_PT_16__N_SAMPLES_8
// At /home/will/Desktop/FFT/sim/FFT/FFTTestHarnessRTL.py

//***********************************************************
// Pickled source file of placeholder FFTTestHarnessVRTL__BIT_WIDTH_32__DECIMAL_PT_16__N_SAMPLES_8
//***********************************************************

//-----------------------------------------------------------
// Dependency of placeholder FFTTestHarnessVRTL
//-----------------------------------------------------------

`ifndef FFTTESTHARNESSVRTL
`define FFTTESTHARNESSVRTL

// The source code below are included because they are specified
// as the v_libs Verilog placeholder option of component FFTTestHarnessVRTL__BIT_WIDTH_32__DECIMAL_PT_16__N_SAMPLES_8.

// If you get a duplicated def error from files included below, please
// make sure they are included either through the v_libs option or the
// explicit `include statement in the Verilog source code -- if they
// appear in both then they will be included twice!


// End of all v_libs files for component FFTTestHarnessVRTL__BIT_WIDTH_32__DECIMAL_PT_16__N_SAMPLES_8

`line 1 "FFTTestHarnessVRTL.v" 0

`line 1 "./FFTVRTL.v" 0

`line 1 "./FFT-Twiddle_Generator/sim/FFTTwiddleGenerator/TwiddleGeneratorVRTL.v" 0
`ifndef TWIDDLE_GENERATOR
`define TWIDDLE_GENERATOR
module TwiddleGeneratorVRTL 
   #(
        BIT_WIDTH     = 4,
        DECIMAL_PT    = 2,
        SIZE_FFT      = 8,
        STAGE_FFT     = 0 
    )
    (
        input logic  [BIT_WIDTH - 1:0] sine_wave_in     [0:SIZE_FFT - 1], //sine_wave_in = sin(2*pi m / N)
        
        output logic [BIT_WIDTH - 1:0] twiddle_real     [SIZE_FFT/2 - 1:0],
        output logic [BIT_WIDTH - 1:0] twiddle_imaginary[SIZE_FFT/2 - 1:0]
    );

    int trace;
    assign trace =  ( 0 * ( SIZE_FFT / ( 2* (2**STAGE_FFT) ) ) ) % SIZE_FFT;
    int trace2;
    assign trace2 = ( 1 * ( SIZE_FFT / ( 2* (2**STAGE_FFT) ) ) ) % SIZE_FFT;
    int trace3;
    assign trace3 = ( 2 * ( SIZE_FFT / ( 2* (2**STAGE_FFT) ) ) ) % SIZE_FFT;
    int trace4;
    assign trace4 = ( 3 * ( SIZE_FFT / ( 2* (2**STAGE_FFT) ) ) ) % SIZE_FFT;
    generate
        genvar m;
        for(m = 0; m < 2 ** STAGE_FFT; m = m + 1) begin
            genvar i;
            for(i = 0; i < SIZE_FFT; i = i + 2 ** (STAGE_FFT + 1) ) begin
                if(m != 0) begin
                    assign twiddle_real     [i/2 + m] =  sine_wave_in[(  ( m * ( SIZE_FFT / ( 2 * (2**STAGE_FFT) ) ) ) % SIZE_FFT ) + SIZE_FFT/4];
                    assign twiddle_imaginary[i/2 + m] =  sine_wave_in[(  ( m * ( SIZE_FFT / ( 2 * (2**STAGE_FFT) ) ) ) % SIZE_FFT )              ];
                end else begin
                    assign twiddle_real     [i/2 + m] = 1 << DECIMAL_PT;
                    assign twiddle_imaginary[i/2 + m] = 0;
                end
            end
        end
    endgenerate

endmodule

`endif
`line 3 "./FFTVRTL.v" 0
`line 1 "./FFT-Twiddle_Generator/sim/FFTTwiddleGenerator/SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_8VRTL.v" 0
//SINE WAVE OF BIT_WIDTH = 32, DECIMAL_PT =  16
//FOR FFT OF SIZE = 8
module SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_8VRTL
   (
       output logic [32 - 1:0] sine_wave_out [0:8 - 1]
   );
   assign sine_wave_out[0] = 0;
   assign sine_wave_out[1] = 46340;
   assign sine_wave_out[2] = 65536;
   assign sine_wave_out[3] = 46340;
   assign sine_wave_out[4] = 0;
   assign sine_wave_out[5] = -46340;
   assign sine_wave_out[6] = -65536;
   assign sine_wave_out[7] = -46340;
endmodule
`line 4 "./FFTVRTL.v" 0
`line 1 "./FFT-Twiddle_Generator/sim/FFTTwiddleGenerator/SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_2VRTL.v" 0
//SINE WAVE OF BIT_WIDTH = 32, DECIMAL_PT =  16
//FOR FFT OF SIZE = 2
module SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_2VRTL
   (
       output logic [32 - 1:0] sine_wave_out [0:2 - 1]
   );
   assign sine_wave_out[0] = 0;
   assign sine_wave_out[1] = 0;
endmodule
`line 5 "./FFTVRTL.v" 0
`line 1 "./FFT-Crossbar/sim/CombinationalFFTCrossbar/CombinationalFFTCrossbarVRTL.v" 0
`ifndef COMBINATIONAL_FFT_CROSSBAR
`define COMBINATIONAL_FFT_CROSSBAR

module CombinationalFFTCrossbarVRTl
   #(
        BIT_WIDTH  = 32,
        SIZE_FFT   = 8 ,
        STAGE_FFT  = 0 ,
        FRONT      = 1 
    )
    (
        input  logic  [BIT_WIDTH - 1:0] recv_real      [SIZE_FFT - 1:0],
        input  logic  [BIT_WIDTH - 1:0] recv_imaginary [SIZE_FFT - 1:0],
        input  logic                    recv_val       [SIZE_FFT - 1:0],
        output logic                    recv_rdy       [SIZE_FFT - 1:0],

        output logic [BIT_WIDTH - 1:0] send_real       [SIZE_FFT - 1:0],
        output logic [BIT_WIDTH - 1:0] send_imaginary  [SIZE_FFT - 1:0],
        output logic                   send_val        [SIZE_FFT - 1:0],
        input  logic                   send_rdy        [SIZE_FFT - 1:0]
    );
    generate
        genvar m;
        for( m = 0; m < 2 ** STAGE_FFT; m = m + 1 ) begin
            genvar i;
            for(i = m; i < SIZE_FFT; i = i + 2 ** ( STAGE_FFT + 1 ) ) begin
                    if(FRONT == 1) begin  
                        assign send_real     [i + m] = recv_real     [i];
                        assign send_imaginary[i + m] = recv_imaginary[i];
                        assign send_val      [i + m] = recv_val      [i];
                        assign recv_rdy      [i + m] = send_rdy      [i];

                        assign send_real     [i + m + 1] = recv_real     [i + 2**STAGE_FFT];
                        assign send_imaginary[i + m + 1] = recv_imaginary[i + 2**STAGE_FFT];
                        assign send_val      [i + m + 1] = recv_val      [i + 2**STAGE_FFT];
                        assign recv_rdy      [i + m + 1] = send_rdy      [i + 2**STAGE_FFT];
                    end else begin  
                        assign send_real     [i] = recv_real     [i + m];
                        assign send_imaginary[i] = recv_imaginary[i + m];
                        assign send_val      [i] = recv_val      [i + m];
                        assign recv_rdy      [i] = send_rdy      [i + m];

                        assign send_real     [i + 2**STAGE_FFT] = recv_real     [i + m + 1];
                        assign send_imaginary[i + 2**STAGE_FFT] = recv_imaginary[i + m + 1];
                        assign send_val      [i + 2**STAGE_FFT] = recv_val      [i + m + 1];
                        assign recv_rdy      [i + 2**STAGE_FFT] = send_rdy      [i + m + 1];
                    end
            end
        end
    endgenerate

endmodule

`endif
`line 6 "./FFTVRTL.v" 0
`line 1 "./C2S2-Module-Library/butterfly/sim/butterfly/ButterflyVRTL.v" 0
`ifndef PROJECT_BUTTERFLY_V
`define PROJECT_BUTTERFLY_V
`line 1 "C2S2-Module-Library/lib/sim/fixedpt-iterative-complex-multiplier/FpcmultVRTL.v" 0
`ifndef FIXED_POINT_ITERATIVE_COMPLEX_MULTIPLIER
`define FIXED_POINT_ITERATIVE_COMPLEX_MULTIPLIER
`line 1 "C2S2-Module-Library/lib/sim/fixedpt-iterative-multiplier/FpmultVRTL.v" 0
`ifndef FIXED_POINT_ITERATIVE_MULTIPLIER
`define FIXED_POINT_ITERATIVE_MULTIPLIER

interface stateI #( parameter n, parameter d ) ();
  logic [n+d-1:0] acc; // this needs to be n+d bits because the decimal portion of the multiplication may overflow
  logic [$clog2(n+1)-1:0] counter;

  modport in ( input acc, input counter );
  modport out ( output acc, output counter );
  modport io ( inout acc, inout counter );
endinterface

module fpmulit_inner # (
  parameter n,
  parameter d,
  parameter sign
) (a, b, in, out, rdy);
  input logic [n-1:0] b;
  input logic [n+d-1:0] a;
  output logic rdy;
  stateI.in in;
  stateI.out out;

  reg [n+d-1:0] tmp;
  reg [2*n-1:0] tt;
  always @(*) begin
    tmp = 0;
    if (b[in.counter]) begin
      tmp = a << in.counter;
      if (sign & in.counter == n-1) begin// sign bit (if multiplier is signed)
        tt = { {(n-d){a[n+d-1]}}, a};
        tt = ((tt << n) - tt) << (n-1);
        tmp = tt[n+d-1:0];
      end
    end
    tmp = tmp + in.acc;     
    rdy = in.counter == n-1;
    out.acc = tmp;
    out.counter = in.counter + 1;
  end
endmodule

module FpmultVRTL
# (
  parameter n = 32, // bit width
  parameter d = 16, // number of decimal bits
  parameter sign = 1 // 1 if signed, 0 otherwise.
) (clk, reset, recv_val, recv_rdy, send_val, send_rdy, a, b, c);
  // performs the operation c = a*b
  // Equivalent to taking the integer representations of both numbers,
  // multiplying, and then shifting right
  input logic clk, reset;
  input logic recv_val, send_rdy;
  input logic [n-1:0] a, b;
  output logic [n-1:0] c;
  output logic send_val, recv_rdy;
  reg [n-1:0] hb, hc;
  reg [n+d-1:0] ha;
  reg rdy;
  stateI #(.n(n), .d(d)) cinI ();
  stateI #(.n(n), .d(d)) ctI ();

  fpmulit_inner #(.n(n), .d(d), .sign(sign)) mult (
    .a(ha),
    .b(hb),
    .in(cinI),
    .out(ctI),
    .rdy(rdy)
  );

  always @(posedge clk) begin
    if (reset) begin
      recv_rdy <= 1;
      send_val <= 0;
    end

    if (recv_val & recv_rdy) begin // we are ready to recieve data
      ha <= {{d{(sign != 0) & a[n-1]}}, a};
      hb <= b;
      recv_rdy <= 0;
      cinI.acc <= 0;
      cinI.counter <= 0;
      send_val <= 0;
    end

    if (~recv_rdy) begin
      cinI.acc <= ctI.acc;
      cinI.counter <= ctI.counter;
    end

    if (~recv_rdy & send_rdy & send_val) begin // reciever is ready for input
      recv_rdy <= 1;
    end

    if (rdy & ~recv_rdy & ~send_val) begin
      send_val <= 1;
      c <= ctI.acc[n+d-1:d];
    end
  end
endmodule
`endif

`line 4 "C2S2-Module-Library/lib/sim/fixedpt-iterative-complex-multiplier/FpcmultVRTL.v" 0

module FpcmultVRTL
# (
	parameter n = 32, // bit width
	parameter d = 16 // number of decimal bits
) (clk, reset, recv_val, recv_rdy, send_val, send_rdy, ar, ac, br, bc, cr, cc);
	// performs c = a * b on complex a and b
  input logic clk, reset;
  input logic recv_val, send_rdy;
	input logic [n-1:0] ar, ac, br, bc;
  output logic send_val, recv_rdy;
	output logic [n-1:0] cr, cc;

	initial begin
		recv_rdy = 1;
	end

	// cr = (ar * br) - (ac * bc)
	// cc = (ar * bc) + (br * ac) = (ar + ac)(br + bc) - (ac * bc) - (ar * br)

	logic [n-1:0] arbr, acbc, ab, a, b; // temporary values
	logic arbr_rdy, acbc_rdy, ab_rdy, sab_rdy;
	logic m1_recv_rdy, m2_recv_rdy, m3_recv_rdy;
	reg [n-1:0] act, art, bct, brt;

	FpmultVRTL #(.n(n), .d(d), .sign(1)) m1 ( // ar * br
		.clk(clk),
		.reset(reset),
		.a(art),
		.b(brt),
		.c(arbr),
		.recv_val(sab_rdy),
		.recv_rdy(m1_recv_rdy),
		.send_val(arbr_rdy),
		.send_rdy(1'b1)
	);

	FpmultVRTL #(.n(n), .d(d), .sign(1)) m2 ( // ac * bc
		.clk(clk),
		.reset(reset),
		.a(act),
		.b(bct),
		.c(acbc),
		.recv_val(sab_rdy),
		.recv_rdy(m2_recv_rdy),
		.send_val(acbc_rdy),
		.send_rdy(1'b1)
	);

	FpmultVRTL #(.n(n), .d(d), .sign(1)) m3 ( // (ar + ac) * (br + bc)
		.clk(clk),
		.reset(reset),
		.a(a),
		.b(b),
		.c(ab),
		.recv_val(sab_rdy),
		.recv_rdy(m3_recv_rdy),
		.send_val(ab_rdy),
		.send_rdy(1'b1)
	);

	assign cr = arbr - acbc;
	assign cc = ab - arbr - acbc;

	always @(posedge clk) begin
    if (reset) begin
      recv_rdy <= 1;
      send_val <= 0;
      sab_rdy <= 0;
    end

		if (recv_val & recv_rdy) begin 
			sab_rdy <= 1;
			a <= ar + ac;
			b <= br + bc;
			act <= ac;
			art <= ar;
			bct <= bc;
			brt <= br;
			recv_rdy <= 0;
			send_val <= 0;
		end

		if (sab_rdy) begin
			sab_rdy <= 0;
		end

		if (~sab_rdy & ~send_val & arbr_rdy & acbc_rdy & ab_rdy) begin // all multipliers are done!
			send_val <= 1;
		end

		if (~recv_rdy & send_val & send_rdy) begin
			recv_rdy <= 1;
		end
	end
endmodule

`endif

`line 4 "./C2S2-Module-Library/butterfly/sim/butterfly/ButterflyVRTL.v" 0
module ButterflyVRTL
#(
	parameter n = 32,
	parameter d = 16
) (clk, reset, recv_val, recv_rdy, send_val, send_rdy, ar, ac, br, bc, wr, wc, cr, cc, dr, dc);
	/* performs the butterfly operation, equivalent to doing
		| 1  w |   | a |   | c |
		| 1 -w | * | b | = | d |
	*/

	input logic clk, reset;
	input logic recv_val, send_rdy;
	input logic [n-1:0] ar, ac, br, bc, wr, wc;
	output logic send_val, recv_rdy;
	output logic [n-1:0] cr, cc, dr, dc;

	logic mul_rdy;
	logic [n-1:0] tr, tc;

	FpcmultVRTL #(.n(n), .d(d)) mul ( // ar * br
		.clk(clk),
		.reset(reset),
		.ar(br),
		.ac(bc),
		.br(wr),
		.bc(wc),
		.cr(tr),
		.cc(tc),
		.recv_val(recv_val),
		.recv_rdy(),
		.send_val(mul_rdy),
		.send_rdy(1'b1)
	);

	always @(posedge clk) begin
		if (reset) begin
			send_val <= 0;
			recv_rdy <= 1;
		end

		if (recv_val & recv_rdy) begin
			cr <= ar;
			cc <= ac;
			dr <= ar;
			dc <= ac;
			recv_rdy <= 0;
			send_val <= 0;
		end

		if (~send_val & mul_rdy) begin // all multipliers are done!
			cr <= cr + tr;
			cc <= cc + tc;
			dr <= dr - tr;
			dc <= dc - tc;
			send_val <= 1;
		end

		if (~recv_rdy & send_val & send_rdy) begin
			recv_rdy <= 1;
		end
	end
endmodule
`endif

`line 7 "./FFTVRTL.v" 0
module FFTVRTL 
   #(
        BIT_WIDTH  = 32,
        DECIMAL_PT = 16,
        N_SAMPLES  = 8
    )
    (
        input  logic [BIT_WIDTH - 1:0] recv_msg [N_SAMPLES - 1:0],
        input  logic                   recv_val                  ,
        output logic                   recv_rdy                  ,

        output logic [BIT_WIDTH - 1:0] send_msg [N_SAMPLES - 1:0],
        output logic                   send_val                  ,
        input  logic                   send_rdy                  ,

        input  logic                   reset                     ,
        input  logic                   clk
    );

    logic [BIT_WIDTH - 1:0] real_msg       [$clog2(N_SAMPLES):0][N_SAMPLES - 1:0];
    logic [BIT_WIDTH - 1:0] complex_msg    [$clog2(N_SAMPLES):0][N_SAMPLES - 1:0];

    logic                   val_in         [$clog2(N_SAMPLES):0][N_SAMPLES - 1:0];
    logic                   rdy_in         [$clog2(N_SAMPLES):0][N_SAMPLES - 1:0];

    logic [BIT_WIDTH - 1:0] sine_wave_out [0:N_SAMPLES - 1];

 

    //Manual 8-bit bit reversal TODO make parametrized
    generate 
        if(N_SAMPLES == 8) begin
            assign real_msg[0][0] = recv_msg[0];
            assign real_msg[0][4] = recv_msg[1];
            assign real_msg[0][2] = recv_msg[2];
            assign real_msg[0][6] = recv_msg[3];
            assign real_msg[0][1] = recv_msg[4];
            assign real_msg[0][5] = recv_msg[5];
            assign real_msg[0][3] = recv_msg[6];
            assign real_msg[0][7] = recv_msg[7];
            SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_8VRTL SineWave (.sine_wave_out(sine_wave_out));
        end else if(N_SAMPLES == 2) begin
            assign real_msg[0][0] = recv_msg[0];
            assign real_msg[0][1] = recv_msg[1];
            SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_2VRTL SineWave (.sine_wave_out(sine_wave_out));
        end
    endgenerate

    logic [N_SAMPLES - 1:0] imm;
    always @(*) begin
        int i;
        for(i = 0; i < N_SAMPLES; i++) begin
            assign complex_msg[0][i] = 0;
            
            assign val_in[0][i] = recv_val;
            assign imm[i] = rdy_in[0][i];
        end
        assign recv_rdy = &imm;
    end
    
    generate
        genvar i;
        genvar b;
        for( i = 0; i < $clog2(N_SAMPLES); i++ ) begin

            logic [BIT_WIDTH - 1:0] butterfly_in_real       [N_SAMPLES - 1:0];
            logic [BIT_WIDTH - 1:0] butterfly_out_real      [N_SAMPLES - 1:0];
            logic [BIT_WIDTH - 1:0] butterfly_in_imaginary  [N_SAMPLES - 1:0];
            logic [BIT_WIDTH - 1:0] butterfly_out_imaginary [N_SAMPLES - 1:0];

            logic                   val_interior_in         [N_SAMPLES - 1:0];
            logic                   rdy_interior_in         [N_SAMPLES - 1:0];
            logic                   val_interior_out        [N_SAMPLES - 1:0];
            logic                   rdy_interior_out        [N_SAMPLES - 1:0];

            logic [BIT_WIDTH - 1:0] twiddle_real            [N_SAMPLES/2 - 1:0];
            logic [BIT_WIDTH - 1:0] twiddle_imaginary       [N_SAMPLES/2 - 1:0];

            CombinationalFFTCrossbarVRTl #(.BIT_WIDTH(BIT_WIDTH), .SIZE_FFT(N_SAMPLES), .STAGE_FFT(i), .FRONT(1)) xbar_in_1
                                          (.recv_real(real_msg[i]),       .recv_imaginary(complex_msg[i]),         .recv_val(val_in[i]), .recv_rdy(rdy_in[i]), 
                                           .send_real(butterfly_in_real[N_SAMPLES - 1:0]), .send_imaginary(butterfly_in_imaginary[N_SAMPLES - 1:0]), .send_val(val_interior_in),                .send_rdy(rdy_interior_in)); 
            
            for( b = 0; b < N_SAMPLES/2; b++) begin
                ButterflyVRTL #( .n(BIT_WIDTH), .d(DECIMAL_PT) ) bfu_in ( .ar(butterfly_in_real[ b * 2     ]), .ac(butterfly_in_imaginary[ b * 2     ]), 
                                                                          .br(butterfly_in_real[(b * 2) + 1]), .bc(butterfly_in_imaginary[(b * 2) + 1]), 
                                                                          .wr(twiddle_real     [b]),           .wc(twiddle_imaginary     [b]          ),
                                                                          .recv_val(val_interior_in[b * 2] && val_interior_in[(b * 2) + 1]), .recv_rdy(rdy_interior_in[b * 2]),
                                                                          .cr(butterfly_out_real[b * 2]),       .cc(butterfly_out_imaginary[b * 2]), 
                                                                          .dr(butterfly_out_real[(b * 2) + 1]), .dc(butterfly_out_imaginary[(b * 2) + 1]),
                                                                          .send_rdy(rdy_interior_out[b * 2] && rdy_interior_out[(b * 2) + 1]), .send_val(val_interior_out[b * 2]),
                                                                          .reset(reset), .clk(clk));
                assign rdy_interior_in [(b * 2) + 1] = rdy_interior_in [b * 2];
                assign val_interior_out[(b * 2) + 1] = val_interior_out[b * 2];
            end

            CombinationalFFTCrossbarVRTl #(.BIT_WIDTH(BIT_WIDTH), .SIZE_FFT(N_SAMPLES), .STAGE_FFT(i), .FRONT(0)) xbar_out_1
                                          (.recv_real(butterfly_out_real), .recv_imaginary(butterfly_out_imaginary), .recv_val(val_interior_out),   .recv_rdy(rdy_interior_out), 
                                           .send_real(real_msg[i + 1]),    .send_imaginary(complex_msg[i + 1]),      .send_val(val_in[i + 1]), .send_rdy(rdy_in[i + 1]));    

            TwiddleGeneratorVRTL #( .BIT_WIDTH(BIT_WIDTH), .DECIMAL_PT(DECIMAL_PT), .SIZE_FFT(N_SAMPLES), .STAGE_FFT(i) ) twiddle_generator ( .sine_wave_in(sine_wave_out), .twiddle_real(twiddle_real), .twiddle_imaginary(twiddle_imaginary) );         
        end
    endgenerate

    
    logic [N_SAMPLES - 1:0] imm2;
    always @(*) begin
        int i;
        for(i = 0; i < N_SAMPLES; i++) begin

            assign imm2[i] = val_in[$clog2(N_SAMPLES)][i];
            assign rdy_in[$clog2(N_SAMPLES)][i] = send_rdy;

            send_msg[i] = real_msg[$clog2(N_SAMPLES)][i];

        end
        assign send_val = &imm2;
    end


endmodule
`line 3 "FFTTestHarnessVRTL.v" 0

module FFTTestHarnessVRTL
    #(
        BIT_WIDTH  = 32,
        DECIMAL_PT = 16,
        N_SAMPLES  = 8
    )
    (
        input  logic [BIT_WIDTH * N_SAMPLES - 1:0] recv_msg,
        input  logic                   recv_val,
        output logic                   recv_rdy,

        output logic [BIT_WIDTH * N_SAMPLES - 1:0] send_msg,
        output logic                   send_val,
        input  logic                   send_rdy,

        input  logic                   reset,
        input  logic                   clk
    );
    
    logic [BIT_WIDTH - 1:0] recv_msg_intermediate [N_SAMPLES - 1:0];
    logic [BIT_WIDTH - 1:0] send_msg_intermediate [N_SAMPLES - 1:0];

    always @(*) begin
        int i;
        for(i = 0; i < N_SAMPLES; i = i + 1) begin

            send_msg   [BIT_WIDTH * i +: BIT_WIDTH] = send_msg_intermediate [i][BIT_WIDTH - 1:0];
            recv_msg_intermediate [i][BIT_WIDTH - 1:0]        = recv_msg[BIT_WIDTH * i +: BIT_WIDTH];
        end
    end

    FFTVRTL #( .BIT_WIDTH(BIT_WIDTH), .DECIMAL_PT(DECIMAL_PT), .N_SAMPLES(N_SAMPLES)) comb_fft
    (
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

`endif /* FFTTESTHARNESSVRTL */
//-----------------------------------------------------------
// Wrapper of placeholder FFTTestHarnessVRTL__BIT_WIDTH_32__DECIMAL_PT_16__N_SAMPLES_8
//-----------------------------------------------------------

`ifndef FFTTESTHARNESSVRTL__BIT_WIDTH_32__DECIMAL_PT_16__N_SAMPLES_8
`define FFTTESTHARNESSVRTL__BIT_WIDTH_32__DECIMAL_PT_16__N_SAMPLES_8

module CombinationalFFT
(
  input logic [1-1:0] clk ,
  input logic [1-1:0] reset ,
  input logic [256-1:0] recv_msg ,
  output logic [1-1:0] recv_rdy ,
  input logic [1-1:0] recv_val ,
  output logic [256-1:0] send_msg ,
  input logic [1-1:0] send_rdy ,
  output logic [1-1:0] send_val 
);
  FFTTestHarnessVRTL
  #(
    .BIT_WIDTH( 32 ),
    .DECIMAL_PT( 16 ),
    .N_SAMPLES( 8 )
  ) v
  (
    .clk( clk ),
    .reset( reset ),
    .recv_msg( recv_msg ),
    .recv_rdy( recv_rdy ),
    .recv_val( recv_val ),
    .send_msg( send_msg ),
    .send_rdy( send_rdy ),
    .send_val( send_val )
  );
endmodule

`endif /* FFTTESTHARNESSVRTL__BIT_WIDTH_32__DECIMAL_PT_16__N_SAMPLES_8 */
