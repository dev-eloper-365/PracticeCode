#include<stdio.h>

int main(){

    int maths,phy,chem,history,english,total;
    float percentage;

    //Input
    printf("Enter your Physics marks : ");
    scanf("%d",&phy);
    printf("Enter your Maths marks : ");
    scanf("%d",&maths);
    printf("Enter your Chemistry marks : ");
    scanf("%d",&chem);
    printf("Enter your History marks : ");
    scanf("%d",&history);
    printf("Enter your English marks : ");
    scanf("%d",&english);

    //Algo
    total = maths+phy+chem+history+english;
    percentage = total/5; 
    
    //Conditional Statements
    if(percentage >= 75){
        printf("Distinction");
    }
    else if(percentage>=60 && percentage<75){
        printf("First Class");
    }
    else if(percentage>=50 && percentage<60){
        printf("Second Class");
    }
    else if(percentage>=35 && percentage<50){
        printf("Pass Class");
    }
    else{
        printf("You failed kiddo !");
    }



    return 0;

}