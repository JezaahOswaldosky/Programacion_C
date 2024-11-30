/*Programa que tome la cantidad de minutos y exprese a horas con 
minutos*/
#include<stdio.h>
char line[6]; 
int minutos, horas; 

int main(){
printf("Introduzca cantidad de minutos: "); 
fgets(line, sizeof(line), stdin); 
sscanf(line, "%d", &minutos); 

int minutosSobras;
if(minutos >= 60){
	horas = minutos/60;
	minutosSobras = minutos - horas*60; 
	printf("El tiempo de %d minutos es: %d horas: %d minutos\n", minutos, horas, minutosSobras);
}else{
	minutosSobras = minutos;
	printf("El tiempo de %d minutos es: %d horas: %d minutos\n", minutos, 0, minutosSobras);
}

return 0; 

}
