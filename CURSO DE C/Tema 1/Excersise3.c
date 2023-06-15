/*Write a program to compute the area and
perimeter of a rectangle with a width of
three inches and a heig of fice inches.
What changes must be made to the program so
that it works for a rectabngle with a width
of 6.8 inches and length of 2.3 inches? 
*/

#include<stdio.h>

#define width 6.8
#define length 2.3 

int main(){

	printf("The perimeter of rectangule is: %f\n",(2*width)+(2*length));

	return 0; 
}
