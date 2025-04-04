module Cnt2num #(
    parameter BASE = 24,
    // modding number
    parameter INITIAL = 16
)(
    input en,
    //enabling signal
    input clk,
    input rstn,
    input high_rst,
    //reset signal from higher module
    input low_co,
    // carry from lower bits counter, in the bottom level is the add signal itself.
    output co,
    //carry of the entire counter
    output [7:0] cnt
);

    localparam HIGH_BASE = 10;
    localparam LOW_BASE  = 10;
    localparam HIGH_INIT = INITIAL/10;
    localparam LOW_INIT  = INITIAL%10;
    localparam HIGH_CO   = (BASE-1)/10;
    localparam LOW_CO    = (BASE-1)%10;
    //reference number of whether the carry happens

wire low_bits_carry; 
//storing the carry value of lower bits
reg [3:0] low_bits;
reg [3:0] high_bits;

Cnt #(.BASE(HIGH_BASE), .INITIAL(HIGH_INIT)) HIGH_CNT(
    .en(en),
    .clk(clk),
    .rstn(rstn),
    .low_co(low_bits_carry),
    .high_rst(high_rst | co),
    .co(),
    .cnt(high_bits)
);

Cnt #(.BASE(LOW_BASE), .INITIAL(LOW_INIT)) LOW_CNT(
    .en(en),
    .clk(clk),
    .rstn(rstn),
    .low_co(low_co),
    .high_rst(high_rst | co),
    .co(low_bits_carry),
    .cnt(low_bits)
);

//always @(posedge clk or negedge rstn) begin
//    if (~rstn) begin
//        global_temp_co <= 0;
//    end else if ((low_bits + 1 == LOW_CO[3:0]) && (high_bits == HIGH_CO[3:0])) begin
//        global_temp_co <= 1;
//    end else begin
//        global_temp_co <= 0;
//    end
//end

assign co = (low_bits == LOW_CO[3:0] && high_bits == HIGH_CO[3:0]);
assign cnt = {high_bits, low_bits};

endmodule