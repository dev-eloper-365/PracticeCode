#include<stdio.h>
#include<string.h>
int main(){
    char str1[50],str2[50]="";
    printf("Enter a string : ");
    gets(str1);
    int i,j=strlen(str1)-1;
    
    for(i=0,j;i<strlen(str1) && j>=0;i++,j--)
    {
        str2[j] = str1[i];
    }

    puts(str2);
    return 0;
}
