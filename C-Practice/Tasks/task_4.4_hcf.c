#include<stdio.h>

int main(){
    int num1,num2,smaller_num,hcf;
    printf("Enter a num : ");
    scanf("%d",&num1);
    printf("Enter second num : ");
    scanf("%d",&num2);

    smaller_num = (num1>num2) ? num2 : num1;

    for(int i=1;i<=smaller_num;i++)
    {
        if(num1%i == 0 && num2%i == 0)
        {
            hcf = i;
        }
    } 
    printf("%d",hcf);
}