#include<stdio.h>

int main(){
    int num=3244,rem,i,result,last,first;
    
    for(i=0;num!=0;i++){
        rem = num%10;
        num = num/10;
        if(i==0)
        {
            first = rem;
        }
        last = rem;
    }
    result = first + last;
    printf("%d",result);
}