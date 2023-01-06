#include<stdio.h>


int main(){
    int year;
    printf("Enter any year : ");
    scanf("%d",&year);
    printf(((year/100)*100 == year) ? "It's a century"  : "It's not a century");
    printf((year%4==0) ? " & it's a leap year" : " & it's not a leap year");
}