#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	system("PRACTICA 8");
	int a[2][3] = {{3,2,6},{4,5,20}};
	
	int k,j; 
	
	for(k = 0; k < 2; k++){
		for(j = 0; j < 3; j++){
			printf("%d ", a[k][j]);	
		}
		printf("\n");
	}
}
