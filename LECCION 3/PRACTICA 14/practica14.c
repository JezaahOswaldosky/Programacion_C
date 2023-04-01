#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void impresion(int edad, int estatura, int peso){
	printf("La edad es:%d anios", edad);
	printf("\nLa estatura es:%d centimetros", estatura);
	printf("\nEl peso es:%d kilogramos\a",peso);
}

int main(){
	system("title Captura edad, estatura y peso pero imprime en funcion...");
	int edad, estatura, peso; 
	
	printf("Edad: ");
	scanf("%d", &edad);
	printf("\nEstatura: ");
	scanf("%d", &estatura);
	printf("\nPeso: ");
	scanf("%d", &peso);
	
	impresion(edad, estatura, peso);


	return 0;
}

