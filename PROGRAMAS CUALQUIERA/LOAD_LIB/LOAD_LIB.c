/*Esta biblioteca es un programa que cuenta con diferentes estilos de barras de carga, para que puedas 
utilizar varias opciones que desees...*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>	

////Funcion para utilizar gotoxy e imprimir... 
void gotoxy(int x, int y){
	HANDLE hcon; 
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos; 
	dwPos.X = x; 
	dwPos.Y = y; 
	SetConsoleCursorPosition(hcon,dwPos);
}
////Funcion encargada para borrar y pausar la consola... 
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

////Primera opcion de barra de carga... 
void load_1(int duracion, int pos_x, int pos_y, int tiempo){
	int i; 
	for(i=0;i<=duracion;i++){
		//usleep(tiempo);
		gotoxy(pos_x,pos_y);
		printf("Loading");
		clear(1);
		gotoxy(pos_x,pos_y);
		printf("Loading.");
		clear(1);
		gotoxy(pos_x,pos_y);
		printf("Loading..");
		clear(1);
		gotoxy(pos_x,pos_y);
		printf("Loading...");
		clear(1);
	}
	return 0; 
}
////Segunda opcion de carga... 
void load_2(int duracion, int pos_x, int pos_y, int tiempo){
	int i; 
	gotoxy(pos_x,pos_y);
	printf("Loading<                                   >");
	pos_x+=8;
	for(i=0;i<=34;i++){
		usleep(tiempo);
		gotoxy(pos_x,pos_y);
		printf("#");
		pos_x+=1;
		if(i == 34){
			gotoxy(pos_x-35,pos_y+1);
			printf("Completed..\a");
		}
	}
	return 0; 
}
////Tercera opcion de carga... 
void load_3(int duracion,int pos_x,int pos_y, int tiempo){
	int i;
	gotoxy(pos_x,pos_y);
	printf("Loading");
	for(i=0;i<=duracion;i++){
		usleep(tiempo);
		gotoxy(pos_x+10,pos_y);
		printf("|");
		usleep(tiempo);
		gotoxy(pos_x+10,pos_y);
		printf("/");
		usleep(tiempo);
		gotoxy(pos_x+10,pos_y);
		printf("-");
		usleep(tiempo);
		gotoxy(pos_x+10,pos_y);
		printf("\\");
	}
	return 0;
}
////Cuarta opcion de carga...
void load_4(int duracion, int pos_x,int pos_y, int tiempo){
	int i;// time = 100000;
	
	for(i=0;i<=duracion;i++){
		usleep(tiempo);
		gotoxy(pos_x,pos_y);
		printf("Loading		%d %%", (i*100/duracion));
	}
	return 0; 
}

void load_5(int duracion, int pos_x, int pos_y, int tiempo){
	int i; 
	for(i=0; i<=duracion; i++){
		usleep(tiempo);
		gotoxy(pos_x,pos_y);
		printf("Loading");
		clear(1);
	}
	return 0; 
}

void load_6(int duracion, int pos_x, int pos_y, int tiempo){
	int i; 
	for(i=0;i<=duracion;i++){
		usleep(tiempo);
		gotoxy(pos_x,pos_y);
		printf("L");
		clear(1);
		gotoxy(pos_x,pos_y);
		printf("LO");
		clear(1);
		gotoxy(pos_x,pos_y);
		printf("LOA");
		clear(1);
		gotoxy(pos_x,pos_y);
		printf("LOAD");
		clear(1);
		gotoxy(pos_x,pos_y);
		printf("LOADI");
		clear(1);
		gotoxy(pos_x,pos_y);
		printf("LOADING");
		clear(1);
		gotoxy(pos_x,pos_y);
		printf("LOADING");
		clear(1);
		gotoxy(pos_x,pos_y);
		printf("LOADING");
		clear(1);
		gotoxy(pos_x,pos_y);
		printf("LOADING");
		clear(1);
	}
	return 0; 
}

void load_select(int op,int duracion, int pos_x, int pos_y, int tiempo){
	switch(op){
		case 1: 
			load_1(duracion, pos_x,pos_y, tiempo);
		break; 
		case 2: 
			load_2(duracion, pos_x,pos_y,tiempo);
		break; 
		case 3: 
			load_3(duracion, pos_x,pos_y,tiempo);
		break; 
		case 4: 
			load_4(duracion,pos_x,pos_y,tiempo);
		break;
		case 5: 
			load_5(duracion, pos_x,pos_y,tiempo);
		break;
		case 6: 
			load_6(duracion, pos_x,pos_y,tiempo);
		break;   
		default: 
			exit(EXIT_FAILURE);
		break; 
	}
}

void cursor_cover(){
		// Ocultar cursor.
	CONSOLE_CURSOR_INFO cci;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
	cci.bVisible = 0;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
}

int main(){
	system("title loadlib_test");
	cursor_cover();

	load_select(6,25,45,15,1000000);
	
	return 0; 
}

