#include<stdio.h>

int main()
{
    int choice,i,j,k,p;
    printf("Enter for how long u want fibonacci to run : ");
    scanf("%d",&choice);                    //input
    printf("0 ");

    //algo
    for(i=1,j=0,k=1;i<=choice;i++)
    {
        p=j+k;                              //addition of two nos
        printf("%d ",p);                    //print
        j=k;                                //reassignment of values  
        k=p;                                  
    }
    return 0;
} 