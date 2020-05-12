#include<stdio.h>

int isPrime(int num,int start);

int main(){
	int n;
	printf("Enter any number : ");
	scanf("%d",&n);
	if(isPrime(n,2) && n!=1){
		printf("%d is a prime number.",n)	;
	}
	else{
		printf("%d is a not prime number.",n)	;
	}
	return 0;
}

int isPrime(int num,int start){
	if(num%start == 0){
		return 0;
	}
	if(num <= 2){
		return 1;
	}
	if(start * start >=num){
		return 1;
	}
	return isPrime(num,start+1);
}
