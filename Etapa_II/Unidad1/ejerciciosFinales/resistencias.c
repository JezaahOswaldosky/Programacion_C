/*************************************************
		Descripcion preliminar 

El programa toma una cantidad de resistores ordenados
en paralelo y se entrega el resultado de total de 
las resistencias. 

Programador: Jezaah Oswaldosky
Fecha: 12/06/2024

resistencias.c es un programa capaz de recibir la 
cantidad de resistencias ordenadas en paralelo para 
determinar la resistencia total de la mall. 
El usuario introduce la cantidad de resistencias en 
el circuito ordenado en paralelo. 
Y finalmente el programa calcula la resistencia total 
del circuito.
*************************************************/

#include<stdio.h>

char line[80]; 

int main(){
int n; 

//Bienvenida y cantidad de resistencias 
printf("\t\tCalculadora de resistencia en paralelo\n"); 
printf("Numero de resistencias ordenadas en paralelo: "); 
fgets(line, sizeof(line), stdin); 
sscanf(line, "%d", &n);

//declaramos una matrix de n valores 
//int matrix[n];
float resist[n];
int i; 
float total = 0; 

for(i = 0; i < n; i++){
	//Pedir valor de cada resistencia 
	printf("\nResistencia[%d]: ", i+1);
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &resist[i]);

	total += 1/resist[i];

	printf("\nResistencia total: %f", 1/total);
}
return 0;
}

