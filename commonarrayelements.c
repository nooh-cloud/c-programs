#include <stdio.h>

int main() {
    int n1, n2, i, j;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of the first array:\n");
    for (i = 0; i < n1; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of the second array:\n");
    for (i = 0; i < n2; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    printf("Common elements:\n");
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }

    return 0;
}
