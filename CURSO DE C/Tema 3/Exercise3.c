/*A professor generates letter grades using.. */

#include<stdio.h>


void note_conv(int note){
	if(note > 0 && note <=60){
		printf("F\n");
	}
	else if(note >= 61 && note <= 70){
		if(note >= 61 && note <= 63){
			printf("D-\n");		
		}
		else if(note >= 63 && note <= 67){
			printf("D\n");
		}
		else if(note >= 67 && note <= 69){
			printf("D+\n");
		}
		else{
			printf("try again... ");
		}
	}
	else if(note >= 71 && note <= 80){
		if(note >= 71 && note <= 73){
			printf("C-\n");		
		}
		else if(note >= 73 && note <= 77){
			printf("C\n");
		}
		else if(note >= 77 && note <= 79){
			printf("C+\n");
		}
		else{
			printf("try again... ");
		}
	}
	else if(note >= 81 && note <= 90){
		if(note >= 81 && note <= 83){
			printf("D-\n");		
		}
		else if(note >= 83 && note <= 87){
			printf("D\n");
		}
		else if(note >= 87 && note <= 89){
			printf("D+\n");
		}
		else{
			printf("try again... ");
		}

	}
	else if(note >= 91 && note <= 100){
		if(note >= 91 && note <= 93){
			printf("A-\n");		
		}
		else if(note >= 93 && note <= 97){
			printf("A\n");
		}
		else if(note >= 97 && note <= 99){
			printf("A+\n");
		}
		else{
			printf("try again... ");
		}
	}
	else{
		printf("Try again...");
	}
}

int main(){
	int note[10]; 
	int i;
	for(i =0; i <= 10; i++){
		printf("\nStudent note: ");
		scanf("%d",&note[i]);
	}
	for(i = 0; i<=10; i++){
		note_conv(note[i]);
	}
}