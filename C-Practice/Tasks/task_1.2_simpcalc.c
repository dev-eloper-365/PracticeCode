#include<stdio.h>
int main(){
    char selection;
    do{
        char choice;
        int num1,num2;

        printf("Enter num1 : ");
        scanf("%d",&num1);
        printf("Enter num2 : ");
        scanf("%d",&num2);

        printf("Enter ur choice: ");
        scanf("%s", &choice);
    
        float calc = num2/num1;

        switch (choice){
            case '+': printf("Additon of 5 and 12 is : %d",num1+num2);
            break;
            case '-': printf("Substraction of 5 and 12 is : %d",num1-num2);
            break;
            case '*': printf("Multiplication of 5 and 12 is : %d",num1*num2);
            break;
            case '/': printf("Divison of 5 and 12 is : %.2f",calc);
            break; 
            default:
            printf("Only Valid options are +,-,*,/");
        }

    printf("\nDo u wanna continue y/n : ");
    scanf("%s",&selection);
    } while(selection == 'y');
    
    return 0; 
}