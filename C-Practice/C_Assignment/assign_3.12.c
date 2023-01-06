//Write a program to find out the Max number from given Matrix 
#include<stdio.h>

int main(){
    int mat[3][3];
    int size=sizeof(mat)/sizeof(mat[0]),row,col;
    int max=mat[0][0];

    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            scanf("%d",&mat[row][col]);
        }
    }
    
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            if(mat[row][col]>max){
                max=mat[row][col];
            }
        }
    }
    printf("Max from matrix is %d",max);
}