#include<stdio.h>

int main(){
    int num;

    printf("Enter a no : ");
    scanf("%d",&num);                                                                                                                  //Input
    printf("Number is %s Prime no.",(((num % 2 == 0) || (num % 3 == 0) || (num % 5 == 0) || (num % 7 == 0))) ? "not a" : "a" );        //Algo & Output
    return 0;
}

/* 
//Doubt Code
#include<stdio.h>

int main(){
    int num;
    char result[10];

    printf("Enter a no : ");
    scanf("%d",&num);
    result[10] = (((num % 2 == 0) || (num % 3 == 0) || (num % 5 == 0) || (num % 7 == 0))) ? "not a" : "a";
    printf("Number is %s Prime no.",result);      //Algo & Output
}
*/


/*
//Doubt Code 2
#include<stdio.h>

int main(){
    int num;

    printf("Enter a no : ");
    scanf("%d",&num);                                                                                                                  //Input
    printf("Number is %s Prime no.", ((num % 2) || (num % 3) || (num % 5) || (num % 7) == 0) ? "not a" : "a" );                         //Algo & Output
    return 0;
}
*/