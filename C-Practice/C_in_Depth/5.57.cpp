//Write a program to calculate x power to a base no y
#include<iostream>
using namespace std;

int main(){
	int base,power,result=1;
	cout<<"Enter base no: ";
	cin>>base;
	cout<<"Enter power: ";
	cin>>power;

	for(int i=1;i<=power;i++)
	{
		result *= base;
	}
	cout<<result;

	return 0;
}