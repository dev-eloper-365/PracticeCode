//Write a program to print the Fibonacci series using function
#include<stdio.h>

int main(){
    int till;
    printf("Enter range of fibonnaci : ");
    scanf("%d",&till);
    fib(0,1,till);
}

int fib(int num1,int num2,int till){
    int prev_num,result;
    
    prev_num = num2;
    result = num1;
    result = prev_num + result;
    if(result>till){
     //break;
     return 0;
    }
    printf("%d, ",result);
    fib(prev_num,result,till);
}