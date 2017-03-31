`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:04:51 03/23/2017 
// Design Name: 
// Module Name:    ff_jk 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ff_jk(
	J,K,clk,Q, Q1);
input J,K,clk;
output Q,Q1;
reg Q, Q1;
initial begin Q = 0; Q1 = 0; end
always@(posedge clk)
begin
	if(J==0 & K==1)
	  begin
		assign Q = 0;
		assign Q =1;
	  end
	else if(J==1 & K==0)
	  begin
		assign Q = 1;
		assign Q =0;
	  end
	else if(J==1 & K==1)
	  begin
		assign Q = ~Q;
	  end
end
endmodule
