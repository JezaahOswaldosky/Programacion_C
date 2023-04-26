#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>
#include <windows.h>


void loading(){
	int k; 
	for(k=0; k<20; k++){
		printf("Loading -");
		clear(1);
		printf("Loading \\");
		clear(1);
		printf("Loading |");
		clear(1);
		printf("Loading /");
		clear(1);
		printf("Loading -");
		clear(1);
		//printf("%d",k);
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
	else{
		printf("Error!!!");
	}
}

void intro(){
	printf("=======================================================================\n");
	printf("==++++++===+++++++===+========+++++++======++++++====+++++++====+++++++\n");
	printf("==+===========+======+========+============+=====+===+==========+======\n");
	printf("==++++========+======+========++++=========+=====+===+++========++++===\n");
	printf("==+===========+======+========+============++++++====+==========+======\n");
	printf("==+===========+======+========+============+===+=====+==========+======\n");
	printf("==+========+++++++===++++++===+++++++======+====+====++++++=====+======\n");
	printf("=======================================================================\n");
	printf("=======================================================================\n");
	printf("=======================================================================\n");
	printf("============================PRESS ANY==================================\n");
	printf("===============================KEY=====================================\n");
	printf("=======================================================================\n");
	printf("=======================================================================\n");

}

void texto1(){
	printf("Se puede conseguir la entrada y salida de datos a un archivo a traves \n");
	printf("del uso de la biblioteca de funciones; C no tiene palabras clave que  \n");
	printf("realicen las operaciones de E/S. La siguiente tabla da un breve resumen\n");
	printf("de las funciones que se pueden utilizar. Se debe incuir la biblioteca \n");
	printf(" <stdio.h>. Observe que la mayoria de las funciones comienzan con la \n");
	printf(" \"F\", esto es un vestigio del estandar C de Unix...\n\n");
}

void main(){
	////Titulo del programa...
	system("FILE_IO_GLOSSARY");
	////Funcion loading para una espera amigable... 
	loading();
	////Funcion para la introduccion... 
	intro();
	////Presionar cualquier cosa.. 
	while(!kbhit()){
	}
	clear(1);
	///
	texto1();
	printf("Nombre\t\t\tFuncion\n");
	printf("fopen()\t\t\tAbre un archivo\n");
	printf("fclose()\t\tCierra un archivo\n");
	printf("fgets()\t\t\tLee una cadena de un archivo\n");
	printf("fputs()\t\t\tEscribe una cadena en un archivo\n");
	printf("fseek()\t\t\tBusca un byte especifico en un archivo\n");
	printf("fprintf()\t\tEscribe una salida con formato en el archivo\n");
	printf("fscanf()\t\tLee una entrada con formato desde el archivo\n");
	printf("feof()\t\t\tDevuelve cierto si se llega al final del archivo\n");
	printf("ferror()\t\tDvuelve cierto si se produce un error\n");
	printf("rewind()\t\tColoca el localizador de posicion del archivo al principio del mismo\n");
	printf("remove()\t\tBorra un archivo\n");
	printf("fflush()\t\tVacia un archivo\n");
	system("pause");
	
	return 0; 
}
