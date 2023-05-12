#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>

void loading(){
	int j,x=50,y=15; 
	for(j=0;j<=25;j++){
		
		gotoxy(x,y);
		printf("Loading.");
		clear(1);
		gotoxy(x,y);
		printf("Loading..");
		clear(1);
		gotoxy(x,y);
		printf("Loading...");
		clear(1);
	}
}

void clear(int op){
	if(op == 1){
		system("cls");
	}
	else if(op == 2){
		system("pause");
		system("cls");
	}
	else if(op == 3){
		system("pause");
	}
	else{
		exit(EXIT_FAILURE);
	}
	
}

void gotoxy(int x, int y){
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos); 
}

float pesos_dollar(float pesos, float dollar){
	return (pesos/dollar);
}

float dollar_pesos(float dollar, float pesos){
	return (dollar/pesos);
}

void start_menu(){
	system(1);
	gotoxy(45,0);
	printf("Menu\n1.Cambiar Dolar a Pesos\n2.Cambiar Pesos a Dolares\n3.Configuracion\n4.Salir");
}

void set_menu(){
	system(1);
	gotoxy(45,0);
	printf("Configuracion\n1.Configurar color\n2.Cambiar valor del Dolar\n3.Regresar");
}	

int main(){
	
	float patron_dolar, dolar, pesos, opcion;  
	bool main_loop = true;
	/////Le damos estilo al programa... 
	system("title DollarxChangev0.1");
	system("color c");
	
	////Implementamos un Loading al programa para relajar al cliente... 
	loading(); 
	
	/////Entramos al programa que se ejecutara indefinidamente.. 
	while(1){
		start_menu();
	}
	return 0; 
}
