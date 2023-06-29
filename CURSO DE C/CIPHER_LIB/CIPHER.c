#include<stdio.h>
#include<string.h>
#include<windows.h>

int main(){
	system("title CIPHER_LIB");

	char mensaje[500];
	///Ingresamos luna cadena de caracteres... 
	printf("Introduzca el texto que desee cifrar: \n");
	fgets(mensaje, sizeof(mensaje),stdin);
	mensaje[strlen(mensaje)-1] = '\0';
	///
	int num_letras = strlen(mensaje);
	for(int i=0;i<=num_letras;i++){
		mensaje[i]=mensaje[i]+2;
	}
	printf("%s",mensaje);
	for(int i=0;i<=num_letras;i++){
		mensaje[i] = mensaje[i]-2;
	}
	printf("\n%s",mensaje);
	return 0; 
}
