/***********************************************		*
		Descripcion preliminar

El programa calcula el promedio de numeros introducidos por 
el usuario. 

Programador: Jezaah Oswaldosky
Fecha: 12/06/2024

promedio.c es un programa que permite al usuario 
introducir una serie de numeros para calcular 
el promedio. 
Primero el usuario introduce la cantidad de numeros 
a estimar. Posteriormente se introducen los numeros, 
y finalmente el programa desplegara el promedio de 
tdos los numeros introducidos por el usuario. 
*************************************************/
#include<stdio.h>

char line[80];

int cnt; 

int main(){
printf("\t\tGenerador de promedio\n");
printf("Cuantos numeros desea estimar su promedio? ");
fgets(line, sizeof(line), stdin); 
sscanf(line, "%d", &cnt); 

int datos[cnt];
int datosFinal = 0; 

for(int i =  0; i < cnt; i++){
	printf("\nNumero %d ", i+1);
	fgets(line, sizeof(line), stdin); 
	sscanf(line, "%d", &datos[i]);

	datosFinal += datos[i];
}

///Imprimir el promedio y resultado 
printf("\nPromedio: %f", (float)(datosFinal/cnt)  );

return 0; 




} 
