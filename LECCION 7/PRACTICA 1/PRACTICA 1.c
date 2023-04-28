#include <stdio.h>
#include <stdlib.h>

///En esta seccion se definen formulas y demas pendejadas... 
#define PI 3.1415
#define AREA(r) (PI*r*r)

///Nuestro programa... 
int main(){
	float radio =2; 
	printf("%3.2f\n",PI);
	printf("El area es %5.2f\n",AREA(radio));
	printf("Area con radio + 1: %5.2f\n",AREA(radio+1));
	
	return 0;
}
