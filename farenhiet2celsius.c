#include<stdio.h>
int main(){
    float farenhiet,celsius;

    printf("enter farenhiet temperature:");
    scanf("%f",&farenhiet);

    celsius=(farenhiet -32)*5/9;
    printf("celsius= %.3f",celsius);
    return 0;
}