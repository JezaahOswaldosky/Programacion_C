#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void print_pattern(){
	printf("     XXXX\n");
	printf("    XX\n");
	printf("  XXX\n");
	printf("XXX\n");
	printf(" XXX\n");
	printf("   XX\n");
	printf("    XXXX\n");
	
}

int main(){
	system("title PROB1_11");
	system("color f");
	
	print_pattern();
	
	return 0; 
}

