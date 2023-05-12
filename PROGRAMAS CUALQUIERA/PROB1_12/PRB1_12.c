#include <stdio.h>
#include <stdlib.h>

int main(){
	system("title PROB1_12");
	system("color c");
	
	int dist, min, seg,cent;
	float TSI, VMS; 
	
	//Capturamos la distancia del corredor..
	printf("Distancia: \n");
	scanf("%d", &dist);
	//Capturamos los munutos implementados
	printf("Minutos: \n");
	scanf("%d",&seg);
	///Capturamos los segundos
	printf("Segundos: \n");
	scanf("%d", &seg);
	///Capturamos las centecimas de segundo.. 
	printf("Centecimas: \n");
	scanf("%d", &cent);
	
	///Realizamos la aritmetica necesaria... 
	TSI = (min*40)+seg+(cent/100);
	
	VMS = dist/TSI;
	
	///Mostramos el resultado al usuario.. 
	system("cls");
	printf("El corredo corre a: %f km/h",VMS);
	
	
}
