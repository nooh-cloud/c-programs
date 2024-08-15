#include<stdio.h>
int main (){
    int i,n;
    int t1 = 0,t2 = 1;
    int nexterm = t1 + t2 ;

    printf("enter the number of terms:");
    scanf("%d",&n);

    printf("Fibonacci series : %d, %d, ",t1,t2);

    for ( i = 3; i < n; i++)
    {
        printf("%d,",nexterm);
        t1 = t2;
        t2 = nexterm;
        nexterm = t1 + t2;
    }
    return 0;
}