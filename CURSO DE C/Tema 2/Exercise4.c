/*Write a program that converts kilometers per
 hour to miles per hour. 

miles = (0.6213712 kilometers)*/

#include<stdio.h>

int main(){
	float kilometer; 
	printf("Kilometers/hr: \n");
	scanf("%f",&kilometer);
	printf("\nMiles/hr: %f", 0.6213712*kilometer);

	 return 0; 
}