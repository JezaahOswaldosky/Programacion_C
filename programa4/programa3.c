/*El presente programa trata de un sistema de quejas donde el usuario requiere 
introducir: correo, departamento a quejar, y queja mediante la biblioteca 
string.h, y que la queja tenga un maximo de 100 caracteres*/

#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
char correo[50]; 
char depa[50]; 
char queja[800]; 
int quejaSize;

//Pedimos y capturamos el correo del ajerador
printf("E-mail: ");
fgets(correo, sizeof(correo), stdin);

//Pedimos y capturamos el departamento a quejar
printf("\nDeprtamento de queja: ");
fgets(depa,sizeof(depa),stdin);

///Capturamos la queja
printf("\nQueja: \n"); 
fgets(queja,sizeof(queja), stdin); 

//Tamano de queja
quejaSize = strlen(queja); 

//Comparamos el tamano de la queja que no sea mayor a 100 letras
system("clear");
printf("%d\n", quejaSize); 
if(quejaSize >= 800){
printf("Queja supera el limite de caracteres, sea mas concizo...");
strcpy(queja, " ");
printf("%s", queja); 
system("pause");
system("clear");

}else{
printf("E-main: %s\n", correo);
printf("Departamento: %s\n", depa); 
printf("Queja: \n%s\n", queja);
}

printf("			Gracias por su sugerencia!!! "); 

return 0; 
}


