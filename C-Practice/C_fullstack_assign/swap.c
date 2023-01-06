#include<stdio.h>

int main(){
    int a,b;

    printf("Enter a no : ");
    scanf("%d",&a);
    printf("Enter second no : ");
    scanf("%d",&b);


    a = a+b;//15=5+10
    
    b = a-b;//5=15-10
    a = a-b;//10=15-5
    printf("Values of a & b after swap are %d & %d",a,b);
}