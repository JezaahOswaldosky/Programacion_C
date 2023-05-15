#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char full[100], name[30],last[30];

int main(){
	printf("Nombre: ");
	fgets(name, sizeof(name),stdin);
	printf("\nApellido: ");
	fgets(last,sizeof(last),stdin);
	name[strlen(name)-1]='\0';
	
	strcpy(full,name);
	strcat(full," ");
	strcat(full,last);
	
	printf("Nombre completo: %s",full);
	
	return 0;
}
