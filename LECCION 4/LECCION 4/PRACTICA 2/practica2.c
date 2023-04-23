#include <stdio.h>
#include <stdlib.h>

/*Manejo de impresion de datos con puts() y fputs()*/

int main(){
	system("title Manejo de las funciones de salida puts() y fputs()");
	
	char nombre1[40], nombre2[40];
	
	printf("Introduzca el primer nombre: \n");
	gets(nombre1);
	system("cls");
	printf("Introduzca el segundo nombre: \n");
	fgets(nombre2,40 ,stdin);
	
	system("cls");
	printf("Los datos se han introducido con exito!!!\n");
	system("pause");
	system("cls");
	
	puts(nombre1);
	fputs(nombre2,stdout);
	
	system("pause");
	
	return 0;
}
