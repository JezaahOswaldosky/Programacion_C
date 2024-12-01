/*Programa para mostrar deuda en un sistema*/
#include<stdio.h>
char line[100]; 
int balance_owed; 

int main(){
printf("Introduzca el numero de USD a cambiar: ");
fgets(line, sizeof(line), stdin); 
sscanf(line, "%d", &balance_owed);

if(balance_owed = 0)
	printf("Tu no introduciste nada.\n");
else
	printf("Tu debes: $%d USD", balance_owed);

return 0; 



}
