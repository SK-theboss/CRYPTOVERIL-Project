module enc_stage3 (
    input wire clk,
    input wire rst,
    input wire valid_in,
<<<<<<< HEAD
    input wire [15:0] in_data,
    input wire ready_in,
=======
    input wire ready_in,
    input wire [15:0] in_data,
>>>>>>> a0fa7d5 (Updated)
    output reg [15:0] out_data,
    output reg valid_out,
    output reg ready_out
);

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            out_data <= 0;
            valid_out <= 0;
            ready_out <= 0;
        end else if (valid_in && ready_in) begin
<<<<<<< HEAD
            out_data <= in_data ^ 16'hAAAA; // Final cleanup
=======
            out_data <= in_data[15:0]; // Simply forward for now
>>>>>>> a0fa7d5 (Updated)
            valid_out <= 1;
            ready_out <= 1;
        end else begin
            valid_out <= 0;
            ready_out <= 0;
        end
    end
endmodule
