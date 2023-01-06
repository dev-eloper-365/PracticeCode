#include<stdio.h>

int main(){
    int num=55,base,rem,i;


    for(i=2;i<=num;i++)
    {
        if(i==2 || i==3 || i==5 || i==7)
        {
            goto first;
        }
        if(!((i % 2 == 0) || (i % 3 == 0) || (i % 5 == 0) || (i % 7 == 0)))
        {   goto first;
            first:
            printf("%d ",i);
        }
    } 
}