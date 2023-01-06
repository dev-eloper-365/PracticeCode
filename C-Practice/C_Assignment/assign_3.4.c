#include<stdio.h>

int main(){

    int choice,height,base,radius,length,breadth,area;
    printf("Enter which area of shape u want to find from below : \n1. Triangle\n2. Rectangle \n3.Circle");
    printf("\nEnter ur choice : ");
    scanf("%d",&choice);                                            //Input

    //Algo and Output

    switch(choice)
    {
        case 1 : 
            printf("Enter height of triangle: ");
            scanf("%d",&height);
            printf("Enter base length of triangle: ");
            scanf("%d",&base);
            area = 0.5*base*height;
            printf("Required area of triangle is : %d sq. units", area);
            break;

        case 2 :
            printf("Enter length of rectangle: ");
            scanf("%d",&length);
            printf("Enter Breadth of rectangle: ");
            scanf("%d",&breadth);
            area = length*breadth;
            printf("Required area of rectangle is : %d sq. units", area);
            break;

        case 3 :
            printf("Enter radius of circle: ");
            scanf("%d",&radius);
            area = 3.14*radius*radius;
            printf("Required area of Circle is : %d sq. units", area);
            break;
    }
    return 0;
}