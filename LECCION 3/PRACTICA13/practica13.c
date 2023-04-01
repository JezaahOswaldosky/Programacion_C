#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	system("title Captura edad,estatura y peso");
	
	int edad,estatura,peso;
	char nombre[30];
	
	printf("Nombre: ");
	gets(nombre);
	
	printf("\nEdad: ");
	fflush(stdin);
	scanf("%d",&edad);
	printf("\nEstara: ");
	scanf("%d",&estatura);
	printf("\nPeso: ");
	scanf("%d",&peso);
	system("cls");
	
	printf("%s tiene %d anios, mide %d centimetros y pesa %d kilogramos...\n",nombre,edad,estatura,peso);
	
	system("pause");
	return 0;	
}
