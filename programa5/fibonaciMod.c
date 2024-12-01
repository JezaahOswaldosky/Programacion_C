/*Programa que genera la serie de fibonaci donde el usuario itrnoduce 
la cantidad de valores*/
#include<stdio.h>
//Valores requeridos 
int oldNum, curNum, nxtNum, limite; 

int main(){
printf("Introduzca un numero del cual desee truncar la serie: \n");
scanf("%d", &limite); 

///Inicializar la serie
oldNum = 1; 
curNum = 1; 

printf("1\n");

while(curNum < limite){
	printf("%d\n", curNum); 
	nxtNum = curNum + oldNum; 

	oldNum =  curNum; 
	curNum =  nxtNum; 
}
return 0; 
} 
