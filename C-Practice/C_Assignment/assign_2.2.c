#include<stdio.h>

int main(){
    float princ_amt, interest, time, result;
    
    //Input
    printf("Enter Principle Amount \t: ");
    scanf("%f",&princ_amt);
    printf("Enter Annual Rate of Interest \t: ");
    scanf("%f",&interest);
    printf("Enter time (in years) \t: ");
    scanf("%f",&time);
     
    //Algo

    result = princ_amt * (1 + interest*time);
    
    //Output
    printf("Simple Interest is : %.2f",result);
    return 0;
}