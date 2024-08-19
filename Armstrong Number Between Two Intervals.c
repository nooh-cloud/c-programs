#include<stdio.h>
#include<math.h>

int main(){
    int low, high, number, originalNumber, rem, count;
    double result;
    
    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &low, &high);
    printf("Armstrong numbers between %d and %d are: ", low, high);

    
    if (high < low) {
        int temp = low;
        low = high;
        high = temp;
    }

    for (number = low + 1; number < high; number++) {
        originalNumber = number;
        count = 0;
        result = 0.0;

        
        while (originalNumber != 0) {
            originalNumber /= 10;
            count++;
        }

        originalNumber = number;

        
        while (originalNumber != 0) {
            rem = originalNumber % 10;
            result += pow(rem, count);
            originalNumber /= 10;
        }

        
        if ((int)result == number) {
            printf("%d ", number);
        }
    }

    return 0;
}
