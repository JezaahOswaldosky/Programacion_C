/*Write a code who helpt you to compile and see the documents to 
compile.. */
#include<stdio.h>
#include<windows.h>
#include<stdbool.h>

int main(){

	char comando[100];
	bool loop = true; 
	while(loop){
		printf("Write command: ");
		fgets(comando, sizeof(comando), stdin);
		comando[strlen(comando-1)] = '\0';
		system(comando);
	}

	return 0; 

}