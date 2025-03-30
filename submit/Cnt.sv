module Cnt #(
    parameter BASE = 10,
    parameter INITIAL = 0
    //the value of initialization
) (
    input en,
    // enabling signal of the counter
    input clk,
    input rstn,
    input low_co,
    //low_co is the signal for cnt increment
    input high_rst,
    //resetting signal from the higher 
    output co,
    //carry signal to a higher level
    output reg [3:0] cnt
);

reg temp_co;

always @(posedge clk or negedge rstn) begin
    if (~en) begin
        temp_co <= 0;
    end else if (~rstn) begin
        cnt <= INITIAL[3:0];   
        temp_co <= 0;     
    end else if (high_rst) begin
        cnt <= 0;
        temp_co <= 0;
    end else if (low_co & en)begin
        if (cnt == BASE - 1)begin
            cnt <= 0;
            temp_co <= 1;
        end else begin
            cnt <= cnt + 4'b1;
            temp_co <= 0;
        end
    end
end

assign co = temp_co;

endmodule