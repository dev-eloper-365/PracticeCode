#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	int digit,buffer=1;
	cout<<"Enter a num: ";
	cin>>n;
	while(n>0)
	{
		digit=n%10;
		buffer *= digit;
		n=n/10;
	}
	cout<<buffer;
}