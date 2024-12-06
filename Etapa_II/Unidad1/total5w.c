/*****************************************************
		Descripcion Preliminar 

El programa cuenta una serie de 5 numeros introducidos 
por el usuario. 

Programador: Jezaah Oswaldosky 
Fecha: 12/05/2024

total5w.c es un programa el cual toma 5 numeros del 
usuario y este entrega la suma de dichos numeros. 
El programa inicia preguntando al usuario el numero, 
hasta que se complete una serie de 5 numeros. 
Finalmente este entrega la suma de todos los numeros 
proporcionados por el usuario. 
*****************************************************/
#include<stdio.h>

int total;
int current;
int cont; 

char line[80]; 

int main(){
total = 0; 
cont = 0; 

while(cont < 5){
	printf("Numero: ");
	fgets(line, sizeof(line), stdin); 
	sscanf(line, "%d", &current);
	
	total += current;

	++cont;
}

printf("El total es: %d \n", total);
return 0; 

}
