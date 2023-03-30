#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int factorial(int num);

int main(){
	int x; 
	system("title Factorial de un numero...");
	
	printf("Introduzca el numero que desea calcular el factorial: \n");
	scanf("%d", &x);
	if(x >=17){
		system("cls");
		printf("El numero es demasiado grando para ser calculado, le recomendamos un numero entre el 0 y 16\n");
		system("pause");
	}
	else{
	system("cls"); 
	printf("El factorial de %d es %d \n",x, factorial(x));	
	}
	
	return 0; 
}

///definicion de la funcion factorial... 
int factorial(int num){
	if(num == 1){
		return (1);
	}
	else{
		return(num*factorial(num-1));
	}
}
