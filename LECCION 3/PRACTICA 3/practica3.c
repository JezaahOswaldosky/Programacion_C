#include <stdio.h>
#include <stdlib.h>

int main(){
	char nombre_usuario[30];
	int edad; 
	printf("Nombre del usuario: ");
	gets(nombre_usuario);
	printf("\nEdad: ");
	scanf("%d",&edad);
	fflush(stdin);
	printf("\nSe ha registrado al usuario %s con %d edad anios con exito!!!\n\a",nombre_usuario,edad);
	
	return 0; 
}
