#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	int x = 5; 
	int y; 
	int *p = NULL; 
	p = &x; 
	
	y = *p +2; 
	y += *p; 
	*p = y; 
	(*p)++;
	
	printf("p es puntero del valor %d", *p);
}
