/*************************************************************
		Descripcion Preliminar 

El programa es capaz de capturar un numero que otorgue el usuario
para transformar los numeros en formato de letras. 
Un ejemplo es el recibir 872 ---> Ocho Cientos Setenta y Dos

Programador: Jezaah Oswaldosky 
Fecha: 12/07/2024

numLetras.c es un programa que permite al usuario introducir un 
numero y traducirlo a un formato de letras. 
Convirtiendo un entero a un sistema que el usuario pueda leer.
El programa esta limitado a un numero de 10 digitos. 
Se espera posibles modificaciones al programa.  
**************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char line[80]; 

int main(){
//Capturamos el numero del usuario para guardarlo en una matriz
char numero[100]; 

printf("\t\tConvertidor de numeros a letras\n"); 
printf("Introduzca un numero: ");
fgets(line, sizeof(line), stdin); 
sscanf(line, "%s", &numero);
line[strlen(line)] = '\0';

//Los numeros se impregnan alrevez colocando al mas significativo 
//al inicio, entonces se  introducira al mas significativo al fina;l
char numSort[10];
char numPalabra[500];

for(int i = 0; i <= strlen(numero)-1; i++){
	if(numero[i] == '0'){
		strcat(numPalabra, " Cero ");
	}else if(numero[i] == '1'){
		strcat(numPalabra, " Uno ");
	}else if(numero[i] == '2'){
		strcat(numPalabra, " Dos ");
	}else if(numero[i] == '3'){
		strcat(numPalabra, " Tres ");
	}else if(numero[i] == '4'){
		strcat(numPalabra, " Cuatro ");
	}else if(numero[i] == '5'){
		strcat(numPalabra, " Cinco ");
	}else if(numero[i] == '6'){
		strcat(numPalabra, " Seis ");
	}else if(numero[i] == '7'){
		strcat(numPalabra, " Siete ");
	}else if(numero[i] == '8'){
		strcat(numPalabra, " Ocho ");
	}else if(numero[i] == '9'){
 		strcat(numPalabra, " Nueve ");
	}else{
		printf("\nNull");
	}
}
printf("\n%s", numPalabra);

return 0; 

}
