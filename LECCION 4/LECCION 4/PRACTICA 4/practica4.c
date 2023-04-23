#include <stdio.h>
#include <stdlib.h>

int sum(int num1, int num2);
int rest(int num1, int num2);
int mult(int num1, int num2);
int divi(int num1, int num2);

int main(){
	int x,y,seleccion,resultado; 
	int(*op[4])(int,int);
	
	op[0] = sum;
	op[1] = rest;
	op[2] = mult;
	op[3] = divi; 
	
	printf("Introduce dos numeros enteros: \n");
	scanf("%d %d",&x,&y);
	system("cls");
	printf("Los numero son: %d y %d\n", x, y);
	system("pause");
	system("cls");
	printf("Opciones\n1.Sumar\n2.Restar\n3.Multiplicar\n4.Dividir\n");
	scanf("%d",seleccion);
	resultado = op[seleccion](x,y);
	system("pause"); 
	system("cls"); 
	printf("%d", resultado); 
	system("pause"); 
	
	return 0; 
}

int sum(x, y){
	return(x + y);
}
int rest(x, y){
	return(x - y);
}
int mult(x, y){
	return(x*y);
}
int divi(x, y){
	if(y != 0){
		return(x/y);
	}
	else{
		return 0; 
	}
}
