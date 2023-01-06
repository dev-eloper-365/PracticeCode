// Write a program to find out the max number from given 10 elements of array 
#include<stdio.h>

int main() {
    int x,z,row,col,matA[2][2]={1,2,3,4},matB[2][3]={5,6,7,8,9,10};
    int result[2][3]={0};
    int size_matA=sizeof(matA)/sizeof(matA[0]),size_matB=sizeof(matB)/sizeof(matB[0]);

    for(row=1;row<=2;row++)
    {
        for(col=1;col<=3;col++)
        {
            for(x=0,z=0;x<2,z<3;x++,z++)
            {
                result[row-1][col-1] += matA[row-1][x] * matB[z][col-1];
            }
        }
    }

    for(row=1;row<=2;row++)
    {
        for(col=1;col<=3;col++)
        {
            printf("%d\t",result[row-1][col-1]);
        }
        printf("\n");
    }

}