// Verilog test fixture created from schematic C:\Users\jairo-mm\OneDrive\Documentos\TallerDeDigitales\ascensor\schematic_maquina.sch - Thu Mar 23 17:54:08 2017

`timescale 1ns / 1ps

module schematic_maquina_schematic_maquina_sch_tb;

// Inputs
	reg clk;
	reg rst;
	reg in1;
	reg in2;

	// Outputs
	wire out1;
	wire out2;

	// Instantiate the Unit Under Test (UUT)
	schematic_maquina UUT(
		.clk(clk), 
		.rst(rst), 
		.in1(in1), 
		.in2(in2), 
		.out1(out1), 
		.out2(out2)
	);
	always #50 clk = ~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		
		in1 = 0;
		in2 = 1;
		
		#100;
		in1 = 1;
		in2 = 0;
		
		#50;
		in1 = 1;
		in2 = 1;

		#50;
		in1 = 0;
		in2 = 0;
		
		end		
endmodule