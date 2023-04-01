/*PROGRAMA DE REGISTRO DE DATOS... EL PROGRAMA CAPTURA LA EDAD, NOMBRE, APELLIDOS Y 
TIPO DE SANGRE DEL INDIVIDUO Y SE LE PROPORCIONA UN NUMERO*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	system("title REGISTRO DE DATOS DE USUARIO");
	/*DATOS Y VARIABLES NECESARIAS... */
	char nombre[15], apellido_pat[15], apellido_mat[15], trabajo[30];
	int id=0, edad;
	/*================================*/
	
	
	/*==============BIENVENIDA... ==========*/
	printf("Bienvenido a nuestro sistema de registro de datos... \n");
	printf("Comencemos!!!\a\n");
	system("pause");
	system("cls");
	/*==============================*/
	/*===========CAPTURA DE DATOS.. */
	///CAPTURA DEL NOMBRE... 
	for(;;){
		id += 1; 
		
	printf("Nombre: ");
	gets(nombre);
	system("cls");
	printf("Apellido paterno: ");
	gets(apellido_pat);
	system("cls");
	printf("Apellido materno: ");
	gets(apellido_mat);
	system("cls"); 
	printf("Edad:");
	fflush(stdin);
	scanf("%d",&edad);
	
		////Verificar informacion capturada... 
	printf("Nombre: %s %s %s \n",nombre, apellido_pat, apellido_mat);
	system("pause");
	system("cls");
	printf("El registro se realizo con exito!!!\n");
	printf("|\tid\t|\tApellido Paterno\t|\tApellido Materno \t|\tNombre\t|\tEdad\t| \n");
	printf("|\t%d\t|\t%s\t\t|\t\t%s\t\t|\t%s\t|\t%d\t|\n",id,apellido_pat,apellido_mat,nombre,edad);
	system("pause");
	system("cls");
	fflush(stdin);
	}
	
}
