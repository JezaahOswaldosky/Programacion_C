/*Write a program to onver gallons to liters...*/
#include<stdio.h>
#include<math.h>
#include<windows.h>

float  gallon_liters(int op, float value){
	float res; 
	if(op == 1){	///Gallons to Liters
		res = value*3.78541;
	}
	else if(op ==  2){		///Litters to gallons
		res = value*0.2641;
	}
	else{
		printf("That option doesn't exist!!!\n");
		//system("Pause");

	}

	return res; 
}
/*Notes: The user input the an option and value, and give you the 
answer.. */