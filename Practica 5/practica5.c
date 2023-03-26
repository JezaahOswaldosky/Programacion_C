#include <stdio.h>
#include <windows.h>

int main(){
	system("title Sentencia Switch");
	while(1){
		int num;
		printf("Introduzca un numero del 1-5: ");
		scanf("%d", &num);
		printf("\n");
	
		switch(num){
			case 1: 
				printf("%s","Uno \n");
				break;
			case 2: 
				printf("%s", "Dos \n'");
				break;
			case 3: 
				printf("%s", "Tres \n");
				break;
			case 4: 
				printf("%s", "Cuatro \n");
				break;
			case 5: 
				printf("Cinco \n");
				break;
			case 99: 
				goto salida;
				break;
			default:
				printf("%s", "Esa opcion no se encuentra disponible...\n");
		}
		system("pause");
		system("cls");
	}
	salida:
	system("exit");
}
