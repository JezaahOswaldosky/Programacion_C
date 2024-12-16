/*************************************************************
		Descripcion  Preliminar 

El programa es capaz de recibir un numero por el usuario, y 
este debe ser representado en palabras. 

Programador: Jezaah Oswaldosky 
Fecha: 12/08/2024

num2Letras.c es un programa que permite al usuario introdicir un 
numero. Despues el programa sigue un flujo para transformar el 
numero en una representacion escrita de cada numero. 
Y finalmente representarlo en la pantalla para que sea legible 
por el usuario. 

Pseudocodigo: 
-Pedir Numero 
-Introducir numero 
-Reordenar el numero para que el menos significativo este en el 
la matriz numero[0].
-Otorgar una palabra del cero al nueve a una matriz de dos 
dimensiones numPalabras[1][10]
			|   |______Tamano de la palabra 
			|__________Localizacion del numero
-Imprimir numero en palabras
**************************************************************/
#include<stdio.h>
#include<string.h>
char numero[80];

int main(){
char numSort[strlen(numero)];
//Pedir y capturar numero al usuario
printf("\t\tNumero2Palabra\n");
printf("Introduzca numero a transformar: ");
fgets(numero, sizeof(numero), stdin);
numero[strlen(numero)-1] = '\0';

int j = strlen(numero)-1;
printf("\n### j: %d", j);

//Reordenar el numero 
for(int i = 0; i < strlen(numero); i++){
	numSort[j] = numero[i]; 
	--j;
}

////Proporcionar una palabra del cero al nueve 
char numPalabra[250];

for(int i = 0; i < strlen(numSort); i++){
	if(numSort[i] == 0){
		strcat(numPalabra, "Cero");
	}else if(numSort[i] == 1){
		strcat(numPalabra, "Uno");
	}else if(numSort[i] ==  2){
		strcat(numPalabra, "Dos");
	}else if(numSort[i] == 3){
		strcat(numPalabra, "Tres");
	}else if(numSort[i] == 4){
		strcat(numPalabra, "Cuatro");
	}else if(numSort[i] == 5){
		strcat(numPalabra, "Cinco");
	}else if(numSort[i] == 6){
		strcat(numPalabra, "Seis");
	}else if(numSort[i] == 7){
		strcat(numPalabra, "Siete");
	}else if(numSort[i] == 8){
		strcat(numPalabra, "Ocho");
	}else if(numSort[i] == 9){
		strcat(numPalabra, "Nueve");
	}else{
		printf(" \a ");
		break; 
	}

}

printf("\n%s", numPalabra);

return 0; 
}
