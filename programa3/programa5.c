/*Programa que deliberadamente muestre los siguiente errores: 
	-Imprimir un numero flotante como %d 
	-Imprimir un entero en covnersion flotante 
	- Imrpimir un caracter en %d
*/
#include<stdio.h>

int main(){
//Declaramos las variables y su tipo 
int decimal =  22; 
float flotante = 3.14156; 
char caracter = 'f';

//Imprimir los errores 
printf("Este es un decimarl expresado en : %f\n", decimal); 
printf("Este es un flotante expresado en : %d\n", flotante);
printf("Este es un caracter expresado en : %d\n", caracter); 

return 0; 
}
