/*****************************************************************
			Especificacion Preliminar 

El programa recibe una fecha con el formato DD/MM/YYY y entrega una 
salida en el formato MM/DD/YYYY

Programador: Jezaah Pswaldosky 
Fecha: 12/4/2024

Fechas.c es un programa que permite al usuario introducir una fecha 
con el formato DD/MM/YYYY y pasarlo al formato MM/DD/YYYY. 
*/
#include<stdio.h>
#include<stdlib.h>

char line[80]; 
int dia, mes, anio; 

int main(){
//El programa se ejecuta de manera infinita. 
while(1){
	printf("\t\tBienvenido al programa conversor de fechas\n");
	printf("\n Para salir del programa, colocar 3 secuencias de  13's"); 
	printf("\nIntroducir fecha en formato DD/MM/YYY (separados por espacio):\n");

	///Capturamos la fecha 
	fgets(line, sizeof(line), stdin); 
	sscanf(line, "\n%d %d %d", &dia, &mes, &anio); 
	///evaluamos si se desea continuar con el programa 
	if(dia == 13 && mes == 13 && anio == 13)
		break;
	else{
		printf("\n%d/%d/%d\n",mes,dia,anio);
	}
	

}

}
