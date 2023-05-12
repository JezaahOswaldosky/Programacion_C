#include <stdio.h>
#include <stdlib.h>

#define dolar 17.58
#define peso 0.057

int main(){
	system("title PROB1_10");
	system("color c");
	
	int op;
	float  get_pesos,get_dolares;
	
	printf("Desea cambiar Dollar a Pesos presione \"1\", desea cambiar Pesos a Dollar presione \"2\" ");
	scanf("%d",&op);
	
	if(op == 1){
		system("cls");
		printf("Has seleccionado cambiar Dollar a Pesos\nCual es la cantidad a cambiar???\n");
		scanf("%f",&get_dolares);
		printf("\aLos $%f dolares son: $%f pesos",get_dolares,get_dolares*dolar);
	} 
	else if(op == 2){ 
		system("cls");
		printf("Has seleccionado cambiar de Pesos a Dollares\nCual es la cantidad a cambiar???\n");
		scanf("%f",&get_pesos);
		printf("\aLos $%f pesos son: $%f dollares",get_pesos,get_pesos/dolar);
	} 
	else{  
		exit(EXIT_FAILURE);
	} 
}  
