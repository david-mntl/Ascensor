`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:18:37 03/23/2017 
// Design Name: 
// Module Name:    maquina_programada 
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
module maquina_programada(
	//se definen como entradas 
	clk, rst, in1, in2, state1, state2,
	//se definen como salidas
	out1, out2
);

input clk, rst, in1, in2;
output out1, out2;
output state1, state2;

//registro para manejar el estado actual
reg[1:0] state;
//registros para las salidas de la maquina
reg out1, out2;
reg state1, state2; //

initial begin
	state = 2'b00;
end
always@ (posedge clk, posedge rst) begin

	//si se resetea el ascensor volvera a su estado inicial, el cual es el piso 1
	if (rst) begin
		state <= 2'b00; //resetea el estado al inicial
		state1 <= 0;
		state2 <= 0;
		//la salidas las pone en 0, como si esperara
		out1 <= 0; 
		out2 <= 0; 
		end
	else begin
		//se realiza un case del estado, es decir, si está en algún estado
		case (state)		
		//si está en el piso 1 = 2'b00
		2'b00: begin
			if ((in1 == 0) & (in2 == 0)) begin
				state <= 2'b00; //se queda en el mismo estado
				state1 <= 0;
				state2 <= 0;
				//la salidas las pone en 0, como si esperara
				out1 <= 0; 
				out2 <= 0; end
			if ((in1 == 0) & (in2 == 1)) begin
				//la salidas las pone en 10, como si subiera
				out1 <= 1; 
				out2 <= 0;
				state <= 2'b01; //va al piso 2
				
				//se inicia el proceso de ir subiendo piso por piso
				//en este caso solo va al piso 2
				state1 <= 0;
				state2 <= 1;
				//aqui deberia esperar 10s
				#50; end
			if ((in1 == 1) & (in2 == 0)) begin
				state <= 2'b10; //va al piso 3
				//la salidas las pone en 10, como si subiera
				out1 <= 1; 
				out2 <= 0; 
				//se inicia el proceso de ir subiendo piso por piso
				//va al piso 2
				state1 <= 0;
				state2 <= 1;
				//aqui deberia esperar 10s
				#50;
				//del piso 2 sube al piso 3
				state1 <= 1;
				state2 <= 0;
				#50;
				end
			if ((in1 == 1) & (in2 == 1)) begin
				state <= 2'b11; //va al piso 4
				//la salidas las pone en 10, como si subiera
				out1 <= 1; 
				out2 <= 0; 
				//inicia el proceso de subir al piso 4
				//sube del piso 1 al piso 2
				state1 <= 0;
				state2 <= 1;
				//aqui deberia esperar 10s
				#50;
				//sube del piso 2al piso 3
				state1 <= 1;
				state2 <= 0;
				//aqui deberia esperar 10s
				#50;
				//subir del piso 3 al piso 4
				state1 <= 1;
				state2 <= 1;
				#50; end
		end
		//si está en el piso 2
		2'b01: begin
			if ((in1 == 0) & (in2 == 0)) begin
				state <= 2'b00; //se queda en el mismo estado
				//la salidas las pone en 01, como si bajara
				out1 <= 0; 
				out2 <= 1;
				//estando en el piso 2 se desea bajar al piso 1
				//baja al piso 1
				state1 <= 0;
				state2 <= 0;
				//aqui deberia esperar 10s
				#50;
				end
			if ((in1 == 0) & (in2 == 1)) begin
				state <= 2'b01; //espera
				//la salidas las pone en 10, como si esperara
				out1 <= 0; 
				out2 <= 0; 
				//espera en el mismo piso 2
				state1 <= 0;
				state2 <= 1; end
			if ((in1 == 1) & (in2 == 0)) begin
				state <= 2'b10; //va al piso 3
				//la salidas las pone en 10, como si subiera
				out1 <= 1; 
				out2 <= 0; 
				//inicia el proceso de subir del piso 2 al piso 3
				state1 <= 1;
				state2 <= 0;
				//aqui deberia esperar 10s
				#50;
				end
			if ((in1 == 1) & (in2 == 1)) begin
				state <= 2'b11; //va al piso 4
				//la salidas las pone en 10, como si subiera
				out1 <= 1; 
				out2 <= 0;
				//inicia el proceso de subir del piso 2 al piso 4
				//sube del piso 2 al piso 3
				state1 <= 1;
				state2 <= 0;
				//aqui deberia esperar 10s
				#50;
				//sube del piso 4 al piso 3
				state1 <= 1;
				state2 <= 1;
				//aqui deberia esperar 10s
				#50;
				end
		end
		2'b10: begin
			if ((in1 == 0) & (in2 == 0)) begin
				state <= 2'b00; //va al piso 1
				//la salidas las pone en 01, como si bajara
				out1 <= 0; 
				out2 <= 1; 
				//inicia el proceso de bajar del piso 3 al piso 1
				//baja del piso 3 al piso 2
				state1 <= 0;
				state2 <= 1;
				//aqui deberia esperar 10s
				#50;
				//baja del piso 2 al piso 1
				state1 <= 0;
				state2 <= 0;
				//aqui deberia esperar 10s
				#50; end
			if ((in1 == 0) & (in2 == 1)) begin
				state <= 2'b01; //va al piso 2
				//la salidas las pone en 10, como si bajara
				out1 <= 0; 
				out2 <= 1; 
				//inicia del proceso de bajar del piso 3 al piso 2
				state1 <= 0;
				state2 <= 1;
				//aqui deberia esperar 10s
				#50; end
			if ((in1 == 1) & (in2 == 0)) begin
				state <= 2'b10; //espera
				//la salidas las pone en 00, como si esperara
				out1 <= 0; 
				out2 <= 0;
				//espera en el mismo piso 3
				state1 <= 1;
				state2 <= 0;
				end
			if ((in1 == 1) & (in2 == 1)) begin
				state <= 2'b11; //va al piso 4
				//la salidas las pone en 10, como si subiera
				out1 <= 1; 
				out2 <= 0; 
				//sube del piso 3 al piso 4
				state1 <= 1;
				state2 <= 1;
				//aqui deberia esperar 10s
				#50; end
		end
		2'b11: begin
			if ((in1 == 0) & (in2 == 0)) begin
				state <= 2'b00; //va al piso 1
				//la salidas las pone en 0, como si esperara
				out1 <= 0; 
				out2 <= 1;
				//proceso de bajar del piso 4 al piso 1
				//baja del piso 4 al piso 3
				state1 <= 1;
				state2 <= 0;
				//aqui deberia esperar 10s
				#50;
				//bajar del piso 3 al piso 2
				state1 <= 0;
				state2 <= 1;
				//aqui deberia esperar 10s
				#50;
				//bajar del piso 2 al piso 1
				state1 <= 0;
				state2 <= 0;
				//aqui deberia esperar 10s
				#50; end
			if ((in1 == 0) & (in2 == 1)) begin
				state <= 2'b01; //va al piso 2
				//la salidas las pone en 10, como si subiera
				out1 <= 0; 
				out2 <= 1; 
				//se inicia el proceso de bajar del piso 4 al piso 2
				//baja del piso 4 al piso 3
				state1 <= 1;
				state2 <= 0;
				//aqui deberia esperar 10s
				#50;
				//baja del piso 3 al piso 2
				state1 <= 0;
				state2 <= 1;
				//aqui deberia esperar 10s
				#50; end
			if ((in1 == 1) & (in2 == 0)) begin
				state <= 2'b10; //va al piso 3
				//la salidas las pone en 10, como si subiera
				out1 <= 0; 
				out2 <= 1; 
				//baja del piso 4 al piso 3
				state1 <= 1;
				state2 <= 0;
				//aqui deberia esperar 10s
				#50; end
			if ((in1 == 1) & (in2 == 1)) begin
				state <= 2'b11; //espera
				//la salidas las pone en 10, como si subiera
				out1 <= 0; 
				out2 <= 0; 
				//se queda esperando en el piso 4
				state1 <= 1;
				state2 <= 1; end
		end
		endcase
	end
		
end

endmodule
