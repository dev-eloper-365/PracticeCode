//Write a program to copy string from one string to another string with user
//define function. 
#include<stdio.h>
#include<string.h>
int main(){
    char str1[50],str2[50];
    printf("Enter a string : ");
    gets(str1);
    capy(str1[50],str2[50]);
    //puts and return array
}

char capy(char str1[50],char str2[50]){

    for(int i=0;i<strlen(str1);i++){
        str2[i] = str1[i];
    }
    //strlen works here
    //return str[]
    puts(str2);
    return 'a';
}