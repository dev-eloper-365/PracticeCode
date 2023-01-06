/* Write a program to print a patter according to input
for eg if input = 5
result : 
* * * * *
 * * * * *
* * * * * 
 * * * * * 
* * * * * 
*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a num : ";
	cin>>n;

	for(int j=0;j<n;j++)
	{
		if(j%2!=0)
		{
				cout<<" ";
		}
		
		for(int i=0;i<n;i++)
		{
			
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}