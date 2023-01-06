#include<stdio.h>

int main(){
    int num,check;
    printf("[+] Enter a num : ");
    scanf("%d",&num);

    printf("\nFactors of %d are : ",num);
   
    for(check = 1;check<=num;check++)
    {
        if (num%check == 0){
            printf("%d ",check);
        }
    }
}