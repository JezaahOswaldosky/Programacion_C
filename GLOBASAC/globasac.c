/*

AUTOR: Jesus Osvaldo Sandoval solis (Jezaah Oswaldosky)
Fecha: 5-aBRIL-2023
Proyecto: GLOBASC
RESUMEN: El programa GLOBASC(GLOsario BASico C) es un Glosario Basico de definicion de constantes, enumeracion logica, 
entre otrostipos de instrucciones basicas en lenguaje C, para facilitar a los desarrolladores y programares a como codificar...
El programa consta de un menu basico de lo que se desea impementar.... 

*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void presentacion(){
	printf("-----------------------------------------------------------------------------\n");
	printf("------------***---*-------***---*****-----**-----****---****-----------------\n");
	printf("-----------*---*--*------*---*--*----*---*--*---*----*-*----*----------------\n");
	printf("-----------*------*------*---*--*****---*----*--*------*---------------------\n");
	printf("-----------*-***--*------*---*--*---*---******----***--*---------------------\n");
	printf("-----------*---*--*------*---*--*----*--*----*--*----*-*----*----------------\n");
	printf("------------***---*****---***---*****---*----*---****---****-----------------\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("---------------------------  Desarrollado por -------------------------------\n");
	printf("--------------------------- Jezaah Oswaldosky -------------------------------\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("----------------------------PRESIONE UNA TECLA-------------------------------\n");
	printf("------------------------------PRESS ANY KEY----------------------------------\n");
	return 0; 
}
void erase(int tipo){
	if(tipo == 1){
		system("pause");
		system("cls");
	}
	else if(tipo == 2){
		system("cls");
	}
	else{
		printf("Error de borrado... \n\a");
	}
	return 0; 
}
void menu(){
	printf("\t\t\t\t\t\tGLOBASC V.0.0.1\n\a\n");
	printf("1.Tipos de datos\n2.Identificadores Basicos\n3.Como declarar constantes en C\n");
	printf("4.Como asignar variables\n5.Operadores Aritmeticos\n6.Operadores Simplificados\n");
	printf("7.Operadores de incrementos y decremento\n8.Operadores relacionales\n");
	printf("9.Operaciones Logicas\n10.Salir");
	
}
void loading(){
	int k; 
	for(k=0;k<15;k++){
		printf("\n\n\n\n\n\n\n\t\t\t\t\t\tLOADING |");
		system("cls");
		Sleep(10);
				
		printf("\n\n\n\n\n\n\n\t\t\t\t\t\tLOADING /");
		system("cls");
		Sleep(10);
		
		printf("\n\n\n\n\n\n\n\t\t\t\t\t\tLOADING -");
		system("cls");
		Sleep(10);
		
		printf("\n\n\n\n\n\n\n\t\t\t\t\t\tLOADING \\");
		system("cls");
		Sleep(10);
		
		printf("%d\n\n\n\n\n\n\n\t\t\t\t\t\tLOADING -",k);
		system("cls");
		Sleep(10);
	}
}



int main(){
	/*----------------------PRESENTACION-------------------*/
	system("title GLOBASC_V0.1");
	presentacion();
	erase(1);
	loading();
	erase(2);
	/*-----------------------------------------------------*/
	/*-----------------------VARIABLES---------------------*/
	int opcion; 
	
	while(1){
	/*----------------------MENU Y CAPTURA DE INFORMACION--*/
		erase(2);
		menu();
		fflush(stdin);
		scanf("%d",&opcion);
		switch(opcion){
			case 1: 
				erase(2);
				printf("\t\t\t\t\tTIPOS DE DATOS\n\n");
				printf("----------------------------------------------------------------------\n");
				printf("||	Tipos de datos en C	||	Descripcion	||			Rango			||\n");
				printf("----------------------------------------------------------------------\n");
				printf("||			int			||	Enteros		||	-32768 a +32767			||\n");
				printf("||			float		||	Reales		||	3.4x10^-38 a 3.4x10^38  ||\n");
				printf("||			long		||	Enteros de 	||	-2147483648 a 2147483647||\n");
				printf("||						||largo alcance	||							||\n");
				printf("||			double		||	Reales de 	||	1.7x10^308 a 1.7x10^308	||\n");
				printf("||						||doble presicio||							||\n");
				printf("||			char		||	Caracter	||	Simbolos de abecedario,	||\n");
				printf("||						||				||	o especiales			||\n");
				printf("---------------------------------------------------------------------\n");
				erase(1);
			break; 
			case 2:
				erase(2);
				printf("\t\t\t\t\tIDENTIFICADORES Y PALABRAS RESERVADAS\n\n");
				printf("--------------------------------------------------------------\n");
				printf("||auto		do			goto		signed		unsigned	||\n");
				printf("||break		double 		if 			sezeof		void		||\n");
				printf("||case		else		int			static		volatile	||\n");
				printf("||char		enum		long		switch					||\n");
				printf("||const		extern		register	switch					||\n");
				printf("||continue	float		return		typedef					||\n");
				printf("||default	for			short		union					||\n");
				erase(1);
			break; 
			case 3: 
				erase(2);
				printf("\t\t\t\t\t\tDECLARACION DE CONSTANTES\n\n");
				printf("		const int nu1 = 20; 		/nu1 es una constante de tipo entero\n");
				printf("		const flaot re1 = 2.18; 	/re1 es una constante de tipo float o real\n");
				printf("		const char ca1 = 'f';		/ca1 es una constante de tipo caracter \n\n");
				printf("		#define nu1 20;				/nu es una constante de tipo entero\n");
				printf("		#define re1 2.28;			/re1 es una constante de tipo float o real\n");
				printf("		#define ca1 = 'F'			/ca1 es una constante de tipo caracter\n\n");
				printf("		enum{va0,va1,va2,va3};		/Definicion de varias variables\n");
				printf("\n\nNota:La ultima deficion es como si colocaramos:\n");
				printf("const int va0 = 0;\nconst int = va1 = 1;\nconst int va2 = 2;\nconst int va3 =4\n");
				
				erase(1);
			break;
			case 4: 
				erase(2);
				printf("\t\t\t\t\t\tVARIABLES\n\n");
				printf("");
				
				erase(1);
			break; 
			case 5:
				erase(2);
			 	printf("\t\t\t\t\t\tOperadores Aritmeticos\n\n");
			 	printf("--------------------------------------------------------------------------------------\n");
			 	printf("||	Operador Arit	||	Operacion	||		Ejemplo			||		Resultado		||\n");
			 	printf("--------------------------------------------------------------------------------------\n");
			 	printf("||		+			||	Suma		||	x = 4.5 + 3;		||		x = 7;			||\n");
			 	printf("||					||				||	v = 4.5 + 3;		||		v = 7.5;		||\n");
			 	printf("--------------------------------------------------------------------------------------\n");
			 	printf("||		-			||	Resta		||	x = 4.5 - 3;		||		x = 1;			||\n");
			 	printf("||					||				||	v = 4.5 - 3;		||		v = 1.5;		||\n");
			 	printf("--------------------------------------------------------------------------------------\n");
			 	printf("||		*			||Multiplicacion||	x = 4.5 * 3;		||		x = 12;			||\n");
			 	printf("||					||				||	v = 4.5 * 3;		||		v =	13.5;		||\n");
			 	printf("||					||				||	z = 4 * 3;			||		z = 12.0;		||\n");
			 	printf("--------------------------------------------------------------------------------------\n");
			 	printf("||		/			||	Division	||	x =  4 / 3;			||		x = 1;			||\n");
			 	printf("||					||				||	x = 4.0 / 3.0;		||		x = 1;			||\n");
			 	printf("||					||				||	x = 4/3;			||		x = 1.0;		||\n");
			 	printf("||					||				||	x = 4.0 / 3;		||		x = 1.33;		||\n");
			 	printf("||					||				||	x = (float)4/3;		||		x = 1.33;		||\n");
			 	printf("||					||				||	x = ((cloat)5+3)/6;	||		x = 1.33;		||\n");
			 	printf("--------------------------------------------------------------------------------------\n");
			 	printf("||		%			||	Modulo o	||	x = 15 % 2;			||		x = 1;			||\n");
			 	printf("||					|| resto de 	||	x = (15 % 2)/2;		||		x = 0.0;		||\n");
			 	printf("||					||	division	||x = ((float)(15%2)\2)	||		x = 0.5;		||\n");
			 	printf("--------------------------------------------------------------------------------------\n");
			 	
			 	erase(1);
			break; 
			case 6: 
				erase(2);
				printf("\t\t\t\t\t\tOperadores Aritmeticos Simplificados\n\n");
			 	printf("----------------------------------------------------------------------------------------------------------------------------------\n");
				printf("||	Operador Aritmetico	||		Forma Simplificada		||		Ejemplo		||		Equivalencia		||		Resultador		||\n");
				printf("----------------------------------------------------------------------------------------------------------------------------------\n");
				printf("||			+			||			+=					||		x = 6;		||		x = 6;				||		x = 6;			||\n");
				printf("||						||								||		y = 4;		||		y = 4;				||		y = 4;			||\n");
				printf("||						||								||		x += 5;		||		x = x + 5;			||		x = 11;			||\n");
				printf("||						||								||		x += y		||		x = x + y;			||		x = 15;			||\n");
				printf("----------------------------------------------------------------------------------------------------------------------------------\n");
				printf("||			-			||			-=					||		x = 10;		||		x = 10;				||		x = 10;			||\n");
				printf("||						||								||		y = 5;		||		y = 5;				||		y = 5;			||\n");
				printf("||						||								||		x -= 3;		||		x = x - 3;			||		x = 7;			||\n");
				printf("||						||								||		x -= y;		||		x = x-y;			||		x = 5;			||\n");
				printf("----------------------------------------------------------------------------------------------------------------------------------\n");
				printf("||			*			||			*=					||		x = 5;		||		x = 5;				||		x = 5;			||\n");
				printf("||						||								||		y = 3;		||		y = 3;				||		y = 3;			||\n");
				printf("||						||								||		x *= 4;		||		x = x * 4;			||		x = 20;			||\n");
				printf("||						||								||		x *= y;		||		x = x * y;			||		x = 15;			||\n");
				printf("----------------------------------------------------------------------------------------------------------------------------------\n");
				printf("||			/			||			/=					||		x = 25;		||		x = 25;				||		x = 25;			||\n");
				printf("||						||								||		y = 3;		||		y = 3;				||		y = 3;			||\n");
				printf("||						||								||		x /= 3;		||		x = x / 3;			||		x = 8;			||\n");
				printf("||						||								||		x /= y;		||		x = x / y;			||		x = 8;			||\n");
				printf("----------------------------------------------------------------------------------------------------------------------------------\n");
				printf("||			%			||			%=					||		x = 20;		||		x = 20;				||		x = 20;			||\n");
				printf("||						||								||		y = 3;		||		y = 3;				||		y = 3;			||\n");
				printf("||						||								||		x %= 12		||		x = x % 12			||		x = 8;			||\n");
				printf("||						||								||		x % y;		||		x = x % y;			||		x = 2;			||\n");
				printf("----------------------------------------------------------------------------------------------------------------------------------\n");
				
				erase(1);
			break; 
			case 7: 
				erase(2);
				printf("\t\t\t\t\t\tOperadores de Incremento y Decremento\n\n");
				printf("------------------------------------------------------------------------------------------\n");
				printf("||	Operador	||		Operacion		||		Ejemplo:		||		Resultado		||\n");
				printf("------------------------------------------------------------------------------------------\n");
				printf("||		++		||		Incremento		||		x = 7;			||			x = 7;		||\n");
				printf("||				||						||		y = x++;		||			y = 7;		||\n");
				printf("||				||						||						||			x = 8;		||\n");
				printf("||				||						||						||						||\n");
				printf("||				||						||		x = 7;			||			x = 7;		||\n");
				printf("||				||						||		y = ++x;		||			y = 8;		||\n");
				printf("||				||						||						||			x = 8;		||\n");
				printf("------------------------------------------------------------------------------------------\n");
				printf("||		--		||		Decremento		||		x = 6;			||			x = 6;		||\n");
				printf("||				||						||		y = x--;		||			y = 6;		||\n");
				printf("||				||						||						||			x = 5;		||\n");
				printf("||				||						||						||						||\n");
				printf("||				||						||		x = 6;			||			x = 6;		||\n");
				printf("||				||						||		y = --x;		||			y = 5;		||\n");
				printf("||				||						||						||			x = 5;		||\n");
				printf("------------------------------------------------------------------------------------------\n");
				
				erase(1);
			break; 
			case 8: 
				erase(2);
				printf("\t\t\t\t\t\tExpresiones relacionales\n\n");
				printf("----------------------------------------------------------------------------------------------------------\n");
				printf("||	Operacion Relacional	||		Operacion		||		Ejemplo:			||		Resultado		||\n");
				printf("----------------------------------------------------------------------------------------------------------\n");
				printf("||			==				||		Igual que		||		res = 'h'=='m';		||		res = 0;		||\n");
				printf("||							||						||		res = 'h'=='h';		||		res = 1;		||\n");
				printf("----------------------------------------------------------------------------------------------------------\n");
				printf("||			!=				||		Diferente que	||		res = 'h'!='m';		||		res = 1;		||\n");
				printf("||							||						||		res = 'h'!='h';		||		res = 0;		||\n");
				printf("----------------------------------------------------------------------------------------------------------\n");
				printf("||			<				||		Menor que 		||		res = 21 < 32;		||		res = 1;		||\n");
				printf("||							||						||		res = 33 < 21;		||		res = 0;		||\n");
				printf("----------------------------------------------------------------------------------------------------------\n");
				printf("||			>				||		Mayor que		||		res = 33 > 21;		||		res = 1;		||\n");
				printf("||							||						||		res = 21 > 33;		||		res = 0;		||\n");
				printf("----------------------------------------------------------------------------------------------------------\n");
				printf("||			<=				||	Menor o igual que	||		res = 23 <=	33;		||		res = 1;		||\n");
				printf("||							||						||		res = 23 <= 23;		||		res = 1;		||\n");
				printf("||							||						||		res = 32 <= 23;		||		res = 0;		||\n");
				printf("----------------------------------------------------------------------------------------------------------\n");
				printf("||			>=				||	Mayor o igual que	||		res = 32 >= 23;		||		res = 1;		||\n");
				printf("||							||						||		res = 23 >= 23;		||		res = 1;		||\n");
				printf("||							||						||		res = 23 >= 16;		||		res = 0;		||\n");
				printf("----------------------------------------------------------------------------------------------------------\n");

				erase(1);
			break; 
			case 9: 
				erase(2);
				printf("\t\t\t\t\t\tOperadores Logicos\n\n");
				printf("----------------------------------------------------------------------------------------------\n");
				printf("||	Operador Logico		||	Operacion	||			Ejemplo				||		Resultado	||\n");
				printf("----------------------------------------------------------------------------------------------\n");
				printf("||			!			||	Negacion	||	x = (! (7 < 15));			||		x = 0;		||\n");
				printf("||						||		(NOT)	||	y = (!0);					||		x = 1;		||\n");
				printf("----------------------------------------------------------------------------------------------\n");
				printf("||			&&			||	Conjuncion	||	x = (35 > 20) && (20 <= 23);||		x = 1;		||\n");
				printf("||						||		(AND)	||	x = 0 && 1;					||		x = 0;		||\n");
				printf("----------------------------------------------------------------------------------------------\n");
				printf("||			||			||	Disyuncion	||	x = (35 > 20) || (20 <= 18);||		x = 1;		||\n");
				printf("||						|		(OR)	||	x = 0 || 1;					||		x = 1;		||\n");
				printf("----------------------------------------------------------------------------------------------\n\n\n");
				
				printf("\t\t\t\t\t\tTabla de Verdad de los Operadores Logicos\n\n");
				printf("----------------------------------------------------------\n");
				printf("||	P	||	Q	||	!P	||	!Q	||	P&&Q	||	P||Q	||\n");
				printf("||	1	||	1	||	0	||	0	||	  1		||	  1		||\n");
				printf("||	1	||	0	||	0	||	1	||	  0		||	  1		||\n");
				printf("||	0	||	1	||	1	||	0	||	  0		||	  1		||\n");
				printf("||	0	||	0	||	1	||	1	||	  0		||	  0		||\n");
				printf("----------------------------------------------------------\n");
				
				erase(1);
			break; 
			case 10: 
				erase(2);
				system("exit");
			break; 
			default: 
				printf("Esa opcion no se encuentra disponible!!!....\n");
				erase(2);
			break; 
		}
	}
	return 0; 	
}
