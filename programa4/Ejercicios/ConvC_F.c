/*Programa que convierte de Celsius a Farenheit*/
#include<stdio.h>
char line[10];
float valorC; 

int main(){
//Capturar la temperatura
printf("Introduzca Temperatura en C*: "); 
fgets(line, sizeof(line), stdin); 
sscanf(line, "%f", &valorC); 

///Imprimir resultado 
printf("\nEl valor en F*: %f", ((9/5)*valorC)+32 );

return 0; 

}
