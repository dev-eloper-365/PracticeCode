#include<stdio.h>

int main(){
    int row,col;
    char i = 'A';

    for(row=1;row<=5;row++)
    {
        for(col=1;col<=row;col++,i++)
        {
            printf("%c",i); 
        }
        printf("\n");
    }
}