/*El programa se encarga de implementa una calculadora que permite sumar, restar, diviri y multiplicar 
numero al usuario.... Este metodo aplica hardcore donde todo se programara en la funcion main();*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>	///Esta biblioteca se encarga de las variables booleanas y aritmetica booleana... 

int main(){
	///Inicializamos las variables requeridas para nuestro programa... 
	int a, b, opcion; 
	bool program_exe = true ;

	////Aplicamos algo de estilo a nuestro programa... 
	system("title CALCULADORA CON METODO 1");
	system("color a");
	
	///Utilizaremos un loop infinito con la finalidad de probar todas y cada una de las opciones... 	
	while(program_exe == true){ ///mientras el programa este en true o sea verdad, se ejecutara infintamente... 
	
	///Pedimos la informacion de dos numeros para aplicar la aritmetica deseada... 
	printf("Introduzca el primer numero: \n");
	scanf("%d",&a);
	printf("Introduzca el segundo numer: \n");
	scanf("%d",&b);
	system("pause");	///Pausamos el programa para despues pasar a borrar... 
	system("cls");
	printf("1.Sumar\n2.Restar\n3.Multiplicar\n4.Dividir\n5.Salir\n\n");	///Mostramos el menu al usuario
	scanf("%d",&opcion);
	system("cls");
	///Realizamos la aritmetica deseada dependiendo del valor que selecciono el usuario... 
	switch(opcion){
		case 1: 
			system("cls");
			printf("Has sumado los numeros\n%d + %d = %d\n\a",a,b,a+b);	///Aaplicamos la suma y la mostramos..
			system("pause");
			system("cls");
			a=0;b=0;	///reiniciamos las variables iniciales... 
		break; 
		case 2: 
			system("cls");
			printf("Has restado los numeros\n%d - %d = %d\n\a",a,b,a-b);	///Aplicamos la resta y la mostramos... 
			system("pause");
			system("cls");
			a=0;b=0;	///reiniciamos las variables iniciales... 
		break; 
		case 3: 
			system("cls");
			printf("Has multiplicado los numeros\n%d x %d = %d\n\a",a,b,a*b);	///Aplicamos la multiplicacion y la mostramos... 
			system("pause");
			system("cls");
			a=0;b=0;	///reiniciamos las variables iniciales... 
		break; 
		case 4: 
			system("cls");

			printf("Has divido los numeros\n%d / %d = %f\n\a",a,b,(float)a/b);	////Aplicamos la division y la mostramos... 
			system("pause");
			system("cls");
			a=0;b=0;	///reiniciamos las variables iniciales... 
		break; 
		case 5: 
			program_exe = false;  ///Rompemos el ciclo haciendo la variable program_exe falso... 
		break; 
	}
	
	}	
	////Damos mensaje de despedida y salimos del programa... 
			system("cls");
			printf("Bueno, seleccionaste salir del programa... Gracias por utilizar el programa.. :D \nNos vemos pronto..\n\n\a");
			system("exit");	////Salimos del programa... en su totalidad... 
	return 0; 
}

