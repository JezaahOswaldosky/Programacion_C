#include <stdio.h>
#include <stdlib.h>


int main(){
	char str1[6]="Hello";
	char str2[]="world";
	printf("str1 es: %s,str2 es: %s\n",str1,str2);
	
	char str3[6]={'h','e','l','l','o','\0'};
	char str4[]={'w','o','r','l','d','\0'};
	printf("str3 es:%s, str4 es: %s",str3,str4);
	
	return 0; 
}
