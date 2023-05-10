/*Construye un diagrama de flujo que, al recibir como datos la longitud y el peso
de un objeto expresados en pies y libras, imprima los datos de este objeto pero
expresados en metros y kilos, respectivamente.*/
#include <stdio.h>
#include <stdlib.h>

///DEFINIMOS las funciones correspondientes para las conversiones.. 

float metros(float pies){
	return (pies/3.28);
}

float kilos(float libras){
	return (libras/2.2046);
}

int main (){
	float pies,libras; 
	printf("Pies: ");
	scanf("%f",&pies);
	printf("Libras: ");
	scanf("%f",&libras);
	
	printf("Los %f pies son %f metros\n",pies,metros(pies));
	printf("Los %f libras son %f kilos\n", libras,kilos(libras));
	
	return 0;
	
}
