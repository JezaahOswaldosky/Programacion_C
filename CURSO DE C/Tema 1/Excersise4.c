/*Write a program to print "HELLO" in a big block; 
each letter should have a heiht of seven characters
 and width of five characters */

#include<stdio.h>

void greatings(){
	printf("*     *    *****   *       *         ******\n");
	printf("*     *    *       *       *        *      *\n");
	printf("*     *    *       *       *        *      *\n");
	printf("*******    *****   *       *        *      *\n");
	printf("*******    *****   *       *        *      *\n");
	printf("*     *    *       *       *        *      *\n");
	printf("*     *    *       *       *        *      *\n");
	printf("*     *    *****   *****   *****     ******\n");
}

int  main(){
	greatings();

	return 0; 

}