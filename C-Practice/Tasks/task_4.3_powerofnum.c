#include<stdio.h>

int main(){
    int num,base,rem,i;
    printf("Enter a num : ");
    scanf("%d",&num);
    printf("Enter base of entered num : ");
    scanf("%d",&base);

    for(i=0;num!=1;i++)
    {
        rem = num/base;
        num = rem;
    }
    printf("%d",i);
}