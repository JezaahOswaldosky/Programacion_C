#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/*Crear un centro de compra de articulos que proporcione un ticket al usuario y el total de su compra, el sistema
tambien dejara eliminar articulos como tambien solo consultar su precio...*/

float  comprar(float articulo1, float articulo2){
	float resultado; 
	
	resultado = articulo1 - articulo2; 
	
	return resultado; 
}

float cancel_compra(float total, float articulo){
	int resultado; 
	
	resultado = total + articulo; 
	
	return resultado;
}

float ticket(){
	
}

void menu(){
	
	printf("1.Agua $14.00\n2.Arroz $24.00\n3.Sal $11.50\n4.Medicina $210.00 \n5.Frijo $45.50 \n");
	printf("6.Carne $124.50\n7.Pan $12.00\n8.Quitar articulo/Comprar Articulo\n9.Nuestras politicas\n10.Salir");
	
}

int main(){
	system("title Sistema de compra electronico");
	char nombre[40];
	int opcion; 
	float dinero; 
	float total; 
	bool compra = true; 
	

	printf("Introduzca el nombre del cliente: \n");
	gets(nombre);
	printf("\nCuanto dinero desea gastar ???\n");
	printf("$");
	fflush(stdin);
	scanf("%f",&dinero);
	if(dinero >= 1000){
		system("cls");
		printf("Lo sentimos, la cantidad de credito sobrepasa el limite que le corresponde... Favor de volver a formarse...");

	}
	else{
		if(compra == true){ 
			while(dinero <= 0){  
				system("cls"); 
				printf("Bienvenido %s, su credito es de $%f . \n\En el siguiente menu podra seleccionar los arcitulos para su compran\n\n", nombre,dinero);
				system("pause"); 
				system("cls");  
				printf("Nombre: %s \t\t Dinero: $%f\t\tEstatus: %s\n",nombre,dinero,estatus); 
				menu();	  
				switch(opcion){
					case 1: 
					break;
					case 2: 
					break; 
					case 3: 
					break; 
					case 4:
					break; 
					case 5: 
					break; 
					case 6: 
					break; 
					case 7: 
					break; 
					case 8: 
					break; 
					case 9: 
						system("cls");
						printf("Usted podra disponer de un credito maximo de hasta $1000.00 de compras, al querer una mayor");
						printf("\ncantidad de credito, no se le permitira y tendra que volverse a formar para adquirir nuestros\n");
						printf("productos.. Evitenos las molestias de hacerle perder su tiempo y humillarlo ante seguridad...n.n\n");
						system("pause");
					break; 
					case 10: 
						system("cls");
						printf("Gracias por comprar en nuestra tienda virtual... :D \n Que tenga un excelente dia... n/n");
						system("exit;");
					break; 	
				}
				//scanf("%d",);
			} 
			else if(compra == false){ 
				
			} 
		}  
	}  
		
} 
