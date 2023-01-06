// Write a program to find out the max number from given 10 elements of array 
#include<iostream>
using namespace std;
int main() {
    int arr[] = {23,233,1,234,755},big_num=0;

   	for(int i=0 ; i<4 ; i++)
   	{
   		big_num =  arr[i] > arr[i+1] ? arr[i] : arr[i+1];
   	}  
   	cout<<big_num;
}