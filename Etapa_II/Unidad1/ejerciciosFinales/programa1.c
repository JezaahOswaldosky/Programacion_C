/*************************************************
		Resumen Preliminar

El programa imprime una tabla de revision de 8 x 8
Donde cada cuadro debe ser de 5x3 caracteres de ancho
y 2x2 .
+-----+-----+
|     |     |
|     |     |
|     |     |
+-----+-----+
|     |     |
|     |     |
|     |     |
+-----+-----+

Programador: Jezaah Oswaldosky 
Fecha: 12/06/2024

programa1.c genera un cuadro de 8x8 grids donde cada 
cuadro tiene dimensiones de 5x3 caracteres de ancho y 
2x2. 
El programa se desarrollara mediante el uso de printf(); 
Pero se puede encontrar otra solucion mediante matrices
y arreglos. 
**************************************************/
#include<stdio.h>

int matrix[12][7]; 

int main(){
int x,y; 
//Impresion de las cruces 
for(y = 0; y<8; y++){
	for(x=0; x<12; x++){
		if(y == 0 || y == 4 || y == 8){
			if(x == 0 || x == 6 || x == 12){
				matrix[y][x] = '+';
			}
			if(x > 1 && x<6 || x>6 && x<12){
				matrix[y][x] = '-';
			}
		}
		if(y > 0 && y < 4 || y > 4 && y < 8){
			if(x == 0 || x == 6 || x == 12){
				matrix[y][x] = '|';
			}
		}
	}
for(y = 0; y < 8; y++){
	for(x = 0; x < 12; x++){
		if(x == 12){
			printf("%c\n", matrix[y][x]);
		}else{
			printf("%c", matrix[y][x]);
		}
	}
}

return 0; 

}



}
