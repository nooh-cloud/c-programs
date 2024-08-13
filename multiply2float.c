#include<stdio.h>
int main(){
        //ask the user to enter the number 
    double a,b, n;
        printf("enter two number:");
        scanf("%lf %lf",&a, &b);

        //calculation
    n = a*b;

    //display output
    printf("n=%.2lf",n);

    return 0;
}