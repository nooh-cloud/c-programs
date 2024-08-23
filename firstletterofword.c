#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 

    int i = 0;
    while (str[i]) {
        if (i == 0 || str[i - 1] == ' ') {
            printf("%c ", str[i]);
        }
        i++;
    }

    printf("\n");

    return 0;
}
