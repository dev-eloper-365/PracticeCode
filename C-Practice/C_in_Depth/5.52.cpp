//Write a program to find palindromes of four digits
#include<iostream>
using namespace std;

int main(){
  for(int i=1000;i<=10000;i++){
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
            cout<<i<<"\t";
         }
    }
  }