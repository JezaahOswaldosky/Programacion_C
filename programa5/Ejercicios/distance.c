/*Programa que determina la distancia de 2 puntos mediante la soiguiente
formula d = sqrt((y2-y1)^2 + (x2-x1)^2)   */
#include<stdio.h>
#include<math.h>

char line[48];
int y2, py1, x1, x2;
double distancia;

int main(){
printf("Introducir coordenadas p1(x1,y1): "); 
fgets(line, sizeof(line), stdin);
sscanf(line, "%d %d", &x1, &py1);

printf("\nIntroducir coordenadas p2(x2,y2): ");
fgets(line, sizeof(line), stdin); 
sscanf(line, "%d %d", &x2, &y2); 

distancia = sqrt( (y2-py1)*(y2-py1) + (x2-x1)*(x2-x1) );

printf("\nLa distancia entre p1 y p2 es: %.2f", distancia); 

return 0; 
}
