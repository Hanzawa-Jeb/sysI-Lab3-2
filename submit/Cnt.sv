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

always @(posedge clk or negedge rstn)begin
    if (~en) begin
    end else if (~rstn) begin
        cnt <= INITIAL[3:0];   
    end else if (high_rst) begin
        cnt <= 0;
    end else if (low_co)begin
        if (cnt == BASE - 1)begin
            cnt <= 0;
        end else begin
            cnt <= cnt + 4'b1;
        end
    end
end

assign co = (cnt == BASE - 1);

endmodule