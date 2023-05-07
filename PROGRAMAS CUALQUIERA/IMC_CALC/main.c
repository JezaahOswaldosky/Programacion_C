/*El programa se encarga de calcular el indice de masa corporal de una persona... pero tambien registras datos 
como nombre del paciente, edad y demas pendejadas...  */
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

///Definimos nuestra ecuacion del indice de masa corporal.... 
#define IMC(peso,talla) (peso/(talla*talla))

void gotoxy(int x, int y){
	HANDLE hcon; 
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos; 
	dwPos.X = x; 
	dwPos.Y = y; 
	SetConsoleCursorPosition(hcon,dwPos);
	
	return 0; 
}

void clear(int opcion){
	if(opcion == 1){
		system("cls");
	}
	else if(opcion == 2){
		system("pause");
		system("cls");
	}
	else if(opcion == 3){
		system("pause");
	}
	else{
		exit(EXIT_FAILURE);
	}
}

void loading(int opcion){
	int i = 0,x=55,y=15; 
	
	if(opcion == 1){
		for(i=0;i<20;i++){
			gotoxy(x,y);
			printf("L");
			clear(1);
			gotoxy(x,y);
			printf("LO");
			clear(1);
			gotoxy(x,y);
			printf("LOA");
			clear(1);
			gotoxy(x,y);
			printf("LOAD");
			clear(1);
			gotoxy(x,y);
			printf("LOADI");
			clear(1);
			gotoxy(x,y);
			printf("LOADIN");
			clear(1);
			gotoxy(x,y);
			printf("LOADING");
			clear(1);
			gotoxy(x,y);
			printf("LOADING");
			clear(1);
			gotoxy(x,y);
			printf("LOADING.");
			clear(1);
			gotoxy(x,y);
			printf("LOADING..");
			clear(1);
			gotoxy(x,y);
			printf("LOADING...");
			clear(1);
		}		
	}
	else{
		for(i=0;i<10;i++){
			gotoxy(x,y);
			printf("L");
			clear(1);
			gotoxy(x,y);
			printf("LO");
			clear(1);
			gotoxy(x,y);
			printf("LOA");
			clear(1);
			gotoxy(x,y);
			printf("LOAD");
			clear(1);
			gotoxy(x,y);
			printf("LOADI");
			clear(1);
			gotoxy(x,y);
			printf("LOADIN");
			clear(1);
			gotoxy(x,y);
			printf("LOADING");
			clear(1);
			gotoxy(x,y);
			printf("LOADING");
			clear(1);
			gotoxy(x,y);
			printf("LOADING.");
			clear(1);
			gotoxy(x,y);
			printf("LOADING..");
			clear(1);
			gotoxy(x,y);
			printf("LOADING...");
			clear(1);
		}		
	
	}
	return 0; 
}

