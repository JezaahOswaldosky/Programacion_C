#include<stdio.h>
#include<windows.h>

int main(){
	int contador; 
	system("title While loop");
	
	while(contador < 8){
		printf("contador = %d\n", contador);
		contador++;
	}
	return 0;
}
