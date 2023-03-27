#include <stdio.h>
#include <windows.h>

int main(){
	int contador = 1 ; 
	
	do{
		printf("Contador = %d\n\a", contador);
		contador++; 
	}while(contador < 8);
	
	return 0;
	
}
