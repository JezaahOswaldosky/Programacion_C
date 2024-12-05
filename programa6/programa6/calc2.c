/*Programa que es una calculadora la cual permite sumar, restar, 
multiplicar y dividir numeros mediante simbolos*/
#include<stdio.h>
char line[100]; 
int result; 
char operador; 
int val; 

int main(){
result = 0; 

///El programa se ejecutara infinitamente hasta  introducir "N" 
//como operador
while(1){
	printf("\nResultado: %d\n", result); 

	printf("Introduce operador y valor: ");
	fgets(line, sizeof(line), stdin); 
	sscanf(line, "%c %d", &operador , &val);

	if(operador == '+'){
		result += val; 
	}else if(operador == '-'){
		result -= val; 
	}else if(operador == '*'){
		result *= val;
	}else if((operador == 'q') || (operador == 'Q') ){
		break; 
	}else{
		printf("\nEse operador %c no esta disponible!!!", operador);
	}
}


return 0; 
}
