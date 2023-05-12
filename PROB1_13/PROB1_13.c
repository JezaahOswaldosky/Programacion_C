#include <stdio.h>
#include <stdlib.h>

#define hora 3600
#define dia (24*hora)

int main(){
	system("title PRB1_13");
	system("color a");
	
	int dias;
	
	printf("Cuantos dias desea convertir a segundos: \n");
	scanf("%d", &dias);
	printf("\nLos %d dias son en total %d segundos\a",dias,dias*dia);
	
	system("pause");
	return 0;
}
