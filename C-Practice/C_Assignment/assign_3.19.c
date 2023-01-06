//Write a program to concatenate the two string using pointer.
#include<stdio.h>
#include<string.h>
int main(){
	char firstStr[50],secondStr[50];
	
	printf("Enter a string : ");
	gets(firstStr);
	printf("Enter another String : ");
	gets(secondStr);

	for(int i=strlen(firstStr),j=0;i<=strlen(firstStr)+strlen(secondStr);i++)
	{
		char *ptr_str1=&firstStr[i],*ptr_str2=&secondStr[j];
		*ptr_str1 = *ptr_str2;
		j++;

	}	
	char *ptr_str1=&firstStr[0];
	puts(ptr_str1); //Yaha pe puts me *ptr_str1 nahi ayega?

}