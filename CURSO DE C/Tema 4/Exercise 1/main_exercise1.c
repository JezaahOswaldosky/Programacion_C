/*Write a program to convert English units to metris 
i.e. miles to kilometer, gallons to liters, etc.. Include specification 
and code design...*/
#include<stdio.h>

#include"gallon_liters.h"
#include"in_cm.h" 
#include"dist_2_dist.h"

int main(){
	float value = 3; 
		printf("%f \n",gallon_liters(2,value));
		printf("%f \n",in_cm(3,value));
		printf("%f \n",dist_2_dist(2,value));

	return 0; 
}