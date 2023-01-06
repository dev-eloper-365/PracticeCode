//Count no of digits of number entered
#include<iostream>
using namespace std;

int main(){
  int i=0,rem=0;
  int chk_num,digit;
  
  cout<<"Enter a Number : ";
  cin>>chk_num;
  
          while(chk_num!=0)
        {
            rem = chk_num%10;
            chk_num = chk_num/10;
            i++;
        } 
        cout<<i;
}