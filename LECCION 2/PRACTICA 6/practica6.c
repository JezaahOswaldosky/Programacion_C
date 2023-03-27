#include <stdio.h>
#include <stdlib.h>

void said_hello();

int main(){
	int i; 
	for(i = 0; i < 5; i++){
		say_hello();
	}
}

void say_hello(){
	static int num_calls =1; 
	
	printf("Hello numer %d\n", num_calls);
	num_calls++;
}
