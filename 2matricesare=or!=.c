#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int isEqual = 1; 

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[rows][cols], matrix2[rows][cols];

    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                isEqual = 0;
                break;
            }
        }
    }

    if (isEqual) {
        printf("The matrices are equal.\n");
    } else {
        printf("The matrices are not equal.\n");
    }

    return 0;
}
