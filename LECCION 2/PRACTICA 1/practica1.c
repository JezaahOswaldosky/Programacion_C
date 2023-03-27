#include <stdio.h>
#include <windows.h>

////DECLARACION... 

int main(){
	int x, result;
	
	x = 5; 
	result = square(x);
	printf("El cuadrado de %d es: %d \n",x,result);
	
	return 0; 
}

///DEFINICION 
int square (int num){
	int y; 
	
	y = num*num; 
	return(y);
}
