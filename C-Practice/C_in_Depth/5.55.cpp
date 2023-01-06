//Write a program to find sum of square of al numbers from 1 to n
#include<iostream>
using namespace std;

int main(){
	int num,sum=0;
	cout<<"Enter a num: ";
	cin>>num; 
	for( int i=1 ; i<=num ; i++ )
	{
		sum += i*i;
	}
	cout<<sum;
	return 0;
}