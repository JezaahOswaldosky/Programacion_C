#include <stdio.h>
#include <stdlib.h>

int main(){
	int x=10,y=0;
	
	if(y != 0){
		printf("x/y=%d",x/y);
	}
	else{
		printf("Divisor es 0. Fin del programa...");
		exit(EXIT_FAILURE);
	}
	return 0; 
}
