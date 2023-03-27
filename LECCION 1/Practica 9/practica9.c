//Generar un generador de credito para que el cajero introduzca un nuevo cliente y el cliente pueda 
///realizar compras...

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){

system("title Generador de compras");

//////En esta seccion el cajero podra seleccionar si anadir un cliente, comprar o salir de la aplicacion....
while(1){
	int op=0;
	printf("1. Anadir cliente\n");
	printf("2. Comprar\n");
	printf("3. Salir\n");
	scanf("%d",&op);
	char nombre_cliente[100];
	int dinero,op_compra;

/*====================================*/

	switch(op){
	////Introducirmos la informacion del cliente.... 
		case 1: 
			system("cls");
			printf("Introduzca el nombre del cliente: \n");
			fflush(stdin);
			fgets(nombre_cliente,sizeof(nombre_cliente), stdin);
			printf("Introduzca dinero a gastar: \n");
			fflush(stdin);
			scanf("%d",&dinero);
			system("cls");
			printf("Nombre: %s \nDinero:$ %d\n",nombre_cliente,dinero);
			system("pause");	
			system("cls");
			break;
	/////
		case 2: 
			while(dinero > 0){
				system("cls");
				printf("Cliente: %s \t\t\t\t\tDinero:$ %d \n\n",nombre_cliente,dinero);
				printf("1.Cigarrillos $49.00\n2.Cerveza $110.00\n3.Agua $25.00\n4.Patatas $15.00 \n");
				printf("5.Acerite $45.00\n6.Sopa instantanea $12.00\n7.Sal $25.00\n8.Tomate $32.00\n");
				printf("9.Cebolla $24.00\n10.Medicina $210.00\n11.Salir\n");
				fflush(stdin);
				scanf("%d",&op_compra); 
				if(op_compra == 11 || dinero < 12){ 
					system("cls");  
					break; 
				} 
				else if(op_compra == 1 && dinero >= 49){
					printf("\a");
					dinero = dinero - 49;  
					system("cls"); 
				}
				else if(op_compra == 2 && dinero >= 110){
					printf("\a");
					dinero = dinero - 110; 
					system("cls"); 
				}
				else if(op_compra == 3 && dinero >= 25){
					printf("\a");
					dinero = dinero - 25; 
					system("cls"); 
				}
				else if(op_compra == 4 && dinero >= 15){
					printf("\a");
					dinero = dinero - 15; 
					system("cls"); 
				}
				else if(op_compra == 5 && dinero >= 45){
					printf("\a");
					dinero = dinero - 45; 
					system("cls"); 
				}
				else if(op_compra == 6 && dinero >= 12){
					printf("\a");
					dinero = dinero - 12; 
					system("cls"); 
				}
				else if(op_compra == 7 && dinero >= 25){
					printf("\a");
					dinero = dinero - 25; 
					system("cls"); 
				}
				else if(op_compra == 8 && dinero >= 32){
					printf("\a");
					dinero = dinero - 32; 
					system("cls"); 
				}
				else if (op_compra == 9 && dinero >= 24){
					printf("\a");
					dinero = dinero - 24; 
					system("cls"); 
				}
				else if(op_compra == 10 && dinero >= 210){
					printf("\a");
					dinero = dinero - 210; 
					system("cls"); 
				} 
				else{
					printf("Esa opcion no se encuentra en nuestra tienda... \n \a");  
					system("pause"); 
					system("cls");
				}
			}
		break;  
	case 3: 
		printf("Gracias por visitarnos... :D Lo esperamos pronto... :D \n"); 

		system("pause"); 
		system("cls");
		
		break;
	default: 
		printf("Esa opcion no se encuentra disponible, intente de nuevo, de preferencia las opciones marcadas \n");
		break; 
	}
}
}
