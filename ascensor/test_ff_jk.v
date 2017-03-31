`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:56:55 03/23/2017
// Design Name:   ff_jk
// Module Name:   C:/Users/jairo-mm/OneDrive/Documentos/TallerDeDigitales/ascensor/test_ff_jk.v
// Project Name:  ascensor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ff_jk
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_ff_jk;

	// Inputs
	reg J;
	reg K;
	reg clk;

	// Outputs
	wire Q;
	wire Q1;

	// Instantiate the Unit Under Test (UUT)
	ff_jk uut (
		.J(J), 
		.K(K), 
		.clk(clk),
		.Q(Q), 
		.Q1(Q1)
	);

	always #50 clk = ~clk;
	initial begin
		// Initialize Inputs
		
		clk = 0;
		
		
		// Wait 100 ns for global reset to finish
		#100;      
		J = 0;
		K = 1;
		$display("J = ", J, ", K = ", K, ",  Q = ", uut.Q);
		
		// Wait 100 ns for global reset to finish
		#100;      
		J = 1;
		K = 0;
		$display("J = ", J, ", K = ", K, ",  Q = ", uut.Q);					
		
		// Wait 100 ns for global reset to finish
		#100;      
		J = 1;
		K = 1;
		$display("J = ", J, ", K = ", K, ",  Q = ", uut.Q);
		
		// Wait 100 ns for global reset to finish
		#100;      
		J = 0;
		K = 0;
		$display("J = ", J, ", K = ", K, ",  Q = ", uut.Q);
		// Add stimulus here

	end
      
endmodule

