module enc_stage2 (
    input wire clk,
    input wire rst,
    input wire valid_in,
    input wire [15:0] in_data,
    input wire [1:0] key_bits,
    input wire ready_in,
    output reg [15:0] out_data,
    output reg valid_out,
    output reg ready_out
);

    reg [1:0] state, next_state;

    localparam S0 = 2'b00, S1 = 2'b01, S2 = 2'b10, S3 = 2'b11;

    always @(*) begin
        next_state = state ^ key_bits;
    end

    always @(posedge clk or posedge rst) begin
        if (rst)
            state <= S0;
        else if (valid_in && ready_in)
            state <= next_state;
    end

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            out_data <= 0;
            valid_out <= 0;
            ready_out <= 0;
        end else if (valid_in && ready_in) begin
            case (state)
                S0: out_data <= {in_data[14:0], ^in_data};
                S1: out_data <= in_data & 16'h0F0F;
                S2: out_data <= in_data | 16'hF0F0;
                S3: out_data <= {in_data[15], in_data[15:1]};
                default: out_data <= in_data;
            endcase
            valid_out <= 1;
            ready_out <= 1;
        end else begin
            valid_out <= 0;
            ready_out <= 0;
        end
    end
endmodule
