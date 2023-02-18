
`include "./FFT_StageVRTL.v"

module FFTStageTestHarnessVRTL
    #(
        BIT_WIDTH  = 32,
        DECIMAL_PT = 16,
        N_SAMPLES  = 8,
        STAGE_FFT  = 0
    )
    (
        input  logic [2 * BIT_WIDTH * N_SAMPLES - 1:0] recv_msg,
        input  logic                   recv_val,
        output logic                   recv_rdy,

        output logic [2 * BIT_WIDTH * N_SAMPLES - 1:0] send_msg,
        output logic                   send_val,
        input  logic                   send_rdy,

        input  logic                   reset,
        input  logic                   clk
    );
    
    logic [BIT_WIDTH - 1:0] recv_msg_intermediate [2 * N_SAMPLES - 1:0];
    logic [BIT_WIDTH - 1:0] send_msg_intermediate [2 * N_SAMPLES - 1:0];

    logic [BIT_WIDTH - 1:0] sine_wave_out [0:N_SAMPLES - 1];

    always @(*) begin
        int i;
        for(i = 0; i < 2 * N_SAMPLES; i = i + 1) begin

            send_msg   [BIT_WIDTH * i +: BIT_WIDTH] = send_msg_intermediate [i][BIT_WIDTH - 1:0];
            recv_msg_intermediate [i][BIT_WIDTH - 1:0]        = recv_msg[BIT_WIDTH * i +: BIT_WIDTH];
        end
    end

    generate 
        if(N_SAMPLES == 16) begin
            SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_16VRTL SineWave (.sine_wave_out(sine_wave_out));
        end else if(N_SAMPLES == 8) begin
            SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_8VRTL SineWave (.sine_wave_out(sine_wave_out));
        end else if(N_SAMPLES == 4) begin
            SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_4VRTL SineWave (.sine_wave_out(sine_wave_out));
        end else if(N_SAMPLES == 2) begin
            SineWave__BIT_WIDTH_32__DECIMAL_POINT_16__SIZE_FFT_2VRTL SineWave (.sine_wave_out(sine_wave_out));
        end
    endgenerate

    FFT_StageVRTL #( .BIT_WIDTH(BIT_WIDTH), .DECIMAL_PT(DECIMAL_PT), .N_SAMPLES(N_SAMPLES), .STAGE_FFT(STAGE_FFT)) fft_stage
    (
        .recv_msg_real(recv_msg_intermediate[2 * N_SAMPLES - 1: N_SAMPLES]),
        .recv_msg_imag(recv_msg_intermediate[    N_SAMPLES - 1: 0        ]),
        .recv_val(recv_val),
        .recv_rdy(recv_rdy),

        .send_msg_real(send_msg_intermediate[2 * N_SAMPLES - 1: N_SAMPLES]),
        .send_msg_imag(send_msg_intermediate[    N_SAMPLES - 1: 0        ]),
        .send_val(send_val),
        .send_rdy(send_rdy),

        .sine_wave_out(sine_wave_out),

        .reset(reset),
        .clk(clk)
    );

endmodule
