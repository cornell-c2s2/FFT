
`include "FFT-Twiddle_Generator/sim/FFTTwiddleGenerator/TwiddleGeneratorVRTL.v"
`include "FFT-Twiddle_Generator/sim/FFTTwiddleGenerator/SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_16VRTL.v"
`include "FFT-Twiddle_Generator/sim/FFTTwiddleGenerator/SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_8VRTL.v"
`include "FFT-Twiddle_Generator/sim/FFTTwiddleGenerator/SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_2VRTL.v"
`include "FFT-Twiddle_Generator/sim/FFTTwiddleGenerator/SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_4VRTL.v"
`include "FFT-Crossbar/sim/CombinationalFFTCrossbar/CombinationalFFTCrossbarVRTL.v"
`include "../../../butterfly-unit/sim/butterfly/ButterflyVRTL.v"
`include "../../../FFT/sim/FFT/FFT_StageVRTL.v"
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


    assign val_in  [0] = recv_val;
    assign recv_rdy    = rdy_in[0];

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

