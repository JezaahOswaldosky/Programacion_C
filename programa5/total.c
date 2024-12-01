/*Programa genera una suma y se detiene utilizando la condicion break*/
#include<stdio.h>
char line[100]; 
int total; 
int item; 

int main(){
total = 0; 
while(1){
	printf("Introduzca el # para agregar \n");
	printf(" o 0 para parar: ");
	fgets(line, sizeof(line), stdin); 
	sscanf(line,"%d", &item);

	if(item == 0) 
		break;

	total += item; 
	printf("Total: %d\n", total);
}

printf("Total final: %d\n", total);

return 0; 
}
