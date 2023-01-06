//Write a Program of Print a number and check the number is palindrome or
//not using recursive Function 

#include<stdio.h>

int main(){
    int no,black;
    int rev_num,rem;
    printf("Enter a no : ");
    scanf("%d",&no);
    printf("%d ",jack(no,rev_num,rem));
    black = no;
    printf((black == jack(no,rev_num,rem)) ? "Palindrome" : "Not a Palindrome");
}
//7654
int jack(int no,int rev_num,int rem){
    rem = no%10;
    rev_num = rev_num*10 + rem;
    no = no/10;
    if(no == 0){
        return rev_num;
    }
    jack(no,rev_num,rem);

}