void presentacion(){
	
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("+   *******   *       *    ****            ****   ***  *     ****   +\n");
	printf("+      *      **     **   *    *          *    * *   * *    *    *  +\n");
	printf("+      *      * *   * *   *        ****   *      ***** *    *       +\n");
	printf("+      *      *  * *  *   *    *          *    * *   * *    *    *  +\n");
	printf("+   *******   *   *   *    ****            ****  *   * ****  ****   +\n");
	printf("+                                                                   +\n");
	printf("+                  Created by Jezaah Oswaldosky                     +\n");
	printf("+                                                                   +\n");
	printf("+                     PRESS ANY KEY TO CONTINUE                     +\n");
	printf("+                                                                   +\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	return 0;
}

void menu(){
	int x=40  ,y=10;
	gotoxy(x,y);
	printf("++++++++++++++++++++++\n");
	gotoxy(x,y+1);
	printf("+   1.Calcular IMC   +\n");
	gotoxy(x,y+2);
	printf("+   2.Opciones       +\n");
	gotoxy(x,y+3);
	printf("+   3.Acerca de...   +\n");
	gotoxy(x,y+4);
	printf("+   4.Salir          +\n");
	gotoxy(x,y+5);
	printf("++++++++++++++++++++++\n");
	
	return 0;
}

void menu_opciones(){
	int x=40  ,y=10;
	gotoxy(x,y);
	printf("++++++++++++++++++++++\n");
	gotoxy(x,y+1);
	printf("+   1.Color   +\n");
	gotoxy(x,y+2);
	printf("+   2.Salir       +\n");
	gotoxy(x,y+3);
	printf("++++++++++++++++++++++\n");
	
	return 0;
}

void categoria(char nombre[25], int edad, float IMC_final){
	if(IMC_final <= 18.5){
		printf("El paciente %s de edad %d tiene un IMC de %5.2f, el paciente esta muy delgado, hay que comer mas\n");
		clear(3);
	}
	else if(IMC_final > 18.5 && IMC_final < 24.9){
		printf("El paciente %s de edad %d tiene un IMC de %5.2f, el paciente cuenta con cuerpo ideal, sigue comiendo saludable\n");
		clear(3);
	}
	else if(IMC_final > 24.9 && IMC_final < 29.9){
		printf("El paciente %s de edad %d tiene un IMC de %5.2f, el paciente tiene mas peso del normal, hay que hacer un poco de ejercicio\n");
		clear(3);
	}
	else if(IMC_final > 29.9 ){
		printf("El paciente %s de edad %d tiene un IMC de %5.2f, el paciente cuenta con obesidad,hay que comer menos y hacer mas ejercicio\n");
		clear(3);
	}
}

int main(){
	system("title IMC_CALC");	///primero introducimos un titulo para nuestro programa... 
	
	int opcion; 	///implementamos la funcion opcion...
	char nombre[25];	///Guardamos una cadena de caracteres para el nombre del usuario
	int edad, altura, peso; 	///Declaramos mas variables como la edad, altura y peso del usuario.. 
	float IMC_final; 	///Declaramos el valor del indice de masa corporal... 
	
	
	loading(1);	///Implementamos una barar de carga para estresar al usuario final y hacerlo esperar.. por que es puto.. solamente eso..
	clear(1); 	///limpiamos la pantalla... 
	presentacion();	///Mostramos al usuario la presentacion para que conozca sobre el software... 
	clear(2);	//pausamos el programa y despues limpiamos consola... 
	menu();		//Mostramos el menu al usuario... 
	scanf("%d",&opcion);	///Capturamos la opcion correspondiente del menu... 
	
	switch(opcion){
		case 1: 
			printf("Introduzca el nombre del paciente: \n");	///Pedimos el nombre del paciente
			gets(nombre); 		//capturamos el nombre del paciente
			clear(1);		//limpiamos pantalla al capturar el nombre del paciente...
			printf("Introduzca la edad del paciente: \n");	///pedimos la edad del paciente 
			scanf("%d",&edad);	///capturamos la edad del paciente...
			clear(1);		///limpiamos la consola para que no estorbe... 
			printf("Introduzca el peso del paciente (kg):	\n");	///pedimos el peso del paciente... 
			scanf("%d",&peso);	///capturamos el peso del paciente... 
			clear(1);		///limpiamos la consola.. 
			printf("Introduzca la altura del paciente (cm): \n");	///pedimos la altura del paciente para hacer el calculo..
			scanf("%d",&altura);	///ca;turamos la altura del paciente para hacer el calculo.. 
			clear(1);		///borramos la consola... 
			IMC_final = IMC(peso,altura);	///Aplicamos la aritmetica para determinar el IMC del paciente.. 			
			loading(2);	///hacemos esperar al usuario para desesperarlo... 
			clear(1);
			
			categoria(nombre, edad, IMC_final);	///Aplicamos el menu de caterizar, el cual imprimira al usuario su estatus...
			
		break; 
		case 2: 
			clear(1);
			menu_opciones();
		break; 
		case 3: 
		
		break; 
		case 4: 
			
		break; 
		default: 
			exit(EXIT_FAILURE);		
		break; 
	}
	
	
}
