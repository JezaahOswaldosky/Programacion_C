/*El siguiente programa utilizara la biblioteca string.h para contatenar 
palabras*/
#include<string.h>
#include<stdio.h>

int main(){
///Inicializamos las variables de caracteres deseadas 
char name[50];
char apellido1[10];
char apellido2[10];
char fullName[70];

strcpy(name, "Hector Manuel"); 
strcpy(apellido1, "Mendez");
strcpy(apellido2, "Solorzano"); 

//Concatenamos el nombre y apellido en fullName
strcat(fullName, name);
strcat(fullName, " "); 
strcat(fullName, apellido1);
strcat(fullName, " ");
strcat(fullName, apellido2);

//Imprimir el nombre completo del individuo
printf("El nombre completo es: %s", fullName); 

return 0; 

}
