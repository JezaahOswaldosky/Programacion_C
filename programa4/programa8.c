/*El programa ejecuta multiples entradas mediante un line para 
realizar el area de un triangulo... */

#include<stdio.h>

//Variables 
char line[100]; 
float altura, base, area;

//programa principal
int main(){
printf("Introduzca la base y la altura deseada: \n"); 
//Capturamos la informacion mediante una linea 
fgets(line, sizeof(line), stdin); 
sscanf(line, "%f %f", &base, &altura); 

///Obtenermos el area del triangulo 
area = (base*altura)/2; 

//Imprimir resultado 
printf("\nEl area es: %f", area);

return 0; 

}
