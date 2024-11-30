/*Calcular el volcumen de una esfera*/
#include<stdio.h>
char line[10];
float r;  

const float PI = 3.141516; 

int main(){
printf("Introduce el radio de la esfera: "); 
fgets(line, sizeof(line), stdin); 
sscanf(line,"%f", &r); 

printf("El volumen de una esfera es: %f", ((4./3)*PI*r*r*r)); 

return 0; 

}
