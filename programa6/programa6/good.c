/*****************************************************************
Invitado   ---  Un simple juego de invitado 

Usuario: 
	Invitado 

	Un numero aleatorio es escogio entre el 1 y el 100. 
	El jugado da un conjunto muestras y debe escoger  un numero 
	entre esos. 
	Si el jugado escoge el numero correcto, el gana. 
	Por otro lado, el conjunto se ajustara para reflejar al 
	jugador y el juego continuara.

Restricciones: 
	
	El numero aleatorio es generado por la funcion rand()%100. 
	Por que el rand() regresa un numero entre 0 <= rand() <= maxInt
	esto favorece a unos pocos numeros. 

*/
#include<stdio.h>
#include<stdlib.h>

int number_to_guess;	//Numero aleatorio para el invitado
int low_limit;		//Limite inferior del rango del jugador 
int high_limit;		//Limite superior del rango del jugador 
int guess_count; 	//Numero de intentos realizados  por el jugador 
int player_number;	//Numero de jugadores 
char line[80];		//Entrada para una sola linea 

int main(){
while(1){
	///No son numero aleatorios puros, revisar restricciones
	number_to_guess = rand()%100+1; 

	//Inicializamos la variable para un bucle infinito. 
	low_limit = 0;
	high_limit = 100; 
	guess_count = 0; 

	while(1){
	//Mencionamos  al jugador el conjunto y que escoja 
		printf("Conjunto %d - %d\n", low_limit, high_limit);
		printf("Valor[%d]? ", guess_count);

		++guess_count; 

		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d", &player_number);

	//Mencionamos si es correcto el numero del invitado
		if(player_number == number_to_guess)
			break;

	//Ajustamos el conjunto para la siguiente movida 
		if(player_number < number_to_guess)
			low_limit = player_number; 

		else
			high_limit = player_number; 
	}

	printf("Bingo\n \a\a\a\a\a\a\a");

}

}



