// / Write a Program of find the element of given position from the array 
#include<stdio.h>

int main(){
    int arr[50] = {11,22,33,44,55,66,77,88,99};
    int choice;
    printf("Enter position of element : ");
    scanf("%d",&choice);
    printf("%d",arr[choice]);
}