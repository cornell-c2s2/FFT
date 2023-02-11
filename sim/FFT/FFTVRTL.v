
`include "FFT-Twiddle_Generator/sim/FFTTwiddleGenerator/TwiddleGeneratorVRTL.v"
`include "FFT-Twiddle_Generator/sim/FFTTwiddleGenerator/SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_8VRTL.v"
`include "FFT-Twiddle_Generator/sim/FFTTwiddleGenerator/SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_2VRTL.v"
`include "FFT-Crossbar/sim/CombinationalFFTCrossbar/CombinationalFFTCrossbarVRTL.v"
`include "butterfly-unit/sim/butterfly/ButterflyVRTL.v"
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
            complex_msg[0][i] = 0;
            
            val_in[0][i] = recv_val;
            imm[i] = rdy_in[0][i];
        end
        recv_rdy = &imm & !send_rdy;
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

            imm2[i] = val_in[$clog2(N_SAMPLES)][i];
            rdy_in[$clog2(N_SAMPLES)][i] = send_rdy;

            send_msg[i] = real_msg[$clog2(N_SAMPLES)][i];

        end
        send_val = &imm2;
    end


endmodule