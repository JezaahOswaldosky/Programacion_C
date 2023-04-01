#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	int j = 63; 
	int *p = NULL;
	p = &j; 
	
	printf("La direccion de j es: %x\n", &j);
	printf("pe contiene la direccion %x\n", p);
	printf("El valor de j es: %d\n",j);
	printf("p es puntero al valor de %d\n", *p);
}
