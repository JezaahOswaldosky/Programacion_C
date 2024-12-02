/*Programa que determina si un anio es bisiesto o no*/
#include<stdio.h>

char line[10]; 
int anio;

int main(){
printf("Introduce el anio: ");
fgets(line, sizeof(line), stdin); 
sscanf(line, "%d", &anio); 

//Determinar si es bisiesto mediante condiciones 
if( (anio%4) == 0){
	printf("\nEl anio es bisiesto!!!");
}else{
	printf("\nEl anio no es bisiesto!!!");
}

return 0; 

}
