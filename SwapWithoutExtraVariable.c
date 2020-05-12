#include<stdio.h>

int main(){
	int a,b;
	printf("Enter two nunbers :\n");
	scanf("%d%d",&a,&b);
	printf("\nBefore swapping :\n");
	printf("%d %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter swapping :\n");
	printf("%d %d",a,b);
	return 0;
}
