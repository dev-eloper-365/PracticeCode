//Write a program to print a rectangle with cross pattern
#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout<<"Enter a num : ";
	cin>>n;
	
	int fslash=0;
	int bslash=n-1;
	
	for(int row=0;row<n;row++)
	{
		for(int col=0;col<n;col++)
		{
			if(fslash==col)
			{
				cout<<"\\";
			}
			else if(bslash==col && fslash!=col)
			{
				cout<<"/";
			}
			else
			{
				cout<<"*";
			}
		}
		fslash++;
		--bslash;
		cout<<endl;
	}
	return 0;
}