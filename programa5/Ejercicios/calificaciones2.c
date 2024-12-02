/*Convertir calificacion de 0-100 a grado a-F*/
#include<stdio.h>

char line[4]; 
int cal; 

int main(){
printf("Introducir calificacion 0-100: "); 
fgets(line, sizeof(line), stdin); 
sscanf(line, "%d", &cal); 

if(cal >= 91 && cal <= 100){
	if(cal >= 91 && cal <= 93){
		printf("\nCalificacion: A-");
	}else if(cal >= 94 && cal <= 97){
		printf("\nCalificacion: A");
	}else if(cal >= 98 && cal <= 100){
		printf("\nCalifcacion: A+");
	}
}else if(cal >= 81 && cal <= 90){
	if(cal >= 81 && cal <= 83){
		printf("\nCalifcacion: B-");
	}else if(cal >= 84 && cal <= 87){
		printf("\nCalifcacion: B");
	}else if(cal >= 88 && cal <= 90){
		printf("\nCalificacion: B+");
	}
}else if(cal >= 71 && cal <= 80){
	if(cal >= 71 && cal <= 73){
		printf("\nCalificacion: C-");
	}else if(cal >= 74 && cal <= 77){
		printf("\nCalificacion: C");
	}else if(cal >= 78 && cal <= 80){
		printf("\nCalificacion: C+");
	}
}else if(cal >= 61 && cal <= 70){
	if(cal >= 61 && cal <= 63){
		printf("\nCalificacion: D-");
	}else if(cal >= 64 && cal <= 67){
		printf("\nCalifcacion: D");
	}else if(cal >= 68 && cal <= 70){
		printf("\nCalificacion: D+");
	}
}else if(cal >= 0 && cal <= 60){
	printf("\nCalificacion: F");
}else{
	printf("\nEsa calificacion no existe!!!");
}

return 0; 
}
