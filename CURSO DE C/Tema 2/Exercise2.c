/*WRITE A PROGRAM TO CALCULATE THE VOLULE OF
 A SPHERE */
#include<stdio.h>

#define PI 3.141592

int main(){
	float r =0; 
	printf("Radio: \n");
	scanf("%f",&r);
	printf("\nVolumen: %f",(4/3)*PI*r*r);

	return 0; 
}
