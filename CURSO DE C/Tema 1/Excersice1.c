/*The excersice write to print our name, SS and date BOD*/

#include<stdio.h>
#include<string.h>

int main(){
	char name[50] ="Jesus Osvaldo Sandoval \0";
	int day=19,month=07,year=1993, SS=199678432; 

	printf("Name: %s\n",name);
	printf("BOD:%d / %d / %d\n\a",month, day, year);
	printf("SS: %d",SS);

	return 0; 

}
