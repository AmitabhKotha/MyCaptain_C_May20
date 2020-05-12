#include<stdio.h>

int LCM(int ,int);
int main(){
	int n1,n2;
	printf("Enter any two numbers :\n");
	scanf("%d%d",&n1,&n2);
	int lcm = LCM(n1,n2);
	printf("The LCM of %d and %d is : %d",n1,n2,lcm);
	return 0;
}
int LCM(int a,int b){
	static int num=1;
	if(num%a==0 && num%b==0){
		return num;
	}
	else{
		num++;
		LCM(a,b);
	}
}

