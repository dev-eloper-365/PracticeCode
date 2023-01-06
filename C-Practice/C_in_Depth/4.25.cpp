//5 Subjects and total percentage marks
#include<iostream>
using namespace std;
int main(){
	int subject[5]={},total=0;

	for(int i=1 ; i<=5 ; i++)
	{
		cout<<"Enter marks of Sub"<<i<<" : ";
		cin>>subject[i];
	}
	for(int i=1 ; i<=5 ; i++)
	{
		total += subject[i];
	}
	
	cout << "Your Total Score is : "<< total;
	return 0;
}