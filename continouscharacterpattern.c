#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}
