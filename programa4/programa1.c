/*El Siguiente programa utilizara la biblioteca string.h para guardar palabras en  
una variable*/

#include<string.h>
#include<stdio.h>

int main(){
//Declaramos variables nombre y apellido mediante strcpy
char nombre[30]; 
char apellido[30]; 

strcpy(nombre, "Josmar Joshuo"); 
strcpy(apellido, "Hernandez Quintanilla"); 

//Imprimir la variable  nombre y apellido 
printf("El nombre capturado es: %s %s",nombre, apellido); 

return 0; 

}
