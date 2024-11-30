/*El presente programa captura el valor por la consola, y realiza la 
operacion de multiplicarlo por 2*/
#include<stdio.h>

//Declarar variables 
char line[100]; 
int value; 

int main(){
printf("Introduce un valor: \n"); 

fgets(line, sizeof(line), stdin); 
sscanf(line, "%d", &value); 

printf("El doble del valor anterior es: %d", 2*value);

return 0; 
}
