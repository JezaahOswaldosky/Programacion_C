#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void capturar(int *edad, float *estatura, float *peso){
	printf("Edad: ");
	scanf("%d", &edad);
	printf("\nEstatura: ");
	scanf("%f", &estatura);
	printf("\nPeso: ");
	scanf("%f", &peso);
	
}

void imprimir(int edad, float estatura, float peso){
	system("cls");
	printf("Edad: %d Anios", edad);
	printf("\nEstatura: %f Metros", estatura);
	printf("\nPeso: %f kilogramos", peso);
}

int main(){
	int edad; 
	float estatura, peso; 
	
	printf("Programa que permite leer la edad, estatura y peso de una personas...\n");
	capturar(&edad, &estatura, &peso);
	imprimir(edad, estatura, peso);
}


