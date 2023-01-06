//Same as assign_4.1.c
//Write a program to read data from file.
#include<stdio.h>

int main(){

	FILE *fptr;
	char data[100];

	fptr = fopen("Password.txt","w");
	fprintf(fptr,"This is a test1 file");
	fclose(fptr);


	fptr = fopen("Password.txt","a");
	fprintf(fptr,"\nThis is a test2 file");
	fclose(fptr);


	char line[500];


	fptr = fopen("Password.txt","r");
	while (fgets(line, sizeof(line), fptr)) {
	printf("%s", line); 
	}
	
	fclose(fptr);
}