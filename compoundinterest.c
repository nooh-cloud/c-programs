#include<stdio.h>
#include<math.h>
int main (){

    double principal = 10000; 
    double rate = 5;
    double time = 2;
    double amount =  principal * 
                  ((pow((1 + rate / 100), 
                    time)));
    double CI = amount - principal;

    printf("compound interest = %lf",CI);

    return 0;

}