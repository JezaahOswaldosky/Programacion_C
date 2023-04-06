#include <stdio.h>
#include <stdlib.h>

void erase(int opcion){
	if(opcion == 1){
		system("pause");
		system("cls");
	}
	else if(opcion == 2){
		system("cls");
	}
	else if(opcion == 3){
		system("pause");
	}
	else{
		printf("La opcion no se encuentra disponible... ");
		exit(1);
	}
	return 0;
}

void loading(){
	int k; 
	for(k =0; k <= 15; k++){
		printf("\n\n\n\n\n\t\t\t\t\tLoading |");
		erase(2);
		printf("\n\n\n\n\n\t\t\t\t\tLoading /");
		erase(2);
		printf("\n\n\n\n\n\t\t\t\t\tLoading -");
		erase(2);
		printf("\n\n\n\n\n\t\t\t\t\tLoading |");
		erase(2);
		printf("\n\n\n\n\n\t\t\t\t\tLoading -");
		erase(2);
		printf("\n\n\n\n\n\t\t\t\t\tLoading \\");
		erase(2);
	}
	return 0; 
}

int main(){
	system("title Captura datos de empleado");
	printf("Bienvenido a nuestro sistema de captura de empleados... \n");
	erase(1);
	loading();
	erase(2);
	
	int id, j = 0;
	char nombre[15], apellido1[15], apellido2[15],domicilio[100],departamento[15],jefe_inm[40];
	/// ||	id	||	Nombre	||	Apellido 1	||	Apellido 2	||	Domicilio	||	Departamento	||	Jefe Inmediato	||	
	while(j < 5){
		printf("Nombre: \n");
		gets(nombre);
		printf("\nApellido Paterno:\n");
		gets(apellido1);
		printf("\nApellido Materni: \n");
		gets(apellido2);
		printf("\nDomicilio: \n");
		gets(domicilio);
		printf("\nDepartamento:\n");
		gets(departamento);
		printf("\nJefe inmediato: \n");
		gets(jefe_inm);
		
		erase(1);
		
		printf("La informacion se capturo con exito!!!\n");
		id = j;
		printf("||%d||%s||%s||%s||%s||%s||%s||\n",id,apellido1,apellido2,nombre,domicilio,departamento,jefe_inm);
		erase(3);
		
		j++;
	} 
	return 0; 
} 
