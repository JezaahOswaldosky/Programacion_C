#include<stdio.h>
#include<windows.h>

int main(){
	int score; 
	system("Title Protocolo de edad...");
	printF("Cual es tu edad???\n");
	scanf("%d",&score);
	if(score > 18){
		printf("Tu eres mayor de edad, puedes pasar... ");
	}
	else{
		printf("Tu no eres mayor de edad... Deberias ir a la fosa de los pequenines...");
	}
} 

