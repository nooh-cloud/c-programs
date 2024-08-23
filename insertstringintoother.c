#include <stdio.h>
#include <string.h>

void insertString(char str1[], char str2[], int pos) {
    int length1 = strlen(str1);
    int length2 = strlen(str2);

    memmove(&str1[pos + length2], &str1[pos], length1 - pos + 1);
    memcpy(&str1[pos], str2, length2);
}

int main() {
    char str1[100], str2[100];
    int pos;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; 

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; 

    printf("Enter the position to insert: ");
    scanf("%d", &pos);

    insertString(str1, str2, pos);

    printf("String after insertion: %s\n", str1);

    return 0;
}
