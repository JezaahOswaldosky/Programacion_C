#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

/*EL PROGRAMA CONSISTE EN UNA BIBLIOTECA DE FUNCIONES QUE PERMITE CAMBIAR DIVERSOS VALORES DE TEMPRETURA 
Y CONVERTIR DE VARIAS UNIDADES...*/

float faren_celsius(float temp){
	float resultado; 
	
	resultado = (temp-32)/1.8;
	
	return resultado; 
}
float celsius_faren(float temp){
	float resultado; 
	
	resultado = (temp*1.8)+32;
	
	return resultado; 
}
float faren_kelvin(float temp){  
	float resultado; 
	
	resultado = (1.8*(temp-32))+273.15;
	
	return resultado; 
}
float kelvin_faren(float temp){
	float resultado; 
	
	resultado = 9*((temp-273.15)/5)+32;
	
	return resultado; 	
}
float celsius_kelvin(float temp){
	float resultado;
	
	resultado = temp+273.15;
	
	return resultado;
}
float kelvin_celsius(float temp){
	float resultado; 
	
	resultado = temp-273.15;
	
	return resultado;
}

int main(){
	system("title Convertidor de temperatura");
	system("cls");
	int opcion; 
	float temperatura_in,temperatura_out; 
	for(;;){
		printf("Menu\n");
		printf("1.Farenheight a Centigrados\n2.Centigrados a Farenheght\n3.Farenheght a Kelvin\n");
		printf("4.Kelvin a Farenheght\n5.Centigrados a Kelvin\n6.Kelvin a Centigrados\n");
		printf("7.Salir");
		scanf("%d",&opcion);
		
		if(opcion == 1){
			system("cls");
			printf("Convertidor de Farenheght a Centigrados\n");
			printf("Introduzca la temperatura a convertir: ");
			fflush(stdin);
			scanf("%f",&temperatura_in);
			system("cls");
			temperatura_out = faren_celsius(temperatura_in);
			printf("La temperatura en Centigrados es: %f\n",temperatura_out);
			system("pause");
			system("cls");
		}
		else if(opcion == 2){
			system("cls");
			printf("Convertidor de Centigrados a Farenheght\n");
			printf("Introduzca la temperatura a convertir: ");
			fflush(stdin);
			scanf("%f",&temperatura_in);
			system("cls");
			temperatura_out = celsius_faren(temperatura_in);
			printf("La temperatura en Farenheght es: %f\n",temperatura_out);	
			system("pause");
			system("cls");
		}
		else if(opcion == 3){
			system("cls");
			printf("Convertidor de Farenheght a Kelvin\n");
			printf("Introduzca la temperatura a convertir: ");
			fflush(stdin); 
			scanf("%f",&temperatura_in); 
			system("cls");
			temperatura_out = faren_kelvin(temperatura_in);
			printf("La temperatura en Kelvin es: %f\n",temperatura_out);		
			system("pause");
			system("cls");
		}
		else if(opcion == 4){
			system("cls");
			printf("Convertidor de Kelvin a Farenheght\n");
			printf("Introduzca la temperatura a convertir: ");
			fflush(stdin); 
			scanf("%f",&temperatura_in); 
			system("cls");
			temperatura_out = kelvin_faren(temperatura_in);
			printf("La temperatura en Farenheght es: %f\n",temperatura_out);	
			system("pause");
			system("cls");
		}
		else if (opcion == 5){
			system("cls");
			printf("Convertidor de Centigrados a Kelvin\n");
			printf("Introduzca la temperatura a convertir: ");
			fflush(stdin); 
			scanf("%f",&temperatura_in); 
			system("cls");
			temperatura_out = celsius_kelvin(temperatura_in);
			printf("La temperatura en Kelvin es: %f\n",temperatura_out);	
			system("pause");
			system("cls");
		}
		else if(opcion == 6){
			system("cls");
			printf("Convertidor de Kelvin a Centigrados\n");
			printf("Introduzca la temperatura a convertir: ");
			fflush(stdin); 
			scanf("%f",&temperatura_in); 
			system("cls");
			temperatura_out = kelvin_celsius(temperatura_in);
			printf("La temperatura en Centigrados es: %f\n",temperatura_out);	
			system("pause");
			system("cls");
		}
		else{
			system("cls");
			printf("Esa opcion no se encuentra disponible...");
			system("pause");
		}
	}
} 



