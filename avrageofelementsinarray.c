#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, average;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float arr[n];  

    
    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%f", &arr[i]);
        sum += arr[i];  
    }

    
    average = sum / n;

    
    printf("Average = %.2f\n", average);

    return 0;
}
