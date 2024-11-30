#include <stdio.h>

int main(){

	//Inicializamos los valores 
	int x = 0, y = 0, res = 0; 
	//Introducimos los numeros requeridos para  aplicar la suma 
	printf("Introduzca el primer numero: \n\a ");
	scanf("%d",&x);
	printf("\nIntroduzca el segundo numero: \n\a");
	scanf("%d",&y);

	///Implementamos la aritmetica e imprimimos el resultado
	res =   x + y;

	printf("El resutlado es: %d \a",res);

	return 0; 



}
