/************************************************************
			Descripcion Preliminar 

Programa que captura una secuencia de numeros hasta el 999, 
para traducirlo o pasarlo a letras para ser leido por el usaurio
Ideal, para ensenar a infantes. 

Programador: JEzaah Oswaldosky 
Fecha: 12/15/2024

num2Letras2.c es una modificacion de num2Letras.c, donde esta 
modificacion proporcionara el numero en letras, tomando en cuenta
decimales y centenas. El programa se ve limitado para el 999 
para no manejar multiples sentencias y optimizar el resultado 
lo mas posible. 
*************************************************************/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void printNum2Words(int num){
//Arreglos para los numeros especiales 
const char* ones[] = {"", "Uno", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Ocho", "Nueve", "Diez", "Once", "Doce", "Trece", "Catorce","Quince","Dieciseis", "Diecisiete", "Dieciocho","Diecinueve"};

const char* decs[] = {"", "", "Venti-", "Treinta y", "Cuarenta y", "Ciencuenta y", "Sesenta y ", "Setenta y ", "Ochenta y ", "Noventa y " };

//Si el numero es 100 
if(num == 100){
	printf("Cien\n");
	return; 
}
///Si el numero es menor que 20, solo se imprime 
if(num < 20){
printf("%s\n", ones[num]);
return;
}

///Si el numero es 20 o mayor, se maneja decena y unidad 
int tensPart = num / 10; //La parte de decenas 
int onesPart =  num %10; //La parte de las undiades 

//Imprimir las decenas 
if(tensPart > 1){
	printf("%s", decs[tensPart]);
	if(onesPart  != 0){
		printf("%-s", ones[onesPart]);
	}
}else{
	//Si el numero es entre 10 y 19
	printf("%s", ones[num]);
}
printf("\n");
}


int main(){
int num; 

///Pedir el numero al usuario 
printf("Introduce un numero entre 1 y 100\n");
scanf("%d", &num); 

if(num >= 1 && num <= 100){
   printNum2Words(num); 
}else{
	printf("Por favor,introduce un numero valodo entre 1 y 100\n");
}

return 0; 
}

