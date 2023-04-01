#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void test1(int l){
	printf("La direccion de l es: %x\n", &l);
}
int main(){
	system("title Manejo de memoria");
	system("color c");
	
	int i =0; 
	
	printf("La direccion de i es %x\n",&i);
	test(i);
	test1(i);
	printf("La direccion de i es: %x\n",&i);
	test(i);
	test1(i);
	
	return 0; 
}

void test(int k){
	printf("La direccion de k es: %x\n", &k);
}
