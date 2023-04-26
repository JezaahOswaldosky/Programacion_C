#include <stdio.h>
#include <stdlib.h>
#include <string.h>

///Estructura para definir el tipo de nombre... 
typedef struct{
	int id; 
	char name[20];
}item; 

int main(){
	FILE *fptr; 
	item first, second, secondf; 
	
	///Creamos las credenciales... 
	first.id = 10276; 
	strcpy(first.name, "widget");
	second.id = 11786;
	strcpy(second.name, "Gadget");
	
	///escribimos la informacion en el archivo... 
	fptr = fopen("info.dat", "wb");
	fwrite(&first, 1, sizeof(first), fptr);
	fwrite(&second, 1, sizeof(second), fptr);
	fclose(fptr);
	
	//Archivos
	fptr - fopen("info.dat","rb");
	
	//Buscamosel registro.. 
	fseek(fptr,1*sizeof(item),SEEK_SET);
	fread(&secondf,1,sizeof(item),fptr);
	printf("%d %s \n",secondf.id, secondf.name);
	fclose(fptr);
	
	return 0; 
}
