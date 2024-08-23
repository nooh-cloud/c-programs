#include <stdio.h>

int main() {
    int arr1[100];
    int i, max, min, n;

    printf("\n\nFind the maximum and the minimum element in the array.\n");
    printf("Input the number of elements stored in the array: ");
    scanf("%d", &n);

    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }
    
    max = arr1[0];
    min = arr1[0];

    for (i = 1; i < n; i++) {
        if (arr1[i] > max) {
            max = arr1[i];
        }
        if (arr1[i] < min) {
            min = arr1[i];
        }
    }
    
    printf("Maximum Element is %d\n", max);
    printf("Minimum Element is %d\n", min);
    
    return 0;
}
