#include<stdio.h>

int main(){
    char choice;

    printf("Enter an alphabet : ");
    scanf("%c",&choice);

    switch (choice)
    {
    case 'a':
        printf("vowel");
        break;

    case 'e':
        printf("vowel");
        break;

    case 'i':
        printf("vowel");
        break;

    case 'o':
        printf("vowel");
        break;

    case 'u':
        printf("vowel");
        break;

    default:
        printf("consonant");
        break;
    }
}