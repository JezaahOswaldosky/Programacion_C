/*Write a program that prints the perimeter of a rectangle given its hegiht and width. 

perimeter = 2*(width+height) */

#include<stdio.h>

int main(){
	float height,width;

	printf("Height and Width: \n");
	scanf("%f %f", &width,&height);

	printf("Perimeter: %f",2*(width+height));

	return 0; 
	
}