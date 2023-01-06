#include<stdio.h>

int main(){
	int no=5;

	
	printf("%d\n",factorial(no));
}

int factorial(int base)
{
	int result = base;
	factorial(base-1);
	result=(base*result);
	return result;
}