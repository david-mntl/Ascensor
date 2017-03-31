`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:42:43 03/23/2017
// Design Name:   maquina_programada
// Module Name:   C:/Users/jairo-mm/OneDrive/Documentos/TallerDeDigitales/ascensor/test_maquina.v
// Project Name:  ascensor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: maquina_programada
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_maquina;

	// Inputs
	reg clk;
	reg rst;
	reg in1;
	reg in2;
	

	// Outputs
	wire out1;
	wire out2;
	wire state1;
	wire state2;

	// Instantiate the Unit Under Test (UUT)
	maquina_programada dut(
		clk, 
		rst, 
		in1, 
		in2,
		state1,
		state2,
		out1, 
		out2
	);
	always #20 clk = ~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		
		in1 = 0;
		in2 = 1;
		$display("State = ", dut.state[0],dut.state[1], ", Input1 = ", in1,", Input2 = ", in2, ", State1 = ", state1, ", State2 = ", state2,", Output1 = ", out1, ", Output2 = ", out2);
		#250
		in1 = 1;
		in2 = 0;
		$display("State = ", dut.state[0],dut.state[1], ", Input1 = ", in1,", Input2 = ", in2, ", State1 = ", state1, ", State2 = ", state2,", Output1 = ", out1, ", Output2 = ", out2);
		#250;
		in1 = 1;
		in2 = 1;
		$display("State = ", dut.state[0],dut.state[1], ", Input1 = ", in1,", Input2 = ", in2, ", State1 = ", state1, ", State2 = ", state2,", Output1 = ", out1, ", Output2 = ", out2);
		#250;
		in1 = 0;
		in2 = 0;
		$display("State = ", dut.state[0],dut.state[1], ", Input1 = ", in1,", Input2 = ", in2, ", State1 = ", state1, ", State2 = ", state2,", Output1 = ", out1, ", Output2 = ", out2);
		#250;
		
	end		

endmodule

