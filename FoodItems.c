#include<stdio.h>

int main(){
	int choice;
	printf("\nEnter a random number : ");
	scanf("%d",&choice);
	switch(choice){
		case 1 : printf("\nFood item - Pizza\nPrice - Rs 200");break;
		case 2 : printf("\nFood item - Ice-Cream\nPrice - Rs 50");break;
		case 3 : printf("\nFood item - Burger\nPrice - Rs 100");break;
		case 4 : printf("\nFood item - Pasta\nPrice - Rs 120");break;
		case 5 : printf("\nFood item - MilkShake\nPrice - Rs 150");break;
		default : printf("\nOnly 5 items available, Sorry.");main();
	}
}
