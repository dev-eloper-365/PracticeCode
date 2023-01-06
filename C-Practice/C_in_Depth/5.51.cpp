//Write a program to reverse a num.
#include<iostream>
using namespace std;

int main(){
	int chk_num;
	cout<<"Enter a num : ";
	cin>>chk_num;
  int original_num=chk_num;
       int rem=0;
       int rev_num=0;
        while(chk_num!=0)
        {
            rem = chk_num%10;
            rev_num = rev_num*10 + rem;
            chk_num = chk_num/10;
        }

        if(original_num == rev_num){
          cout<<"Palindrome"<<endl;
        }
        else{
          cout<<"Not a Palindrome"<<endl;
        }
}