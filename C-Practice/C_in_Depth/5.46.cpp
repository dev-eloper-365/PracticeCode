//Write a progrma ot pring tnumber from 1 to 80 separated by tab, 8 nums per line
#include<iostream>
using namespace std;

int main(){
	for(int i=1;i<=80;i++)
	{
		cout<<i<<"\t";
		if(i%8==0)
		{
			cout<<endl;
		}
	}
}