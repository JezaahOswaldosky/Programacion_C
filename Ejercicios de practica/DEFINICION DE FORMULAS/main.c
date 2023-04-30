/*
Proyecto: FoFi_lib(Formules Figures Library)
Programador: Jezaah Oswaldosky
Fecha: 29-Abril-2023
Resumen: El siguiente programa consta de las ecuaciones basicas para determinar Areas y Perimetros de las figuras geometricas 
basicas... 
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
///Aqui se implementaran las definiciones de constantes
#define PI 3.14159

///Aqui se implementaran las ecuaciones requeridas para determinas las areas de las figuras... 
#define AREA_SQR(L) (L*L)	//Area del cuadrado
#define AREA_TRIG(b,h) (b*h)/2	//Area del triangulo
#define AREA_RECT(b,h) (b*h)	//Area del rectangulo 
#define AREA_TRAP(B,b,h) (h*b*B)/2	//Area del trapecio 
#define AREA_CIRC(r) (PI*r*r)	//Area del circulo
#define AREA_DIAM(D,d) (D*d)	//Area del romboide 
#define AREA_ROMB(B,H) (B*H)	//Area del romboide 

////Aqui se implementarana las ecuaciones requeridas para determinar los perimetros de las figuras... 
#define PER_SQR(L) (4*L)	//Perimetro del cuadrado
#define PER_TRIG(L) (3*L)	//Perimetro del triangulo 
#define PER_RECT(b,h) (b+b+h+h)	//Perimetro del rectangulo 
#define PER_TRAP(p,b,l) (P+b+l+l)	//Perimetro del trapecio 
#define PER_CIRC(r)	(2*PI*r)	//Perimetro del circulo 
#define PER_DIAM(L) (4*L)		//Perimetro del rombo
#define PER_ROMB(b,h) (b+b+h+h)	//Perimetro del rombiode	

///Manejo de funciones 
void loading(){
		int k; 
		int x=45,y=13;
		for(k=0; k<30; k++){
			gotoxy(x,y);
			printf("Loading");
			clrsc(2);
			gotoxy(x,y);
			printf("Loading.");
			clrsc(2);
			gotoxy(x,y);
			printf("Loading..");
			clrsc(2);
			gotoxy(x,y);
			printf("Loading...");
			clrsc(2);
			gotoxy(x,y);
			printf("Loading..");
			clrsc(2);
			gotoxy(x,y);
			printf("Loading.");
			clrsc(2);
		}
}

void clrsc(int op){
	if(op ==1){
		system("pause");
		system("cls");
	}
	else if(op ==2 ){
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
	dwPos.Y = y;	
	SetConsoleCursorPosition(hcon,dwPos);
}

void intro(){
	printf("00000000000000000000000000000000000000000000000000000000000000000000000\n");
	printf("00111110000111100001111100011111110000000000010000000111111100011110000\n");
	printf("00100000001000010001000000000010000000000000010000000000100000010001000\n");
	printf("00111000001000010001110000000010000001111100010000000000100000011111000\n");
	printf("00100000001000010001000000000010000000000000010000000000100000010000100\n");
	printf("00100000000111100001000000011111110000000000011111000111111100011111000\n");
	printf("00000000000000000000000000000000000000000000000000000000000000000000000\n");
	printf("00000000000000000000000000000000000000000000000000000000000000000000000\n");
	printf("000000000000000000000000000===============00000000000000000000000000000\n");
	printf("000000000000000000000000000=  PRESS ANY  =00000000000000000000000000000\n");
	printf("000000000000000000000000000=     KEY     =00000000000000000000000000000\n");
	printf("000000000000000000000000000===============00000000000000000000000000000\n");
	printf("00000000000000000000000000000000000000000000000000000000000000000000000\n\n");
	clrsc(3);
}

void menu(int op){
	if(op == 1 ){	///La opcion 1 pregunta la usuario si desea implementar un perimetro o un area... 
		clrsc(2);
		printf("Que tipo de operacion deseas realizar?? \n");
		printf("1.Determinar un Area\n2.Determinar un Perimetro\n3.Opciones\n4.Salir\n");	
	}
	else if(op == 2 ){
		clrsc(2);
		printf("Has seleccionado determinar un area, pero de que figura???\n");
		printf("1.Cuadrado\n2.Triangulo\n3.Rectangulo\n4.Trapecio\n");
		printf("5.Circulo\n6.Rombo\n7Romboide\n8.Regresar\n");
	}
	else if(op == 3 ){
		clrsc(2);
		printf("Has seleccionado determinar un perimetro, pero de que figura???\n");
		printf("1.Cuadrado\n2.Triangulo\n3.Rectangulo\n4.Trapecio\n");
		printf("5.Circulo\n6.Rombo\n7Romboide\n8.Regresar\n");
	}
	else if(op == 4){
		clrsc(2);
		printf("Color de pantalla\n");
		printf("Color de letra\n\n");
		printf("Opciones\n");
		printf("0 = Negro       8 = Gris\n");
		printf("1 = Azul        9 = Azul claro\n");
		printf("2 = Verde       10 = Verde claro\n");	
		printf("3 = Aguamarina  11 = Aguamarina claro");
		printf("4 = Rojo        12 = Rojo claro\n");
		printf("5 = Púrpura     13 = Púrpura claro\n");
		printf("6 = Amarillo    14 = Amarillo claro\n");
		printf("7 = Blanco      15 = Blanco brillante\n");
	}
	else {
		clrsc(2);
		printf("Esa opcion no se encuentra disponible...\n");
		clrsc(1);
		exit(EXIT_FAILURE);
	}
}


///Inicializamos el programa principal... 

int main(){
	system("title FoFi_Lib");	///Anadimos un poco de estilo al programa, entonces implementamos un titulo... 
	system("color a");			///Anadimos otro mas de estilo para que el programa cambie de color la letra y la pantalla... 
	
	///Introducimos los valores que requeriremos... 
	
	loading();	///Se mantiene una barra de carga para darle estilo al programa... 
	clrsc(2);	//Borramos la informacion del loading... 
	intro();	///Ventana introductoria... 
	
	int op=1, op1,op_menu1=0;op_menu2=0;op_menu_3=0; 
	
	while(op){	///Inicializamos el programa para que empiece a funcionar pero dentro del sistema... 
		menu(1);	///Mencionamos al usuario las opciones disponibles en el primer nivel..
		scanf("%d",&op1);	///Capturamos la informacion por parte del usuario para implementar una accion.. 
		
		if(op1 == 1){
			clrsc(2);
			while(op_menu1){
				menu(2);
				scanf("%d",&op1);	
			}
		}
		else if(op1 == 2){
			clrsc(2);
			menu(3);
			clrsc(3);
		}
		else if(op1 == 3){
			clrsc(2);
			menu(4);
			clrsc(3);
		}
		else if(op1 == 4){
			clrsc(2);
			printf("Gracias por utlizar nuestro software... Hasta pronto!!!\n");
			op = 0;
		}
		else{
			clrsc(1);
			printf("Esa opcion no se encuentra disponible... \n");
			clrsc(3);
		}
		
		
	}
	
	clrsc(1);
	return 0; 
}
