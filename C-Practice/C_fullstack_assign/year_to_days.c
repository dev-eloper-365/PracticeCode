#include<stdio.h>

int main(){

    char choice;  
    int year,days;

    printf("What do u want to convert year (y) or days (d) : ");
    scanf("%c",&choice);

    switch (choice)
    {
    case 'y':
        printf("Enter no of years :");
        scanf("%d",&year);
        days = year*365;
        printf("%d days",days);
        break;
        
    case 'd':
        printf("Enter no of days : ");
        scanf("%d",&days);
        year = days/365;
        printf("%d years",year);
        break;

    default:
        printf("Invalid Option");
    }
    

}