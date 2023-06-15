/*Given an amount of money (less than $1.00) compute the number of quarters,
 dimes, nickels, and pennies needed*/

#include<stdio.h>
#include<windows.h>
#include<stdbool.h>

void conv_quad(int money){
	printf("$ %d .00 is %d Quaters",money, money*4);
}
void conv_dimes(int money){
	printf("$ %d .00 is %d Dimes",money, money*10);
}
void conv_nicks(int money){
	printf("$ %d .00 is %dNickels",money, money*20);
}
void conv_pennies(int money){
	printf("$ %d .00 is %d Pennies",money, money*100);
}





int main(){
	int money, op; 
	bool loop = true;  
	while(loop){
		printf("\nMoney: \n");
		scanf("%d",&money);
		printf("1. Quarters\n2.Dimes\n3.Nickels\n4.Pennies\n5.Exit\n");
		scanf("%d", &op);

		switch(op){
			case 1:
				conv_quad(money);  
			break; 
			case 2: 
				conv_dimes(money);
			break; 
			case 3:
				conv_nicks(money);
			break; 
			case 4: 
				conv_pennies(money);
			break; 
			case 5: 
				loop = false; 
			break;
			default: 
				loop = false;
			break;
		break; 
		}
	}
	system("pause");

	return 0; 

}