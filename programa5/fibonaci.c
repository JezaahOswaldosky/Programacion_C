/*Codigo que recrea la serie de fibonaci*/
#include<stdio.h>
//Declaramos variables utiles para el programa 
int old_num, cur_num, next_num; 

int main(){
//Inicio de la secuencia 
old_num = 1; 
cur_num = 1; 

printf("1\n");	//Imprimir el primer numero de la serie 

while(cur_num < 100){	//Se truncara a los primero 100 numeros
	printf("%d\n", cur_num);
	next_num = cur_num + old_num; 

	old_num = cur_num; 
	cur_num = next_num; 
}

return 0;

}

