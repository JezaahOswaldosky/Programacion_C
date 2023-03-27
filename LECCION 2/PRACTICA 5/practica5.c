#include <stdio.h>
#include <windows.h>

/*ESTE PROGRAMA EXPLICA LAS VARIABLES LOCALES Y GLOBALES...*/

int global1 = 0;

int main(){
	int local1,local2; 
	
	local1= 5;
	local2= 10; 
	global1=local1+local2; 
	
	printf("%d",global1);
	
	return 0;
	
}
