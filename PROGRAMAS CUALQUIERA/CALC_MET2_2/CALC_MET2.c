#include <stdio.h>
#include <stdlib.h>

int suma(int a,int b){		///Funcion de suma
	return a+b;
}

int  resta(int a,int b){
	return a-b;			///Funcion de resta
}

int  multiplicacion(int a,int b){
	return a*b;			////funcion de multiplicacion..
}

float division(int a, int b){
	a= (float)a;
	b= (float)b; 
	return (float)a/b;
}

void menu(){
	printf("1.Sumar\n2.Restar\n3.Multiplicar\n4.Dividir\n5.Salir");
}


int main(){
	
	int a,b, opcion;
	
	system("title CALC_MET2");		///Algo de estilo del titulo...
	system("color c");			///Algo de estilo con el color de las letras... 
	
	printf("Introduzca el primer numero: \n");		///Pedimos el primer numero al usuario... 
	fflush(stdin);
	scanf("%d",&a);
	
	printf("Introduzca el segundo numero: \n");		////Pedimos el segundo numero al usuario... 
	fflush(stdin);
	scanf("%d", &b);
	menu();			///Mostramos un menu al usuario... 
	fflush(stdin);
	scanf("%d",&opcion);
	
	if(opcion == 1 ){
		printf("%d + %d = %d\n",a,b,suma(a,b));
		system("pause");
	}
	else if(opcion == 2){
		printf("%d - %d = %d\n", a,b,resta(a,b));
		system("pause");
	}
	else if(opcion == 3){
		printf("%d x %d = %d\n",a,b,multiplicacion(a,b));
	}
	else if(opcion == 4){
		printf("%d / %d = %f\n",a,b,division(a,b));
	}
	else{
		exit(EXIT_FAILURE);
	}
	return 0; 
}
