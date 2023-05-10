#include <stdio.h>
#include <stdlib.h>

#define PI 3.141519

#define area(r,alt) (2*PI*r*alt)
#define volum(r,alt) (PI*r*r*alt)
/////Este programa determina el area y el volumen introduciendo el radio y el diametro.. 

int main(){
	float radio, altura;
	
	printf("Radio: \n");
	fflush(stdin);
	scanf("%f",&radio);
	printf("Altura: \n");
	fflush(stdin);
	scanf("%f",&altura);
	
	printf("\nEl Ares es: %f y el Volumen es %f\n",area(radio,altura),volum(radio,altura ));
	
	return 0;
}
