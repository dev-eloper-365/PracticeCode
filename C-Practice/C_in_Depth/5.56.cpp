//Write a program to print cubes of all the numbers which are divisble by 3 till a specified number n using continue
#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a num : ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(!(i%3==0)){
			continue;
		}
		cout<<i*i*i<<"\t";
	}
	return 0;
}