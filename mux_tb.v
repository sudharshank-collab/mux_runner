`timescale 1ns/1ps

module mux_tb;

// Testbench signals
reg  [3:0] a, b, c, d;
reg  [1:0] sel;
wire [3:0] out;

// Instantiate DUT (Device Under Test)
mux uut (
.a(a),
.b(b),
.c(c),
.d(d),
.sel(sel),
.out(out)
);

initial begin
// Initialize inputs
a = 4'b0001;
b = 4'b0010;
c = 4'b0100;
d = 4'b1000;

// Monitor values
$monitor("Time=%0t sel=%b a=%b b=%b c=%b d=%b out=%b",
          $time, sel, a, b, c, d, out);

// Apply test cases
sel = 2'b00; #10;  // expect a
sel = 2'b01; #10;  // expect b
sel = 2'b10; #10;  // expect c
sel = 2'b11; #10;  // expect d

// Change inputs and repeat
a = 4'b1111;
b = 4'b1010;
c = 4'b0101;
d = 4'b0000;

sel = 2'b00; #10;
sel = 2'b01; #10;
sel = 2'b10; #10;
sel = 2'b11; #10;

// Finish simulation
$finish;


end

endmodule

