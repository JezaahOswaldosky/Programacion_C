#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define A 19
#define B -33


int main(int argc, char *argv[]) {
	
	printf("El seno de %d es: %f\n",A,sin(A));
	printf("El arcoseno de %d es: %f\n",A,asin(A));
	printf("El coseno de %d es: %f\n",A,cos(A));
	printf("El arcoseno de %d es: %f\n",A,acos(A));
	printf("La tangente de %d es: %f\n",A,tan(A));
	printf("El arcotangente de %d es: %f\n",A,atan(A));
	printf("El exponencial de %d es: %f\n",A,exp(A));
	printf("El valor absoluto de %d es: %f\n",A,fabs(A));
	printf("El residuo de %d y %d es: %f\n",A,B,fmod(A,B));
	printf("El logaritmo de %d es: %f\n",A,log(A));
	printf("El logaritmo base 10 de %d es: %f\n",A,log10(A));
	printf("La potencia de %d elevado a %d es: %f\n",B,A,pow(B,B));
	printf("El La raiz cuadrada de %d es: %f\n",A,sqrt(A));
	
	return 0;
}
