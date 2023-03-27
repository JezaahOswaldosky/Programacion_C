//PROGRAMA DE FUNCIONES ENCARGADO DE SUMAR Y RESTAR DOS NUMEROS.... 
#include <stdio.h>

float suma(float a, float b){
	float resultado; 
	
	resultado = a+b; 
	
	return resultado; 
}
float resta(float a, float b){
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
	while(1){
		
		printf("Introduzca el primer numero: \n");
		fflush(stdin);
		scanf("%f",&num1);
		printf("Introduzca el segundo numero: \n");
		fflush(stdin);
		scanf("%f",&num2);
	
		printf("\nQue operacion desea realizar??? \n");
		printf("1.Sumar\n2.Restar\n3.Multiplicar\n4.Dividir\n");
		fflush(stdin); 
		scanf("%d",&opcion);
	
		//printf("%f    %f     %d",num1,num2,opcion);////Bandera.. 
		switch(opcion){
			case 1: 
			printf("%f\n", suma(num1,num2));
			break; 
			case 2: 
			printf("%f\n",resta(num1,num2));
			break; 
			case 3: 
			printf("%f\n",mult(num1,num2));
			break; 
			case 4: 
			printf("%f\n",division(num1,num2));
			break; 
			
			default: 
			printf("Esa opcion no se encuentra disponible... ");
			break;
		}
	}
}
