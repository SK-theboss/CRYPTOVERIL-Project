module cryptoveril (
    input wire clk1, clk2, clk3,
    input wire rst,
    input wire [15:0] input_data,
    input wire [5:0] key_bits,
    output wire [15:0] output_data
);

    // Stage 1 to Buffer 1-2
    wire [15:0] stage1_out;
    wire stage1_valid;
    wire buf1_ready;

    // Buffer 1-2 to Stage 2
    wire [15:0] buf1_out;
    wire buf1_valid;
    wire stage2_ready;

    // Stage 2 to Buffer 2-3
    wire [15:0] stage2_out;
    wire stage2_valid;
    wire buf2_ready;

    // Buffer 2-3 to Stage 3
    wire [15:0] buf2_out;
    wire buf2_valid;
    wire stage3_ready;

    wire stage3_valid;

    // Stage 1
    enc_stage1 u_stage1 (
        .clk(clk1),
        .rst(rst),
        .valid_in(1'b1),
        .in_data(input_data),
        .key_bits(key_bits[2:0]),
        .out_data(stage1_out),
        .valid_out(stage1_valid)
    );

    // Buffer 1-2
    buffer_1_2 u_buf1 (
        .clk(clk1),
        .rst(rst),
        .data_in(stage1_out),
        .valid_in(stage1_valid),
        .ready_out(buf1_ready),
        .data_out(buf1_out),
        .valid_out(buf1_valid),
        .ready_in(stage2_ready)
    );

    // Stage 2
    enc_stage2 u_stage2 (
        .clk(clk2),
        .rst(rst),
        .valid_in(buf1_valid),
        .in_data(buf1_out),
        .key_bits(key_bits[4:3]),
        .ready_in(buf2_ready),
        .out_data(stage2_out),
        .valid_out(stage2_valid),
        .ready_out(stage2_ready)
    );

    // Buffer 2-3
    buffer_2_3 u_buf2 (
        .clk(clk2),
        .rst(rst),
        .data_in(stage2_out),
        .valid_in(stage2_valid),
        .ready_out(buf2_ready),
        .data_out(buf2_out),
        .valid_out(buf2_valid),
        .ready_in(stage3_ready)
    );

    // Stage 3
    enc_stage3 u_stage3 (
        .clk(clk3),
        .rst(rst),
        .valid_in(buf2_valid),
        .in_data(buf2_out),
        .ready_in(1'b1),
        .out_data(output_data),
        .valid_out(stage3_valid),
        .ready_out(stage3_ready)
    );
endmodule
