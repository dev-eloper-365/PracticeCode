//Write a program to sort the array of 5 elements. 
#include<stdio.h>

int main(){
    int arr[] = {121,-7,63,-2,730,1,999},buffer,small_num=0,prev_num,smallest_num=0;
    int size = (sizeof(arr)/sizeof(arr[1])),j;
    char choice;
    prev_num = arr[0];

    loop:
    printf("Do u want ascending order or descending order (A/D) : ");
    scanf("%c",&choice);

    for(int i=1;i<size;i++)
        {
            for(j=1;j<size;j++)
            {
                while((choice == 'a') ? arr[j-1]>arr[j] : arr[j-1]<arr[j])
                {
                    arr[j-1] = arr[j-1]+arr[j];//15=5+10
                    arr[j] = arr[j-1]-arr[j];
                    arr[j-1] = arr[j-1]-arr[j];
                }
            }
        }
    for (j = 0; j < (sizeof(arr)/sizeof(arr[1])); j++)
    {
        printf("%d ",arr[j]);
    }
}