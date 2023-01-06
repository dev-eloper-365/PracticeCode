#include<stdio.h>

int main(){
    int num;

    printf("Enter till u want summation of : ");
    scanf("%d",&num);
    num = (num*(num+1))/2;
    printf("Ans : %d",num);
}