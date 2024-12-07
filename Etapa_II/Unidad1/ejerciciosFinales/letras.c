/*************************************************
		Descripcion Preliminar

Programa que captura un parrafo de palabras y clasificara
la las vocales solamente.

Programador: Jezaah Oswaldosky
fecha: 12/06/2024

letras.c es un programa que permite al usuario itroducir 
un parrafo para clasificar unicamente las vocales. 
Notas: el programa primero recibe el parrafo y despues 
se guardan las vocales en una matriz. 
**************************************************/
#include<stdio.h>
#include<string.h>

char line[500]; 

char vocals[500]; 

int main(){
char parrafo[500];

///Pedimos al usuario introducir un parrafo cualquiera 
printf("Introducir un parrafo: \n"); 
fgets(line, sizeof(line), stdin); 
line[strlen(line)-1] = '\0';
//Comenzamos la busqueda de vocales 
int letras; 
letras =  strlen(line); 
int q=-1; 
int cntVocals = 0; 
for(int i = 0; i <= letras; i++){
	//Clasificar las vocaleas que se encuentran en el parrafo
	if(line[i] == 'a'){
		vocals[q++]  = 'a';
		cntVocals++;
	}else if(line[i] == 'e'){
		vocals[q++] = 'e';
		cntVocals++;
	}else if(line[i] == 'i'){
		vocals[q++] = 'i';
		cntVocals++;
	}else if(line[i] == 'o'){
		vocals[q++] = 'o';
		cntVocals++;
	}else if(line[i] == 'u'){
		vocals[q++] = 'u';
		cntVocals++; 
	}

}

printf("\n Las vocales encontradas son: \n %s", vocals);
printf("\n La cantidad de vocales: %d", cntVocals);

return 0; 

}
