/*Programa que convierte kilometros por hora a millas por hora*/
#include<stdio.h>
//Variables y constantes
float kilometros; 

int main(){
printf("Introducir kilometros(Km): ");
scanf("%f", &kilometros); 

printf("\nLa particula se mueve a %f km/hr\n", kilometros);

printf("\nLa particula se mueve a %f Millas/hr", kilometros/1.609);

return 0; 

}
