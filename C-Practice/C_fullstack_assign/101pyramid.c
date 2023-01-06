#include<stdio.h>

int main(){
    int row,col,i=1;

    for(row=1;row<=5;row++)
    {
        i=1;
        for(col=1;col<=row;col++)
        {
            if(i<0){
                i=1;
            }
            printf("%d",i);
            i--;
            
        }
        printf("\n");
    }
}