#include<stdio.h>
int main(){
    int num=1234,rem,rev_num=0,quo;

    rem = num;
    while (num!=0)
    {
        rem = num%10; 
		rev_num = 	rev_num*10 + rem;
		num=num/10; 
    }
    printf("%d",rev_num);
}