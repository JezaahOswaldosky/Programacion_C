/*Write a program that deliberataly maes the follow mistakes.. 
--Prints a floating-point numbers using the %d conversion 
--Prints an integer using the %f conversion 
--Prints a character using the %d conversion*/ 

#include<stdio.h>

#define letter 'a'
#define float_num 6.876

int main(){

	printf("%d\n",letter);
	printf("%f\n",float_num);
	printf("%d\n",float_num);

	return 0; 

}