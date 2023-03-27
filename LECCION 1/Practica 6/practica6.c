#include<stdio.h>
#include<windows.h>
int main(){
	
	int num;
	system("title Manejo del Switch vacio");

	while(1){
		printf("Salir introduzca 99\n");
		printf("Introduzca un numero:							\n");
		scanf("%d",&num);
	
		switch(num){
		
			case 1: 
			case 2: 
			case 3: 
				printf("Puede ser uno, dos o el tres...\n");
				break;
			case 4: 
			case 5: 
			case 6: 
				printf("Puedes ser el cuatro, cinco o el seis...\n");
				break;
			case 99:
				goto salida;
			default: 
				printf("%s","Es mayor que seis... \n");
			break; 
		}
		system("pause");
		system("cls");
	}
	salida: 
	system("pause");
}
