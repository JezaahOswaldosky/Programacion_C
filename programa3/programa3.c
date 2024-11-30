/*Programa que calcule el perimetro y area de un triangulo mediante funciones*/
#include<stdio.h>

//Funcion para calcular el perimetro del triangulo, asumiendo que el triangulo es equilatero 
float perimetroFnc(float base){
	float perimetro;
	perimetro = base*3; 
	
	return perimetro; 
}

//funcion para calcula el area del triangulo 
float areaFnc(float base, float altura){
	float area; 	
	area =  (base*altura)/2; 
	
	return area; 
}

//Funcion main 
int main(){

float base, altura; 


//Solicitar al usuario la base y altura de la figura 
printf("Altura:"); 
scanf("%f", &altura);

printf("\nBase:"); 
scanf("%f", &base);

//Imprimir resultado 
printf("Area: %f\nPerimetro: %f",areaFnc(base,altura),perimetroFnc(base));

return 0; 
}
