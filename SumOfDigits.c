#include <stdio.h>

int digit(int num);

int main(){
	int num;
	printf("Enter any number : ");
	scanf("%d",&num);
	int result = digit(num);
	printf("\nThe sum of the digits of the number is : %d",result);
	return 0;
}

int digit(int num){
	if(num<=0){
		return 0;
	}
	else{
		int result = num%10;
		num/=10;
		return result + digit(num);	
	}
}
