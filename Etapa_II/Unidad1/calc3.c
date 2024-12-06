/******************************************************
		Descripcion Preliminar 

El programa es una calculadora donde el usuario introduce 
numero y simbolo del para realizar la operacion. 
El programa soporte +,-,* y /. Con entradas int. 

Programador: Jezaah Oswaldosky 
Fecha: 12/05/2024

calc3.c es una calculadora donde el usuario introduce 
los numeros a operar y el simbolo de la operacion. 
Y finalmente se obtiene el resultado. 
Nota: El programa se implementa infinitamente 
*******************************************************/
#include<stdio.h>

char line[100];
int res; 
char operador; 
int valor; 

int main(){
res = 0; 	//Inicializar la variable resultado 

//Inicializar un ciclo infinito con while(1)
while(1){
	printf("Resultado: %d\n", res); 
	printf("Introducir operador y numer: "); 

	fgets(line, sizeof(line), stdin); 
	sscanf(line, "%c %d", &operador, &valor); 
	
	///condicion de salida o finalizacion del programa 
	if((operador == 'q') || (operador == 'Q'))
		break; 	

	switch(operador){
	case '+': 
		res += valor; 		
	break; 
	case '-': 
		res -= valor; 
	break;
	case '*':
		res *= valor; 
	break; 
	case '/':
		//Evaluamos que el valor no sea cero 
		if(valor ==0){
			printf("Error: no se puede dividir por cero \n");
			printf("Operacion ignorada'n");
		}else{
			res /= valor; 
		}
	break; 
	default: 
		printf("Operador desconocido %c", operador); 
		break; 
	}
}

return 0; 

}
