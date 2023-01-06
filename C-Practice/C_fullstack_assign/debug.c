#include<stdio.h>

int student(int a,int r){
    int age, roll,co;
    age=a;
    roll=r;
   
    if (co == 1){
        return age;
    }
    else
    {
    co=1;
    return roll;
    }

}

int main(){
    printf("%d %d",student(23,1),student(23,1));
    return 0;    
}