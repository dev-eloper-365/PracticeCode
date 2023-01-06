//Write a program of structure for five employee that provides the following information print and display empno, empname, address and age
#include<stdio.h>
#include<string.h>
struct type{
	int empno;
	char name[50];
	char addr[50];
	int age;
};

int main(){

	struct type emp1;
	int ID;
	for(int i=1;i<=1;i++)
	{
		printf("Enter emp%d Name : ",i);
		gets(emp1.name);
		printf("Enter emp%d Address : ",i);
		gets(emp1.addr);
		printf("Enter emp%d ID : ",i);
		scanf("%d",&emp1.empno);
   		printf("Enter emp%d Age : ",i);
		scanf("%d",&emp1.age);
	}

	printf("\nEmployee ID : %d",emp1.empno);
	printf("\nEmployee Name : ");
	puts(emp1.name);
	printf("Employee Address : ");
	puts(emp1.addr);
	printf("Employee Age : %d",emp1.age);

	return 0;
}