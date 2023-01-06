//Write a program to sort the numbers using pointer and functions
#include<stdio.h>

int main(){

    int arr[] = {121,-7,63,-2,730,1,999},buffer,small_num=0,prev_num,smallest_num=0;
    int size = (sizeof(arr)/sizeof(arr[1])),j;
    char choice;
    prev_num = arr[0];

    for(int i=1;i<size;i++)
        {
            for(j=1;j<size;j++)
            {
            	int *ptr_arr=&arr[j],*ptr_prevArr=&arr[j-1];
                while((choice == 'a') ? *ptr_prevArr>*ptr_arr : *ptr_prevArr<*ptr_arr)
                {
                    *ptr_prevArr += *ptr_arr;//15=5+10
                    *ptr_arr = *ptr_prevArr-*ptr_arr;
                    *ptr_prevArr = *ptr_prevArr-*ptr_arr;
                }
            }
        }

    for (j=0;j < (sizeof(arr)/sizeof(arr[1])); j++)
    {
    	int *ptr_result=&arr[j];
        printf("%d ",*ptr_result);
    }
}