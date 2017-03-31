
   // Add other output equations as necessary
							`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:36:36 03/23/2017 
// Design Name: 
// Module Name:    x 
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
module x(
clk, rst
    );
	input clk, rst;
   parameter state1 = 2'b00;
   parameter state2 = 2'b01;
   parameter state3 = 2'b10;
   parameter state4 = 2'b11;

   (* FSM_ENCODING="SEQUNTIAL", SAFE_IMPLEMENTATION="NO" *) reg [1:0] state = state1;

   always@(posedge clk)
      if (rst) begin
         state <= state1;
      end
      else
         (* FULL_CASE, PARALLEL_CASE *) case (state)
            state1 : begin
               if (<condition>)
                  state <= <next_state>;
               else if (<condition>)
                  state <= <next_state>;
               else
                  state <= <next_state>;
            end
            <state2> : begin
               if (<condition>)
                  state <= <next_state>;
               else if (<condition>)
                  state <= <next_state>;
               else
                  state <= <next_state>;
            end
            <state3> : begin
               if (<condition>)
                  state <= <next_state>;
               else if (<condition>)
                  state <= <next_state>;
               else
                  state <= <next_state>;
            end
            <state4> : begin
               if (<condition>)
                  state <= <next_state>;
               else if (<condition>)
                  state <= <next_state>;
               else
                  state <= <next_state>;
            end
         endcase

   assign <output1> = <logic_equation_based_on_states_and_inputs>;
   assign <output2> = <logic_equation_based_on_states_and_inputs>;

endmodule
