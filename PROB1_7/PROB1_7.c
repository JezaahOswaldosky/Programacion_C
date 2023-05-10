/*El siguiente programa implementa coordenadas entre dos puntos... */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//#define dist(x0,x1,y0,y1) (sqrt(((y1-y0)*(y1-y0))+((x1-x0)*(x1-x0))))
float dist(float x0, float x1, float y0, float y1){
	return (sqrt(((y1-y0)*(y1-y0))+((x1-x0)*(x1-x0))));
}

int main(){
	
	float y0,y1,x0,x1;
	printf("Introduzca coordenadas de (X0,Y0) y (X1,Y1):\n");
	//fflush(stdin);
	scanf("%f %f %f %f",x0,y0,x1,x1);
	
	printf("La distancia entre el punto(%f , %f) y el punto(%f , %f) es de: \n\a ",x0,y0,x1,y1, dist(x0,x1,y0,y1));
	return 0; 
	
}
