/*El siguiente programa implementa coordenadas entre dos puntos... */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float dist(int x0,int y0, int x1,int y1){
	return (sqrt(((y1-y0)*(y1-y0))+((x1-x0)*(x1-x0))));
}

int main(){
	int x0,x1,y0,y1;
	printf("Introduzca las coordenadas de (x0,y0) y (x1,y1):\n");
	scanf("%d %d %d %d", &x0,&y0,&x1,&y1);
	
	printf("La distancia entre (%d,%d) y (%d,%d) es: %f\a",x0,y0,x1,y1, dist(x0,y0,x1,y1));
	
	return 0; 
}

