//Substract and Add two number when the first num is > than the second respectively
#include<iostream>
using namespace std;

int main(){
  	int num1,num2;
  	cout<<"Enter a num : ";
  	cin>>num1;
  	cout<<"Enter number 2 : ";
  	cin>>num2;

  	cout << "Result : " << ((num1 > num2) ? num1-num2 : num1+num2) << endl;
	return 0;
}