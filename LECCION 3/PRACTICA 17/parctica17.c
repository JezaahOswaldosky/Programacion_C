#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	int a[5]={22,33,44,55,66};
	int *ptr = NULL; 
	
	ptr = a; 
	printf("%d %x\n", *ptr, ptr);
	ptr++;
	printf("%d %x\n", *ptr, ptr);
	ptr++;
	printf("%d %x\n", *ptr, ptr);
	ptr++;
	printf("%d %x\n", *ptr, ptr);
	ptr++;
	printf("%d %x\n", *ptr, ptr);
	ptr++;
}
