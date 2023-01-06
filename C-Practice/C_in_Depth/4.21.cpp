//To find area and perimeter of a circle provided its radius
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double radius;
	cout<<"Enter Radius of a circle : ";
	cin>>radius;
	cout<<"Area of circle is "<<fixed << setprecision(2) <<(radius*radius*22/7)<<endl;
	cout<<"Perimeter of circle is "<<2*radius*22/7<<endl;
}