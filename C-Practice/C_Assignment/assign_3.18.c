//Write program to make an addition of two number using pointer
#include<stdio.h>

int main(){
	int firstNum,secondNum;
	
	int *ptr_firstNum=&firstNum,*ptr_secondNum=&secondNum;

	//ptr_firstNum ==> Location of FirstNum
	//ptr_secondNum ==> Location of SecondNum

	printf("Enter a Num : ");
	scanf("%d",&firstNum);
	printf("Enter another Num : ");
	scanf("%d",&secondNum);

	printf("%d",*ptr_firstNum+*ptr_secondNum);

}