/*Programa que toma la cantidad de horas y minutos para convertirlo 
a total de minutos*/
#include<stdio.h>
char line[25]; 
int minutos, horas; 

int main(){
printf("Introduzca la cantidad de horas y minutos: ");
fgets(line, sizeof(line), stdin);
sscanf(line, "%d %d", &horas,&minutos);

printf("El total de minutos es: %d", (horas*60) + minutos );

return 0; 
}
