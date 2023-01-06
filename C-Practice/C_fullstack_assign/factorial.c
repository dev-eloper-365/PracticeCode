#include<stdio.h>

int main(){
    int i,num=1,prev_num=1,result=1;
    printf("Enter a num : ");
    scanf("%d",&i);

    for(num=1;num<=i;num++){
        result = num*prev_num;//result = 2*1
        prev_num = result;         //prev = 1
    }
    
    printf("%d",result);
}