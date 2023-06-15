/*Write a program who converter inches to centemer and viceverse... */
#include<stdio.h>
#include<math.h>
#include<windows.h>

float in_cm(int op, float value){
	float res; 
	if(op == 1){	///in a centimetros
		res = value*2.64;
	}	
	else if(op == 2){
		res = value*0.393701;
	}
	else{
		printf("That option doesn't exist!!!\n");
		//system("Pause");
	}
	return res; 
}