#include<stdio.h>

int main(){
    int num,rem=0,rev_num=0,i=1,chk_num;

    printf("Enter a num till u want palindromes: ");
    scanf("%d",&num);
    palindromes(num);
    
}

int palindromes(int num){
    
    for(int i=1;i<=num;i++){
       int chk_num = i;
       int rem=0;
       int rev_num=0;
        while(chk_num!=0)
        {
            rem = chk_num%10;
            rev_num = rev_num*10 + rem;
            chk_num = chk_num/10;

        }
        if(rev_num == i){
            printf("%d ",i);
         }
    }
}