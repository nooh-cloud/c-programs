#include<stdio.h>
int main(){
    double first,second,temp;

    printf("enter the first number: ");
    scanf("%lf",&first);

    printf("enter the second number:  ");
    scanf("%lf",&second);

    temp=first;
    first=second;
    second=temp;


    printf("\nafter swapping,first number = %.2fl ",first);
    printf("after swapping,second number = %.2fl",second);

    
}