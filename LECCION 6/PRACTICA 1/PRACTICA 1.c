#include<stdio.h>
#include<conio.h>

int main(){
	FILE *fptr; 
	fptr = fopen("Miarchivo.txt", "w");
	if(fptr == NULL){
		printf("Error al abrir el archivo...");
		return -1; 
	}
	fclose(fptr);
	
	return 0;
}
