#include<stdio.h>

int main(){
    int row,col;
    char i = 'A';

    for(row=1;row<=5;row++)
    {
        i='A';
        for(col=1;col<=row;col++)
        {
            printf("%c",i);
            i++;
            
        }
        printf("\n");
    }
}