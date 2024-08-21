#include<stdio.h>
#include<math.h>

int checkPrimeNumber(int n);
int checkArmstrongNumber(int n);

int main(){
int n, flag;

    printf("enter a positive integer: ");
    scanf("%d",&n);

    flag = checkPrimeNumber(n);
    if (flag == 1) {
        printf("%d is a prime number.\n", n);        
    } else
        printf("%d is not a prime number.\n", n);
    

    flag = checkArmstrongNumber(n);
    if (flag == 1) {
        printf("%d is a amstrong number.\n", n);
    } else
        printf("%d is not amstrong number.\n",n);
        return 0;
}  

    int checkPrimeNumber(int n){
        int i,flag = 1, squareroot;

        squareroot = sqrt(n);
        for ( i = 2; i <= squareroot; i++) {
            if (n % i == 0)
        {
            flag = 0;
            break;
        }
            
        }
    return flag;
}


int checkArmstrongNumber(int num){
    int originalnum, remainder, n = 0, flag;
    double result = 0.0;

    for (originalnum = num;originalnum != 0 ; n++) {
        originalnum /= 10;
    }
    for (originalnum = num;originalnum != 0;originalnum /= 10) {
        remainder = originalnum % 10;

        result += pow(remainder,n); 
    }
        if (round(result) == num )
        {
            flag = 1;
        }else
            flag = 0;
            return flag;
        
}