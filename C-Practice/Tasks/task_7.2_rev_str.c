#include<stdio.h>
int main(){
    char word[4];
    gets(word);
    int size = sizeof(word)/sizeof(word[0]) - 1 ;
    char arr[size];

    for(int i=0;i<sizeof(word)/sizeof(word[0])&&size>=0;i++,size--)
    {
        arr[size]=word[i];//arr4=word1
    }

    printf("Reverse of a string is : "); 
    for(int i=0;i<sizeof(word)/sizeof(word[0]);i++)
    {
        printf("%c",arr[i]);
    }
    printf("\nLength of String is : %d",sizeof(word)/sizeof(word[0]));
}