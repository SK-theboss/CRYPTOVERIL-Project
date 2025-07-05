module enc_stage1 (
    input wire clk,
    input wire rst,
    input wire valid_in,
    input wire [15:0] in_data,
    input wire [2:0] key_bits,
    output reg [15:0] out_data,
    output reg valid_out
);
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            out_data <= 0;
            valid_out <= 0;
        end else if (valid_in) begin
            out_data <= (in_data << key_bits) + key_bits;
            valid_out <= 1;
        end else begin
            valid_out <= 0;
        end
    end
endmodule

