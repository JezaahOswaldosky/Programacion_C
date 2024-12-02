/*Programa que suma dos numeros mediante simbolos aritmeticos*/
#include<stdio.h>
char line[100]; 
int result; 
char operador; 
int val; 

int main(){
result = 0; 

while(1){
	printf("Resultado: %d\n", result); 

	printf("Introduce opertador y numero: ");
	fgets(line, sizeof(line), stdin); 
	sscanf(line, "%c %d", &operador, &val);

	if(operador = '+'){
		result += val; 
	}else{
		printf("Operador desconocido %c", operador);
	}

}

return 0; 

}
