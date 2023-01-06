//Write a program to find out the factorial of given number using function. 
#include<stdio.h>

int fun(int x)
	{	
		if(x-1>0)
		{
				x=x*fun(x-1);
		}			
        return x;
	}
	
int main()
	{
        printf("%d",fun(5));
		return 0;
	}
