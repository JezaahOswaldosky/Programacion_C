/**************************************************************
		Descripcion Preliminar 

El programa permite utilizar una matriz de 2 dimensiones para 
guardar conjuntos de palabras y desarrollar frases. 

Programador: Jezaah Oswaldosky 
Fecha: 12/07/2024

palabras.c es un programa que permite implementar una matriz de 
dos dimensiones para guardar conjuntos de palabras y letras. 
El programa  no cuenta con un orden especifico, y se ira escalando 
conforme se comprenda esta herramienta. 
***************************************************************/
#include<stdio.h>

int main(){
///Declaramos una matriz bidimensional para almacenar los nombres y 
//apellidos, 5 filas (5 personas) y 50 columnas (espacio para)
//Nombre y apellido 
char personas[5][50];

//Leer los nombres y apellidos 
for(int i = 0; i < 5; i++){
	printf("Introduce el nombre y apellido de la persona $d", i+1);
	fgets(personas[i], sizeof(personas[i]), stdin);
}

//Mostrar los nombresy apellidos 
for(int i = 0; i< 5; i++){
	printf("%s", personas[i]);
}

return 0; 
}
