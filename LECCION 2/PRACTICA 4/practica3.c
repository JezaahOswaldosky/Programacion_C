//PROGRAMA DE FUNCIONES ENCARGADO DE SUMAR Y RESTAR DOS NUMEROS.... 
#include <stdio.h>
#include <windows.h>

float sum(float a, float b){
	float resultado; 
	
	resultado = a+b; 
	
	return resultado; 
}
float rest(float a, float b){
	float resultado; 
	
	resultado = a-b; 
	
	return resultado; 
}
float mult(float a, float b){
	float resultado; 
	
	resultado = a*b; 
	
	return resultado; 
}
float division(float a, float b){
	float resultado; 
	
	resultado = a/b; 
	
	return resultado;
}

int main(){
	float num1, num2; 
	int opcion; 
	printf("Introduzca el primer numero: \n");
	fflush(stdin);
	scanf("%f",&num1);
	printf("Introduzca el segundo numer: \n");
	fflush(stdin);
	scanf("%f",&num2);
	
	printf("\nQue operacion desea realizar??? \n");
	printf("1.Sumar\n2.Restar\n3.Multiplicar\4.Dividir\n");
	fflush(stdin);
	scanf("%d",&opcion);
	switch(opcion){
		case 1: 
			printf("%f",suma(num1,num2));
		break; 
		case 2: 
			printf("%f",resta(num1,num2));
		break; 
		case 3: 
			printf("%f",mult(num1,num2));
			
		break; 
		case 4: 
			printf("%f",division(num1,num2));
		break; 
		default:
		printf("Esa opcion no se encuentra disponible, por favor seleccione algun otro... \n");
		break; 
	}
}
