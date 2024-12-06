/*******************************************************
		Descripcion Preliminar 

El programa toma 5 numero del usuario y clasifica cuantos
de estos son numeros 3 y 7. 

Programador: Jezaah Oswaldosky 
Fecha: 12/05/2024

seven.c es un programa que permite al usuario introducir 
5 numeros. Para clasificar cuantos de estos numeros son 
3  o 7. 
Y finalmente entrega una salida del resultado. 
*******************************************************/
#include<stdio.h>

char line[100]; 	//Linea de entrada 
int sevenCont; 	//Numero de 7 en los datos 
int data[5];		//Los datos a contar 3 y 7 de entrada
int threeCont; 		//El numero de 3 en los datos 
int indice; 		//Indice de entrada de datos 

int main(){
sevenCont = 0; 
threeCont = 0; 

printf("Introduce 5 Numeros: \n"); 
fgets(line, sizeof(line), stdin); 
sscanf(line,"%d %d %d %d %d", &data[0], &data[1], &data[2], &data[3] , &data[4]);

for(indice = 1; indice <= 5; ++indice){
	if(data[indice] == 3){
		++threeCont;
	}
	if(data[indice] == 7){
		++sevenCont;
	}
}
printf("\nNumero de 3's registrados %d\nNumero de 7s registrados %d\n", threeCont, sevenCont);
return 0; 

}
