//Count no of digits of number entered
#include<iostream>
using namespace std;

int main(){
  int i=0,rem=0;
  int chk_num,digit;
  
  cout<<"Enter a Number : ";
  cin>>chk_num;
  
  
  cout<<"Enter a digit : ";
  cin>>digit;

        while(chk_num!=0)
        {
            rem = chk_num%10;
            if(rem == digit){
              i++;
            }
            chk_num = chk_num/10;
        } 
        cout<<i;
}