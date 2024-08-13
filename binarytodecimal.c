#include<stdio.h>
int main(){
    int decimal=0,binary,base=1,rem;
    printf("enter the binary number:");
    scanf("%d",&binary);
    while (binary!=0)
    {
        rem=binary%10;
        decimal=decimal+rem*base;
        binary=binary/10;
        base=base*2;
    }
    printf("decimal equivalent is %d",decimal);
    return 0;
    

}