//WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array
#include<stdio.h>

int main(){
    int row,col,matA[3][3]={1,2,3,4,5,6,7,8,9},matB[3][3]={1,2,3,4,5,6,7,8,9};
    int x,result[3][3]={0},size=sizeof(matA)/sizeof(matA[0]);
    char choice;

    printf("Enter any operation (+,-,*) : ");
    scanf("%c",&choice);
    
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            switch(choice){
            case '+':
                result[row][col] = matA[row][col] + matB[row][col];
                break;
            case '-':
                result[row][col] = matA[row][col] - matB[row][col];
                break;
            case '*':
                for(x=0;x<size;x++)
                {
                    result[row][col] += matA[row][x] * matB[x][col];
                }
                break;
            }
        }
    }
    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            printf("%d\t",result[row][col]);
        }
        printf("\n");
    }
}
