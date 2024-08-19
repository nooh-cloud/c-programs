#include<stdio.h>
int main(){
    int num,  originalNum, remainder, result =0;
    printf("Enter a three digit number: ");
    scanf("%d",&num);
    originalNum = num;

    while (originalNum != 0)
    {
        remainder = originalNum % 10;

        result += remainder * remainder * remainder;
        originalNum /= 10;
    }
    if (result == num)
    
        printf("%d is an amstrong number.", num);
    else
      printf("%d is not an amstrong number.", num);

      return 0;
}



