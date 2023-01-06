#include<stdio.h>
int main(){
    char str1[]="jackma",str2[]="isabitch";
    int size1=sizeof(str1)-1,size2=sizeof(str2)-1;
    int size = sizeof(str1);
    str1[size1+size2];

    for(int i=0;i<size2;i++)
    {
        str1[size1++] = str2[i];
    }
    printf("%d",sizeof(str1));
}