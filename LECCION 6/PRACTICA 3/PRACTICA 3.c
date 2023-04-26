#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fptr; 
	char filename[50];
	char c; 
	
	printf("Introduzca el nombre del archivo para crear: \n");
	gets(filename);
	fptr = fopen(filename, "w");
	
	//Escribir en el archivo... 
	fprintf(fptr,"Inventario\n");
	fprintf(fptr,"%d %s %f \n", 100, "widget", 0.29);
	fputs("Fin de la lista...",fptr);
	
	fclose(fptr);
	
	//Lectura del archivo... 
	fptr = fopen(filename, "r");
	while((c = getc(fptr)) != EOF){
		printf("&c",c);
	}
	fclose(fptr);
	
	return 0;
}
