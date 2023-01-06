#include<stdio.h>

int main(){
    int year;
    
    printf("Enter a Year for validation : ");
    scanf("%d",&year);                                                      //Input

    printf("Year is %s Leap year", (year % 4 == 0) ? "a" : "not a");         //Algo & Output
    return 0;
}