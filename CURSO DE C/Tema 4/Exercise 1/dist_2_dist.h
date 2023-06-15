/*Write a program which convert kilometer to miles 
and m to fet */

#include<stdio.h>
#include<math.h>
#include<windows.h>

float dist_2_dist(int op, float value){
	float res; 
	if(op == 1){///kilometer to miles	
		res = value*0.062371;
	}
	else if(op == 2){///miles to kilometer
		res = value*1.60934;
	}
	else if(op == 3){///meter to feet
		res = value*3.28084;
	}
	else if(op == 4){///ft to meter
		res = value*0.3048;
	}
	else{
		printf("That option doesn't exist!!!\n");
		//system("Pause");
	}
	return res;
}