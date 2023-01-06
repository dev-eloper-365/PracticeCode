#include<iostream>
using namespace std;

int main(){
	printf("hi\n");
	goto ab;
}

void jack(void)
{
	ab: 
	printf("Hello world\n");
}