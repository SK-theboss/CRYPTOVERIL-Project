module buffer_2_3 (
    input wire clk,
    input wire rst,
    input wire [15:0] data_in,
    input wire valid_in,
    output reg ready_out,

    output reg [15:0] data_out,
    output reg valid_out,
    input wire ready_in
);

    reg full;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            full <= 0;
            data_out <= 0;
            valid_out <= 0;
            ready_out <= 1;
        end else begin
            if (valid_in && ready_out) begin
                data_out <= data_in;
                valid_out <= 1;
                full <= 1;
                ready_out <= 0;
            end else if (ready_in && full) begin
                valid_out <= 0;
                full <= 0;
                ready_out <= 1;
            end
        end
    end

endmodule

