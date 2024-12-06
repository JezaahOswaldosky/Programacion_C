/******************************************************
		Descripcion Preliminar 

El programa captura 5 numeros del usuario, y este entrega
la suma de todos los numeros introducidos. 

Programador: Jezaah Oswaldosky
Fecha: 12/05/2024

total5f.c es un programa similar al total5w.c, salvo que 
este programa utiliza ciclos for para funcionar. 
El programa inicia preguntando al usuario 5 numeros. 
Finalmente el programa imprime la suma de todos los 
numeros capturados. 
********************************************************/
#include<stdio.h>

int total; 
int current;
int cont; 

char line[80];

int main(){
total = 0; 
for(cont = 0; cont < 5; cont++){
	printf("Contador: "); 

	fgets(line, sizeof(line), stdin); 
	sscanf(line, "%d", &current); 

	total += current;
}

printf("\nEl valor total es: %d", total); 
return 0; 

}
