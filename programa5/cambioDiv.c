/*Programa para cambiar de USD a pesos y viceversa*/
#include<stdio.h>
#include<stdlib.h>

char line[50]; 
float USD, MXN; 
int opcion; 

const float USD_MXN = 20.20;
const float MXN_USD = 19.85;

int main(){

while(1){
printf("\n1. Pesos a Dolar\n2. Dolar a Pesos \n3. Salir\n");
fgets(line,sizeof(line), stdin);
sscanf(line, "%d", &opcion);


	if(opcion == 1){
		printf("MXN: ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%f", &MXN);
		printf("\nTus $ %f pesos son $%f dolares\n", MXN, MXN/MXN_USD);
	}else if(opcion == 2){
		printf("Dolares: ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%f", &USD);
		printf("\nTus $%f dolares son $%f pesos\n", USD, USD*USD_MXN);

	}else if(opcion == 3){
		break;
	}else{
		printf("Esa opcion no existe!! \n");
	}

}



}
