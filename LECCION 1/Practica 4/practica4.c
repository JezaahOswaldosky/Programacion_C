#include<stdio.h>
#include<windows.h>

int main(){
	int puntuacion = 89;
	
	while(1){
		system("cls");
		
		printf("Introduzca su calificacion...\n");
		scanf("%d",&puntuacion);
	
		if(puntuacion >= 90){
			printf("%s","Arriba del 10% \n");
		}
		else if(puntuacion >=80){
			printf("%s","Arriba del 20% \n");
		}
		else if(puntuacion > 75){
			printf("%s","Tu pasaste... \n");
		}
		else{
			printf("%s","Tu no pasaste... Lo siento.. Esfuerzate para la proxima...\n");
		}
		system("pause");
	}	
} 
