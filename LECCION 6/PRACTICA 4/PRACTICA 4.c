#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fptr; 
	int arr[10];
	int x[10];
	int k ; 
	
	///Generar un arreglo de numeros.. 
	for(k =0; k< 10; k++){
		arr[k] = k; 
	}
	
	///Escribimos en el archivo deseado... 
	fptr = fopen("datafile.txt", "wb");
	fwrite(arr, sizeof(arr[0]), sizeof(arr)/sizeof(arr[0]), fptr);
	fclose(fptr);
	system("pause");
	
	////Leer el arreglo del archivo... 
	fptr = fopen("datafile.txt", "rb");
	fread(x, sizeof(arr[0]),sizeof(arr)/sizeof(arr[0]), fptr);
	fclose(fptr); 
	
	///Imprimir el arreglo... 
	for(k=0;k<10;k++){
		printf("%d", x[k]);
	}
	
	system("pause");
	return 0;
	}
