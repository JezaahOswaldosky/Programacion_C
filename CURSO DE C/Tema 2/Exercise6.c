/*Write a program that takes an integer as the 
numbers of minutes, and outputs the total hours and 
minutes (90 minuts = 1 hour 30 minutes )*/

#include<stdio.h>

int main(){
	printf("Minutes: \n");
	float hour; int minutes;  
	scanf("%d",&minutes);
	hour = minutes/60; 

	printf("Hours: %f", hour);

	return 0; 

}