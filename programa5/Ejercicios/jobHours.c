/*Un programa capaz de cuantificar las horas del empleado para 
recibir su sueldo, ademas de cuantificar horas extras*/
#include<stdio.h>
char line[10]; 
int horas;
float sueldoHoras;

int main(){
int horasRest;

printf("Introduzca cantidad de horas y sueldo/horas del empleado: \n");
fgets(line, sizeof(line), stdin);
sscanf(line, "%d %f", &horas, &sueldoHoras);

if(horas <= 40){
	printf("Sueldo del empleado es: $ %f", horas*sueldoHoras);
}else if(horas > 40){
	horasRest = horas - 40;
	printf("Sueldo del empleado es: $ %f", 40*sueldoHoras + horasRest*(sueldoHoras/2));

}else{
	printf("Ha ocurrido un error, volver a intentarlo!!!");
}

return 0; 
}
