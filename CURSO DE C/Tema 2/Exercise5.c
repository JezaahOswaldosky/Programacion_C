/*Write a program that takes hours and minuts as 
input, and then outpuets the total numbers of minutes
(1 hour 30 minuts = 90 minuts) */

#include<stdio.h>

int main(){
	int min,hour; 
	float minutes_total; 

	printf("Hours Minutes: \n");
	scanf("%d %d",&hour, &min);

	minutes_total = min+(60*hour);

	printf("\n Minutes total: %f", minutes_total);

	return 0; 

}