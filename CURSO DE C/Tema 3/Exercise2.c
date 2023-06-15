/*A professor generates letter grades using.. */

#include<stdio.h>


void note_conv(int note){
	if(note > 0 && note <=60){
		printf("F\n");
	}
	else if(note >= 61 && note <= 70){
		printf("D\n");
	}
	else if(note >= 71 && note <= 80){
		printf("C\n");
	}
	else if(note >= 81 && note <= 90){
		printf("B\n");
	}
	else if(note >= 91 && note <= 100){
		printf("A\n");
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