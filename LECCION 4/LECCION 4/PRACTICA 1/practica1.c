#include <stdio.h>
#include <stdlib.h>

///Codigo para manejar scanf(), gets() y fgets()...

/*
strlen() - get length of a string
strcat() - merge two strings
strcpy() - copy one string to another
strlwr() - convert string to lower case
strupr() - convert string to upper case
strrev() - reverse string
strcmp() - compare two strings */

int main(){
	system("title Manejo de caracteres...");
	
	char nombre1[40],nombre2[40],nombre3[40];
	
	printf("Introduzca el primer nombre: \n");
	scanf("%s", nombre1);
	
	printf("Introduzca el segundo nombre: \n");
	gets(nombre2);
	
	printf("Introduzca el tercer nombre: \n");
	fgets(nombre3,50,stdin);
	
	system("cls");
	printf("Se han introducido los datos... \n");
	system("pause");
	system("cls");
	printf("Nombre1: %s\nNombre2: %s \nNombre3: %s\n",nombre1,nombre2,nombre3);
	
	system("pause");
	
	return 0;
}
