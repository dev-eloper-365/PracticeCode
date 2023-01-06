//Write a program to print a frame pattern
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter a num : ";
	cin>>n;

	for(int row=0;row<n;row++)
	{
		for(int col=0;col<n;col++)
		{
			if((row == 0 || row == n-1) || (col == 0 || col == n-1))
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}	
// 	     c12345
// r1 ==> ***** 
// r2 ==> *   * 
// r3 ==> *   *
// r4 ==> *   *
// r5 ==> *****
