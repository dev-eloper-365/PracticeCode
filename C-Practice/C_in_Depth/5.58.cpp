//Write a program to verify wether a no is a fibonnaci no or not
#include<iostream>
#include<math.h>
using namespace std;

int ma, i){
	int n;
	float sq1,sq2;

	cout<<"Enter a num : ";
	cin>>n;

	sq1 = sqrt((5*n*n + 4));
	sq2 = sqrt((5*n*n - 4));

	if( int(sq1) == sq1 || int(sq2) == sq2)
	{
		cout<<"It is a fibonnaci no.";
	}
	else{
		cout<<"No, it is not a fibonnaci no.";
	}
}