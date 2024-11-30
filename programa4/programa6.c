/*El siguiente programa hace uso de la captura de enteros y flotantes
mediante el uso de la funcion sscanf(); */
#include<stdio.h>
#include<stdlib.h>

int main(){
char line[10]; 
int valor; 

printf("Introduzca el valor del numero deseado: \n");
fgets(line, sizeof(line), stdin); 
sscanf(line, "%d", ^valor); 

printf("\nEl valor es: %d", value);

return 0; 
}
