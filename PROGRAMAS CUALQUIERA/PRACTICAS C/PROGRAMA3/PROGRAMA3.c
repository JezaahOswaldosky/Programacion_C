#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char mensaje[500],mensaje_crypt[500];

int main(){
	////Capturamos el mensaje para cifrar...
	printf("Mensaje: ");
	fgets(mensaje,sizeof(mensaje),stdin);
	mensaje[strlen(mensaje)-1]='\0';
	
	int i = strlen(mensaje);
	int j=0; 
	
	for(i;i>0;i--){
		mensaje_crypt[i-1]=mensaje[j];
		///printf("%d %d\n",i,j);
		j+=1;	
	}
	
	printf("Mensaje Cifrado: %s\n",mensaje_crypt);
	
	printf("Mensaje Original: %s\a",mensaje);
	return 0; 
	
}
