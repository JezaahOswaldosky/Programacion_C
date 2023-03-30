#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main(){
	system("title Arreglos");
	
	float purchases[3] = {10.99,14.25,90.50};
	float total = 0; 
	int k; 
	
	///total del purchase 
	for(k=0;k<=3;k++){
		total += purchases[k];
	}
	
	printf("El total de Purchases es: %6.2f \n", total);
	
	return 0; 
	
}
