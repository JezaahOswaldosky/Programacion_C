//Generar un generador de credito para que el cajero introduzca un nuevo cliente y el cliente pueda 
///realizar compras...

#include <stdio.h>
#include <windows.h>

int main(){

system("title Generador de compras");

//////En esta seccion el cajero podra seleccionar si anadir un cliente, comprar o salir de la aplicacion....
int op=0;
printf("1. Anadir cliente\n");
printf("2. Comprar\n");
printf("3. Salir\n");
scanf("%d",&op);
char nombre_cliente[100];
int dinero;

/*====================================*/
switch(op){
	////Introducirmos la informacion del cliente.... 
	case 1: 
		op =0;
		system("cls");
		printf("Nombre del cliente: \n");
		scanf("%s", nombre_cliente); 
		printf("Introduzca monto a comprar: \n"); 
		scanf("%d",&dinero);

		
		break; 
	/////
	case 2: 
		break; 
	case 3: 
		break ;
	default: 
		printf("Esa opcion no se encuentra disponible, intente de nuevo, de preferencia las opciones marcadas \n");
		break;
}	
}
