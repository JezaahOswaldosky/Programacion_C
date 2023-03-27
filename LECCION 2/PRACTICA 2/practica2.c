#include <stdio.h>
#include <conio.h>

/*BIBLIOTECA DE EXPONENCIALES...*/
int cuadrado(int num){
	int x; 
	
	x = num*num;
	
	return x;
}

int cubo(int num){
	int x; 
	
	x = num*(cuadrado(num));
	
	return x;
}

int ala_cuatro(int num){
	int x; 
	
	x=num*(cubo(num));
	
	return x;
}

int ala_quinta(int num){
	int x; 
	
	x = num*(ala_cuatro(num));
	
	return x; 
}

int ala_sexta(int num){
	int x; 
	
	x = num*(ala_quinta(num));
	
	return x;
}

int main(){
	system("title Potencias");

	int numero, potencia, resultado; 
	while(1){
		system("cls");
		printf("Introduzca un numero: \n");
		scanf("%d",&numero);
		printf("Introduzca la potencia: \n");
		scanf("%d",&potencia);
	
		switch(potencia){
			case 1: 
				resultado = numero; 
				printf("(%d)^1=%d\n\a",numero,resultado);
				system("pause");
			case 2: 
				resultado = cuadrado(numero);
				printf("(%d)^2= %d \n\a", numero,resultado);
				system("pause");
			break; 
			case 3: 
				resultado = cubo(numero);
				printf("(%d)^3= %d \n\a", numero, resultado);
				system("pause");
			break; 
			case 4: 
				resultado = ala_cuatro(numero);
				printf("(%d)^4= %d \n\a", numero, resultado);
				system("pause");
			break;
			case 5: 
				resultado = ala_quinta(numero);
				printf("(%d)^5= %d \n\a", numero, resultado);
				system("pause");
			break; 
			case 6: 
				resultado = ala_sexta(numero);
				printf("(%d)^6= %d \n\a", numero, resultado);
				system("pause");
			break; 
			default: 
				system("cls"); 
				printf("Esa opcion no se encuentra disponible... \n");  
				system("pause");
			break;  
			}
		}
}
