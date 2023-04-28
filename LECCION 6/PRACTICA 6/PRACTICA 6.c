#include <stdio.h>
#include <stdlib.h>
#include <string.h>

////Creacion de documento de texto... 
void main(){
	///int k;
	
	FILE *arch = fopen("data_base.txt","wt");
	if(arch == NULL){
		exit(1);
	}
	for(;;){
	
	fputs("Te han hackiado capullo \n", arch);
	fputs("Te ha hackiado capullo\n", arch);
	fputs("Te han hackeado capullo\n", arch);
	
	}
	///cerramos el documento... 
	fclose(arch);
	printf("Se creo el archivo de texto con tres lineas ed texto... ");
	
	getch(); 
	
	return 0;  
}

