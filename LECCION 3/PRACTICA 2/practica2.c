#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	char nombre[50];
	int edad; 
	
	printf("Introduzca el nombre y edad: \n");
	scanf("%s %d",nombre, &edad);
	
	printf("\nHola, yo soy %s y tengo %d\n",nombre, edad);
	system("pause");
	return 0; 
	
	
}
