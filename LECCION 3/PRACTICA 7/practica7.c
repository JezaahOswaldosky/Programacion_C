#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	int a[2][3] ={
				 {3,2,6},
				 {4,5,20}
				 };
				 
	printf("Elemento 3 en la columna 2 es: %d\n", a[1][2]);
	a[1][2] = 25; 
	system("pause");
	system("cls");
	printf("Elemento 3 en la columna 2 es: %d\n", a[1][2]);
	
	return 0; 
	
}
