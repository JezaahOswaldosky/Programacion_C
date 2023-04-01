#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int add_up(int *a, int num_elements);

int main(){
	int orders[5]={99,200,137,116,98};
	
	printf("El orden total es: %d\n", add_up(orders,5));
	
	return 0; 	
}

int add_up(int *a, int num_elements){
	int total = 0; 
	int k; 
	
	for(k = 0; k < num_elements; k++){
		total += a[k];
	}
	return (total);
}
