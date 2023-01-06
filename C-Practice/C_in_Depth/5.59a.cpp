//Write a program to find sum of these series upto n terms where x is an integer entered ny user
// 1+11+111+1111+....
#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	int sum=0;
	cout<<"Enter no of terms till u want to sum : ";
	cin>>n;
	n-=1;

	while(n>=0)
	{
		int ap=0,result=0;
		for(int i=0 ; i<=n ; i++)
		{
			ap = pow(10,i);
			result += ap ;
		}
		sum += result;
		n--;
	}
	cout<<"Sum of AP : "<<sum<<endl;

	// 1 					i=1
	// 10 + 1 				i=2
	// 100 + 10 + 1		  	i=3
	// 1000 + 100 + 10 + 1  i=4
	// 10000 + 1000 + 100 + 10 + 1
	// cout<<result;

	return 0;
}