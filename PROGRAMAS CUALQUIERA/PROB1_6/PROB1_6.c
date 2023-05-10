#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define AUX(L1,L2,L3) ((L1+L2+L3)/2)
#define AREA(AUX1,L1,L2,L3) (sqrt((AUX1*(AUX1-L1)*(AUX1-L2)*(AUX1-L3))))
/*float AREA(float AUX,float L1, float L2, float L3){
	return (sqrt((AUX*(AUX-L1)*(AUX-L2)*(AUX-L3))));
} */

int main(){
	float L1,L2,L3; 
	printf("Introduzca valores de L1, L2 Y L3:\n");
	scanf("%f %f %f", &L1, &L2,&L3);
	
	printf("\nAUX: %f\n\a", AUX(L1,L2,L3));
	float aux; 
	aux= AUX(L1,L2,L3);
	if(aux >= L1 || aux >= L2 || aux >= L1){
	printf("Area: %f", AREA(aux,L1,L2,L3));
	}
	else{
		exit(EXIT_FAILURE);
	}
	return 0; 
}
