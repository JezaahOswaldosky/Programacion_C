/************************************************************
			Especificacion Preliminar 
El programa calcula el tiempo requerido para enviar un archivo. 
Danto el tamano del archivo y considerando que la transmision es de
860 caracteres por segundo. 

Programador: Jezaah Oswaldosky
Fecha: 12/4/2024

Tx.c es un programa que determina el tiempo para transferir un 
archivo proporcionando el peso del archivo y contando con una 
comunicacion de 960 palabras por segundo. 

El usuario introduce el peso del archivo y se determina el tiempo
en la transferencia de los datos. 
*/
#include<stdio.h>
#include<stdlib.h>

char line[80]; 

float pesoArchivo; 

int main(){
// Indicamos al usuario introducir el peso del archivo 
printf("Peso del archivo (MB): "); 
fgets(line, sizeof(line), stdin);
sscanf(line, "%f", &pesoArchivo); 

/*Se determina el tiempo si se maneja una tasa de transferecia de 
960 caracteres por segundo. Nota: 1 caracter = 1 byte = 8 bits*/
printf("\nEl tiempo en transportar %f MB son %f segundos", pesoArchivo, pesoArchivo/960);


return 0; 
}


