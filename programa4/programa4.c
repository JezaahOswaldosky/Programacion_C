/*el programa es un registro de datos como nombre, apellidos, RFC, CURP y 
mas informacion de un ciudadano normal*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
char nombre[35]; 
char apellido[35];
char CURP[15]; 
int RFC; 

printf("Introduzca el nombre: ");
fgets(nombre, sizeof(nombre), stdin); 
nombre[strlen(nombre)-1] = '\0'; 

printf("\nIntroduzca los apellidos: "); 
fgets(apellido, sizeof(apellido), stdin); 
apellido[strlen(apellido)-1] = '\0'; 

printf("\nIntroduce la CURP: "); 
fgets(CURP, sizeof(CURP), stdin); 
CURP[strlen(CURP)-1] = '\0'; 

printf("\nIntroduzca la RFC: "); 
scanf("%d", &RFC); 

//Imprimir valores capturados y agradecer al cliente. 
system("pause");
system("clear");
printf("Nombre Completo: %s\n", strcat(nombre,apellido));
printf("CURP: %s", CURP);
printf("RFC: %s", RFC); 

printf("\n\n\t\t\t Gracias por sus datos!!!"); 

return 0; 
}

