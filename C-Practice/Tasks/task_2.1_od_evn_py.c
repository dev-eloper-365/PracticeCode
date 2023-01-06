#include<stdio.h>

int main(){
    char choice;
    int row, col,n=1,size;

//Input
    printf("Enter o for odd or e for even : ");
    scanf("%c",&choice);
    printf("Enter no of rows of pyramid : ");
    scanf("%d",&size);


//Algo && Output
    for(row=1;row<=size;row++) //2;2<=6;2++
    {
        for(col=1;col<=row;col++) // 1;1<=2;1++
        { 
            if(choice == 'o')
            {
                    if( n%2 == 0 ){
                    n++;
                }
            }
            else if(choice == 'e'){
                if( n%2 != 0 ){
                    n++;
                }
            }
            
            printf("%d ",n);
            n++;
        }
        printf("\n");
    }
}