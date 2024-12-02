/*El presente programa determina la cantidad de coras, veintes, 
decimos y pennies de un valor inrtoducido*/
#include<stdio.h>
#define CORA 4
#define TWENTIES 5
#define CENTIES 10
#define PENNIES 100

char line[10];
int dolar; 

int main(){
while(1){
printf("Introducir dolares a cambiar: ");
fgets(line, sizeof(line), stdin); 
sscanf(line, "%d", &dolar); 

printf("La cantidad $%d.00 son: \n", dolar); 
printf("%d Coras\n", dolar*CORA);
printf("%d Twenties\n", dolar*TWENTIES);
printf("%d Centies\n", dolar*CENTIES);
printf("%d Pennies\n", dolar*PENNIES);
}

return 0; 

} 

