#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n=28;
	
	// cout<<"Enter a num: ";
	// cin>>n;
	
	int chksum=0;
	for(int j=1 ; j<=285 ; j++)
	{
		for(int i=1;i<=j;i++)
		{
			if(n%i==0)
			{
				if(i!=n)
				{
				chksum += i;	
				}
			}
		}
		if(chksum==j)
		{
			cout<<j<<endl;
		}
		chksum=0;
	}
}