/*Programa que hace el manejo de continue para sumar articulos*/
#include<stdio.h>
//Variables
char line[100]; 
int total;
int item;
int minus_items; 

int main(){
total = 0;
minus_items = 0; 

while(1){
	printf("Introduzca # para agregar \n");
	printf(" o 0 para parar: ");

	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &item);

	if(item == 0)
		break; 

	if(item < 0){
		++minus_items; 
		continue; 
	}
	total += item; 
	printf("Total: %d\n", total); 
}
printf("Total final %d\n", total); 
printf("con %d items negativos omitidos: ", minus_items);

return 0; 
}
