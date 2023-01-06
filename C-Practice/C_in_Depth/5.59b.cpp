#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int x=3,n=3;
	// cout<<"Enter an integer x : ";
	// cin>>x;
	// cout<<"Enter no of terms till u want to sum : ";
	// cin>>n;

	int term;

	while(n>=0)
	{
		for(int i=1 ; i<n ; i++)
		{
			term = pow(x,i);
		}
		n--;
		cout<<term<<" ";
	}


}