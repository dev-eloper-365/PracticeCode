#include<stdio.h>

int main(){
    int row,col,i=1,py_row=1,py_col;
    
    for(row=1;row<=5;row++,py_row++)
    {
        for(col=5;col>=row;col--)
        {
            printf(" ");
        }
        if(py_row%2 == 0)
        {
            py_row++;
        }
        for (py_col=1;py_col<=py_row;py_col++)
            {
                printf("*");
            }
        printf("\n");
    }
}