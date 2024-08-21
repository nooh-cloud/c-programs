#include<stdio.h>

unsigned int factorial(unsigned int n){

    if (n == 0){
        return 1;
        return n * factorial(n - 1);
    }  
}

int main(){
    int n;
    int num = n;

    printf("enter a positive integer: ");
    scanf("%d",&num);

    if (num < 0){
    printf("ERROR: Factorial is not defined for negative numbers.\n");
     
    }else{
        printf("Factorial of %d is %u.\n",num, factorial(num));
    }
    return 0;    
}