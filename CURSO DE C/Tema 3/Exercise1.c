/*Write a program to find the square of the distance between 
two points. (for a more advances problem, find the actual distance. 
this problem involves using the standard sqrt(). Use your help system 
to find out more about how to use this function)*/

#include<stdio.h>
#include<math.h>

int main(){
	int point1[2], point2[2];
	float dist; 

	printf("Point 1: \n");
	scanf("%d %d", &point1[0], &point1[1]);
	printf("Point 2: \n");
	scanf("%d %d", &point2[0], &point2[1]);

	dist = sqrt((point2[1]-point1[1])^2+(point2[0]-point1[0])^2);

	printf("Distance: %f", dist);

	return 0; 
}