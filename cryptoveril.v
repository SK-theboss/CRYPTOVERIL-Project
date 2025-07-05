module cryptoveril (
    input wire clk,
    input wire rst,
    input wire [7:0] data_in,
    output wire [7:0] data_out
);
    wire [7:0] stage1_out, stage2_out, stage3_out;
    wire [7:0] buf1_out, buf2_out;

    enc_stage1 u1 (.clk(clk), .rst(rst), .data_in(data_in), .data_out(stage1_out));
    buffer_1_2 b1 (.clk(clk), .rst(rst), .data_in(stage1_out), .data_out(buf1_out));
    enc_stage2 u2 (.clk(clk), .rst(rst), .data_in(buf1_out), .data_out(stage2_out));
    buffer_2_3 b2 (.clk(clk), .rst(rst), .data_in(stage2_out), .data_out(buf2_out));
    enc_stage3 u3 (.clk(clk), .rst(rst), .data_in(buf2_out), .data_out(data_out));
endmodule
