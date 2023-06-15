/*A leap year is any year divisible by 4, unless
 the year is divisible by 100, but not 400. Write a program to tell 
 if a  year is a leap year*/

#include<stdio.h>


void leap_year(int year){
		if(year%4 == 0){
			printf("%d is leap!!\n", year);
		}
		else{
			printf("%d isn't leap\n", year);
		}
}

int exit_code(int year, int loop){
	if(year == 121212){
		loop = 0;
	}
	else{
		leap_year(year);
	}
	return loop; 
}

int main(){
	int year, loop=1;

	while(loop){

		printf("\nPut Year: \n");
		scanf("%d", &year);
		loop = exit_code(year,loop);
	}

}