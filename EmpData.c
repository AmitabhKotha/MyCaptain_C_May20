#include<stdio.h>
#include<stdlib.h>

struct employee{
	unsigned char ename[25];
	unsigned int age,sal;
	unsigned long int phno;
};

int main(){
	struct employee e[20];
	int opt;
	int i,n=-1;
	while(1){
		printf("\n\n+===========================MENU===========================+\n");
		printf("\n1.Add employee\n2.Print Employees\n3.Exit\n");
		printf("\nEnter any option:\t");
		scanf("%d",&opt);
		switch(opt){
			case 1: n++;
					if(n<20){
						printf("\nEnter employee name : ");
						scanf("%s",e[n].ename);
						printf("\nEnter employee age : ");
						scanf("%d",&e[n].age);
						printf("\nEnter employee phone number : ");
						scanf("%ld",&e[n].phno);
						printf("\nEnter employee salary : ");
						scanf("%d",&e[n].sal);
					}
					else{
						printf("\nMemory full.Cannot add more employees.");
					}
					break;
			case 2: printf("\n\n");
					if(n>=0){
						printf("Name\t\tAge\t\tPhno\t\tSalary\n");
						for(i=0;i<=n;i++){
							printf("%s\t\t%d\t\t%ld\t%d\n",e[i].ename,e[i].age,e[i].phno,e[i].sal);
						}
					}
					else{
						printf("\nNo employees to show.\n");
					}
					break;
			case 3:exit(0);
			default:printf("\nEnter correct option.\n");
		}
	}
	return 0;
}
