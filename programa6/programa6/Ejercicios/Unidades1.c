/*****************************************************************
			Especificacion Preliminar

El programa convierte de Unidades del Sistema Ingles a Unidades de 
Sistema Internacional 

Programador: Jezaah Oswaldosky
Fecha: 12/4/2024

Unidades.c es un programa que permite transformar unidades del Sistema 
Ingles al Sistema Internacional y viceversa. 
El usuario seleccionara un menu que unidades quiere convertir, y despues
seleccionar la cantidad de dicha unidad a convertir. 

Las unidades disponibles son: millas-Km, galones-litros, inches-cm
ft-mts
*/
#include<stdio.h>
#include<stdlib.h>

char line[80];		//Un arreglo para soportadr todo en una linea 
int opc;
float  unit; 
char salida; 

int main(){
//El programa se repetira infinitamente, hasta que el cliente lo dess
while(1){
//Imnprimir menu
	printf("Bienvenido a nuestro sistema para transformar unidades \n");
	printf("1.Millas a Kilometros \n2.Galones a Litros \n3.Pulgadas a Centimetros \n4.Pies a Metros\n");
	printf("5.Salir\n");	
	printf("Opcion: ");
	fgets(line, sizeof(line), stdin); 
	sscanf(line,"%d", &opc); 
	
	///Flujo para seleccionar cada opcion requerida
	if(opc == 1){
		while(1){
			//Limpiar pantalla
			printf("\t\tConvertidor de Millas a Kilometros");
			//Introducir datos para convertir
			printf("\nIntroduce la cantidad de millas: ");
			fgets(line, sizeof(line), stdin);
			sscanf(line, "%f %c", &unit, &salida); 

			///Evaluar si se desea salir 
			if(salida == 'q' || salida == 'Q'){
				system("clear");
				salida = ' ';
				break;
			}else
			///Imprimir valor... 
				printf("\n%f millas son %f kilometros\n", unit, unit*1.609);
		}
	}else if(opc == 2){
		while(1){
		//limpiar pantalla 
			printf("\t\tConvertidor de galones a litros");
			//Introducimos datos para convertir 
			printf("\nIntroduce cantidad de galones: ");
			fgets(line, sizeof(line), stdin); 
			sscanf(line,"%f %c", &unit, &salida); 
			
			///Evaluamos si existe la posibilidad de salir
			if(salida == 'q' || salida == 'Q'){
				system("clear");
				salida = ' ';
				break;
			}else
			//Imprimir valor 
				printf("\n%f galones son %f litros\n", unit, unit*3.78541);
		}
	}else if(opc == 3){
		while(1){
		//Limpiar pantalla
			printf("\t\tConvertidor de pulgadas a centimetros");
		//Introducoir datos para convertir
			printf("\nIntroduce cantidad de pulgadas: ");
			fgets(line, sizeof(line), stdin);
			sscanf(line, "%f %c", &unit, &salida);

		//Evaluar si se desea regresar al menu principal 
		if(salida == 'q' || salida == 'Q'){
			system("clear");
			salida = ' ';
			break; 
		}else 
		//Imprimir valor 
			printf("\n%f pulgadas son %f centimetros\n", unit, unit*2.54); 
		}
	}else if(opc == 4){
		while(1){
		//Limpiar pantalla 
			printf("\t\tConvertidor de pies a metros");
		//Introcuri datos para convertir 
			printf("\nIntroduce cantidad de pies: "); 
			fgets(line, sizeof(line), stdin);
			sscanf(line,"%f %c", &unit, &salida);
		
		//Evaluar si se desea regresar al menu principal 
		if(salida  == 'q' || salida == 'Q'){
			system("clear");
			salida = ' ';
			break; 
		}else 
		//Imprimir valor 
			printf("\n%f pies son %f metros\n", unit, unit*0.3048);
		}
	}else if(opc == 5){
		system("clear");
		printf("\t\t\tMuchas gracias, vuelva pronto!!!");
		break; 
		system("exit");
	}else{
		printf("Esa opcion no se encuentra disponible\n");
	}

}

}
