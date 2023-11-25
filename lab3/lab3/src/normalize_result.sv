module normalize_result (
    input logic [5:0] temp_fract,
    input logic [2:0] final_exp,
    input logic overflow_flag,
    output [3:0] result_fract,
    output [2:0] result_exp
);
always_comb begin : normalize_result_module
    if (overflow_flag) begin
        result_exp = final_exp + 1;
        result_fract = temp_fract[5:2];
    end
    else begin
        casez (temp_fract)
            6'b1?????: begin
                result_exp = final_exp;
                result_fract = temp_fract[4:1];
            end
            6'b01????: begin
                result_exp = final_exp - 1;
                result_fract = temp_fract[3:0];
            end
            6'b001???: begin
                result_exp = final_exp - 2;
                result_fract = {temp_fract[2:0], 1'b0};
            end
            6'b0001??: begin
                result_exp = final_exp - 3;
                result_fract = {temp_fract[1:0], 2'b00};
            end
            6'b00001?: begin
                result_exp = final_exp - 4;
                result_fract = {temp_fract[0], 3'b000};
            end
            6'b000001: begin
                result_exp = final_exp - 5;
                result_fract = 4'b0000;
            end
            default: begin
                result_exp = final_exp;
                result_fract = temp_fract[4:1];
            end
        endcase
    end
end
endmodule
