#include<stdio.h>
int addNumbers(int n);
int main(){
    int num;
    printf("enter a positive integer: ");
    scanf("%d", &num);
    printf("sum = %d",addNumbers(num));
    return 0;
}
    int addNumbers(int n){
        if (n != 0)
        {
            return n + addNumbers(n -1);
        }else
            return n;
        
        
    }