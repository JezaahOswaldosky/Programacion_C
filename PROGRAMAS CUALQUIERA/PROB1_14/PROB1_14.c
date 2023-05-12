#include <stdio.h>
#include <stdlib.h>

int main(){
	system("title PROB1_14");
	system("color f");
	
	char numero[4]; 
	
	printf("Introduzca un numero de 4 digitos: \n");
	gets(numero);
	
	printf("%c\n",numero[0]);
	printf("%c\n",numero[1]);
	printf("%c\n",numero[2]);
	printf("%c\n",numero[3]);
	
	return 0;
}
