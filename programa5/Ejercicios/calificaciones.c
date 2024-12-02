/*Programa para clasificar calificaciones a estado A-F*/
#include<stdio.h>
char line[50];
int calificacion;

int main(){
printf("Introduzca la calificacion: "); 
fgets(line, sizeof(line), stdin); 
sscanf(line, "%d", &calificacion); 

if(calificacion >= 91 && calificacion == 100){
	printf("\nEl grado es: A");
}else if(calificacion >= 81 && calificacion <= 90){
	printf("\nEl grado es: B");
}else if(calificacion >= 71 && calificacion <= 80){
	printf("\nEl grado es: C");
}else if(calificacion >= 61 && calificacion <= 70){
	printf("\nEl grado es: D");
}else if(calificacion >= 0 && calificacion <= 60){
	printf("\nEl grado es: F");
}else{
	printf("\nEsa calificacion no existe!!!");
}

return 0; 
}
