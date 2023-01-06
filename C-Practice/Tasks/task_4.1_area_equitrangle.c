#include<stdio.h>

int main(){
    float len,area;

    printf("Enter lenght of any side : ");
    scanf("%f",&len);
    
    area = (1.7/4)*len*len;
    printf("%.2f",area);
}