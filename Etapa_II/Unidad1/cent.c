/****************************************************
		Descripcion Preliminar 

El programa prodice una conversion de Celsius a Farenheit
por los numeros 0 - 100

Programador: Jezaah Oswaldosky 
Fecha: 12/05/2024

cent.c es un programa que realiza una conversion de 
temperatura de Celsius a Farenheit en un rango de 0-100

*****************************************************/
#include<stdio.h>

int celsius; 

int main(){
for(celsius =0; celsius <= 100; ++celsius);
	printf("Celsius: %d  Farenheit: %d\n", celsius, (celsius*9)/5+32);

return 0; 

}
