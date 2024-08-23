#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j;
    int trace = 0;
    float normal = 0;

    printf("Enter the number of rows and columns (for a square matrix): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        trace += matrix[i][i];
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            normal += matrix[i][j] * matrix[i][j];
        }
    }
    normal = sqrt(normal);

    printf("Trace of the matrix: %d\n", trace);
    printf("Normal of the matrix: %.2f\n", normal);

    return 0;
}
