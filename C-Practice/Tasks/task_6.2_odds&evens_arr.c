// Write a program to find out the max number from given 10 elements of array 
#include<stdio.h>

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,8,8,8};
    int size = (sizeof(arr)/sizeof(arr[1])),i,odds=size; 

    for(int i=0;i<size;i++)
        {
            if(arr[i]%2==0)
            {
                odds = odds-1;
            }
        }
        
    printf("NO of odds are : %d",odds);
    printf("\nNo of evens are : %d",size-odds);
}