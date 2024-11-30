/*El presente programa captura el nombre, seguridad social y fecha de nacimiento..*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

/*Declaramos las variables necesarias*/
char nombre[50];
int diaNac, mesNac, anioNac; 
int SS_number ; 

///Solicitamos el nombre y apellidos del usuario 
printf("Nombre completo: \n"); 
fgets(nombre, sizeof(nombre), stdin);


///Solicitamos el dia de nacimiento
printf("\n Dia de nacimiento: \n"); 
scanf("%d",&diaNac); 

///Solicitamos el mes de nacimiento en formato de 0-12 
printf("\n Mes de nacimiento (1-12): \n"); 
scanf("%d", &mesNac); 

///Solicitamos el anio de nacimiento 
printf("\n Anio de nacimiento: \n"); 
scanf("%d", &anioNac); 

///Solicitamos el numero de seguro social
printf("\n Numero de SS: \n"); 
scanf("%d", &SS_number);

system("clear");

///Imprimir los datos del postulante 
printf("Nombre del cliente: %s", nombre); 
printf("\nFecha de nacimiento: %d / %d / %d", diaNac, mesNac, anioNac);
printf("\nNumero de seguro social (SS): %d", SS_number); 


return 0; 

}
