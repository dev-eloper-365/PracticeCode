//Write a program to enter 10 numbers ranging from 1 to 50 and draw a histogram by displaying adjacent '=' sign for each number entered
#include<iostream>
using namespace std;
int main(){

	int numbers[5]={};
	
	for( int i ; i<5 ; i++ )
	{	
		cout<<"Enter a number"<<i<<" :";
		cin>>numbers[i];
		if(!(numbers[i]<50 && numbers[i]>0))
		{
			cout<<"Number should be in range [1,50]";
		}
	}

	for( int i=0 ; i<5 ; i++ )
	{
		for(int index=1; index<=numbers[i] ; index++)
			{
				cout<<"=";
			}	
			cout<<endl;
	}

}

// if(number<50 && number>0){
// 			for(int index=1; index<=number ; index++)
// 			{
// 				cout<<"=";
// 			}	
// 			cout<<endl;
// 		}
// 		else{
// 			cout<<"Number should be in range [1,50]";
// 		}
// 	}