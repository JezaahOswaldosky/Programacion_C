#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(){
	FILE *fptr; 
	int c; 
	
	errno = 0; 
	fptr = fopen("C:\\Users\\Maestria_Sesion\\Desktop\\CURSO DE C Y C++\\CURSO DE C\\LECCION 6\\PRACTICA 11\\file.txt","r");
	if(fptr == NULL){
		fprintf(stderr, "Error al abrir el archivo.. %s\n",strerror(errno));
		exit(EXIT_FAILURE);
	}
	
	while((c = getc(fptr)) != EOF){
		printf("%c", c);
	}
	if(ferror(fptr)){
		printf("Error al leer el archivo E/S.");
		exit(EXIT_FAILURE);
	}
	else if(feof(fptr)){
		printf("Fin de alcanzar el archivo.");
	}
	fclose(fptr);
	
	return 0;
}
