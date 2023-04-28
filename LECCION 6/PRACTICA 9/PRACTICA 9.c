#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(){
	FILE *fptr; 
	
	errno = 0;
	
	fptr = fopen("C:\\Users\\Maestria_Sesion\\Desktop\\CURSO DE C Y C++\\CURSO DE C\\LECCION 6\\PRACTICA 9\\file.txt","r");
	if(fptr == NULL){
		perror("Error");
		fprintf(stderr,"%s\n",strerror(errno));
		exit(EXIT_FAILURE);
	}
	
	fclose(fptr);
	
	return 0;
}
