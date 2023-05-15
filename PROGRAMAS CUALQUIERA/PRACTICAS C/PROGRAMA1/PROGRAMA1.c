#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char line[100];

int main(){
	printf("Introducir una linea: \n");
	fgets(line, sizeof(line),stdin);
	
	printf("La longitud de la linea es: %d", strlen(line));
	
	return 0;
}
