#include <stdio.h>
#include <stdlib.h>

void mi_funcion(int n);

int main(){
	void (*puntero)(int);
	puntero = mi_funcion; 
	puntero(4);
}

void mi_funcion(int n){
	int k; 
	for(k = 0; k < n; k++){
		printf("Hola guapo!!\n\a");
	} 
} 
