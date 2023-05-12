///ESTE PROGRAMA INTRODUCE UN PRODUCTO Y DESPUES REALIZA LA CUENTA DE TODO Y SI LE ALCANZA AL CLIENTE O NO..

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	///APLICAMOS UN POCO DE ESTILO AL PROGRAMA.. 
	system("title P1_9");
	system("color c");
	
	////Pedimos los precios del cliente... 
	int pruducts[20],valor_prod, total,i=0;
	char comprar ='y'; 
	int seguir_comprando = 1; 
	
	while(seguir_comprando == 1){
		system("cls");
		printf("1.Comprar 'Y'\n2.No Comprar'N'\n");
		fflush(stdin);
		gets(comprar);
		if(comprar == 'y' || comprar == 'Y'){
			scanf("%d",&valor_prod);
			pruducts[i] = valor_prod;
			i++;	
		}
		else if(comprar == 'n' || comprar == 'N'){
			system("cls");
			printf("Gracias por comprar..");
			system("pause");
			seguir_comprando = 0; 
		}
		else{
			printf("Esa opcion no se encuentra disponble..");
			system("pause");
		} 
	}
	for(i;i >0;i--){
		total = total + pruducts[i];
	}
	system("cls");
	printf("El total de tu compra es de: $%d.00",total);
	
	system("pause");
	return 0; 
}
