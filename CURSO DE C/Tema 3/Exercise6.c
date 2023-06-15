/*Write a program that, given the number
 of hours an employee worjed and the hourly wage, computes 
 the emplyee;s weekly pay. count any hours over 40 as overtime
 at time and a half...  */
#include<stdio.h>

int main(){
	int hours; 

	printf("Hours worked: ");
	scanf("%d",&hours);

	if(hours >= 40 && hours <= 50){
		printf("You worked complete time.. \n");
	}
	else if(hours > 0 && hours <=39){
		printf("Your worked half time\n");
	}
	else if(hours >= 51){
		printf("Your worked more, and did extra time !!! ");
	}
	else{
		printf("Mamadas!!! ");
	}

	return 0; 
}