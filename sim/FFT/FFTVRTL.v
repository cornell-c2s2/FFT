
`include "FFT-Twiddle_Generator/sim/FFTTwiddleGenerator/TwiddleGeneratorVRTL.v"
`include "FFT-Twiddle_Generator/sim/FFTTwiddleGenerator/SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_16VRTL.v"
`include "FFT-Twiddle_Generator/sim/FFTTwiddleGenerator/SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_8VRTL.v"
`include "FFT-Twiddle_Generator/sim/FFTTwiddleGenerator/SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_2VRTL.v"
`include "FFT-Twiddle_Generator/sim/FFTTwiddleGenerator/SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_4VRTL.v"
`include "FFT-Crossbar/sim/CombinationalFFTCrossbar/CombinationalFFTCrossbarVRTL.v"
`include "../../../butterfly-unit/sim/butterfly/ButterflyVRTL.v"
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

    logic                   val_in         [$clog2(N_SAMPLES):0];
    logic                   rdy_in         [$clog2(N_SAMPLES):0];

    logic [BIT_WIDTH - 1:0] sine_wave_out [0:N_SAMPLES - 1];

    assign real_msg[0] = recv_msg;
    assign val_in  [0] = recv_val;
    assign recv_rdy    = rdy_in[0];

    assign send_msg                  = complex_msg[$clog2(N_SAMPLES)];
    assign send_val                  = val_in     [$clog2(N_SAMPLES)];
    assign rdy_in[$clog2(N_SAMPLES)] = send_rdy;

    


    always @(*) begin
        int i;
        for(i = 0; i < N_SAMPLES; i++) begin
            complex_msg[0][i] = 0;
        end
    end

    //Manual 8-bit bit reversal TODO make parametrized
    generate 
        if(N_SAMPLES == 16) begin
            assign real_msg[0][0] = recv_msg[0];
            assign real_msg[0][8] = recv_msg[1];
            assign real_msg[0][4] = recv_msg[2];
            assign real_msg[0][12] = recv_msg[3];
            assign real_msg[0][2] = recv_msg[4];
            assign real_msg[0][10] = recv_msg[5];
            assign real_msg[0][6] = recv_msg[6];
            assign real_msg[0][14] = recv_msg[7];
            assign real_msg[0][1] = recv_msg[8];
            assign real_msg[0][9] = recv_msg[9];
            assign real_msg[0][5] = recv_msg[10];
            assign real_msg[0][13] = recv_msg[11];
            assign real_msg[0][3] = recv_msg[12];
            assign real_msg[0][11] = recv_msg[13];
            assign real_msg[0][7] = recv_msg[14];
            assign real_msg[0][15] = recv_msg[15];
            SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_16VRTL SineWave (.sine_wave_out(sine_wave_out));
        end else if(N_SAMPLES == 8) begin
            assign real_msg[0][0] = recv_msg[0];
            assign real_msg[0][4] = recv_msg[1];
            assign real_msg[0][2] = recv_msg[2];
            assign real_msg[0][6] = recv_msg[3];
            assign real_msg[0][1] = recv_msg[4];
            assign real_msg[0][5] = recv_msg[5];
            assign real_msg[0][3] = recv_msg[6];
            assign real_msg[0][7] = recv_msg[7];
            SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_8VRTL SineWave (.sine_wave_out(sine_wave_out));
        end else if(N_SAMPLES == 4) begin
            assign real_msg[0][0] = recv_msg[0];
            assign real_msg[0][2] = recv_msg[1];
            assign real_msg[0][1] = recv_msg[2];
            assign real_msg[0][3] = recv_msg[3];
            SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_4VRTL SineWave (.sine_wave_out(sine_wave_out));
        end else if(N_SAMPLES == 2) begin
            assign real_msg[0][0] = recv_msg[0];
            assign real_msg[0][1] = recv_msg[1];
            SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_2VRTL SineWave (.sine_wave_out(sine_wave_out));
        end
    endgenerate

    
    
    generate
        genvar i;
        genvar b;
        for( i = 0; i < $clog2(N_SAMPLES); i++ ) begin
            FFT_StageVRTL #(.BIT_WIDTH(BIT_WIDTH), .DECIMAL_PT(DECIMAL_PT), .N_SAMPLES(N_SAMPLES), .STAGE_FFT(i)) fft_stage ( 
                .recv_msg_real(real_msg   [i]),
                .recv_msg_imag(complex_msg[i]),
                .recv_val     (val_in     [i]),
                .recv_rdy     (rdy_in     [i]),
        
                .send_msg_real(real_msg   [i + 1]),
                .send_msg_imag(complex_msg[i + 1]),
                .send_val     (val_in     [i + 1]),
                .send_rdy     (rdy_in     [i + 1]),

                .sine_wave_out(sine_wave_out),

                .reset        (reset),
                .clk          (clk)
                );
        end
    endgenerate

    always @(*) begin
        int i;
        for(i = 0; i < N_SAMPLES; i++) begin

            send_msg[i] = real_msg[$clog2(N_SAMPLES)][i];

        end
    end
    

endmodule


module FFT_StageVRTL
    #(
        BIT_WIDTH  = 32,
        DECIMAL_PT = 16,
        N_SAMPLES  = 8,
        STAGE_FFT  = 0
    )
    (
        input  logic [BIT_WIDTH - 1:0] recv_msg_real [N_SAMPLES - 1:0],
        input  logic [BIT_WIDTH - 1:0] recv_msg_imag [N_SAMPLES - 1:0],
        input  logic                   recv_val                  ,
        output logic                   recv_rdy                  ,

        output logic [BIT_WIDTH - 1:0] send_msg_real [N_SAMPLES - 1:0],
        output logic [BIT_WIDTH - 1:0] send_msg_imag [N_SAMPLES - 1:0],
        output logic                   send_val                  ,
        input  logic                   send_rdy                  ,

        input  logic [BIT_WIDTH - 1:0] sine_wave_out [0:N_SAMPLES - 1],

        input  logic                   reset                     ,
        input  logic                   clk
    );


    logic                   val_in         [N_SAMPLES - 1:0];
    logic                   rdy_in         [N_SAMPLES - 1:0];

    logic                   val_out        [N_SAMPLES - 1:0];
    logic                   rdy_out        [N_SAMPLES - 1:0];

    logic [N_SAMPLES - 1:0] imm;
    always @(*) begin
        int i;
        for(i = 0; i < N_SAMPLES; i++) begin

            
            val_in[i] = recv_val;
            imm[i] = rdy_in[i];
        end
        recv_rdy = &imm;
    end

    
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

    CombinationalFFTCrossbarVRTl #(.BIT_WIDTH(BIT_WIDTH),                          .SIZE_FFT(N_SAMPLES),                                     .STAGE_FFT(STAGE_FFT),              .FRONT(1)) xbar_in_1
                                  (.recv_real(recv_msg_real),                   .recv_imaginary(recv_msg_imag),                        .recv_val(val_in),       .recv_rdy(rdy_in), 
                                   .send_real(butterfly_in_real[N_SAMPLES - 1:0]), .send_imaginary(butterfly_in_imaginary[N_SAMPLES - 1:0]), .send_val(val_interior_in), .send_rdy(rdy_interior_in));

    generate
        genvar b;    
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
    endgenerate

    CombinationalFFTCrossbarVRTl #(.BIT_WIDTH(BIT_WIDTH), .SIZE_FFT(N_SAMPLES), .STAGE_FFT(STAGE_FFT), .FRONT(0)) xbar_out_1
                                  (.recv_real(butterfly_out_real), .recv_imaginary(butterfly_out_imaginary), .recv_val(val_interior_out),   .recv_rdy(rdy_interior_out), 
                                       .send_real(send_msg_real),    .send_imaginary(send_msg_imag),      .send_val(val_out), .send_rdy(rdy_out));    

    TwiddleGeneratorVRTL #( .BIT_WIDTH(BIT_WIDTH), .DECIMAL_PT(DECIMAL_PT), .SIZE_FFT(N_SAMPLES), .STAGE_FFT(STAGE_FFT) ) twiddle_generator ( .sine_wave_in(sine_wave_out), .twiddle_real(twiddle_real), .twiddle_imaginary(twiddle_imaginary) );
    
    logic [N_SAMPLES - 1:0] imm2;
    always @(*) begin
        int i;
        for(i = 0; i < N_SAMPLES; i++) begin

            imm2[i] = val_out[i];
            rdy_out[i] = send_rdy;

        end
        send_val = &imm2;
    end
endmodule