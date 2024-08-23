#include <stdio.h>
#include <string.h>

void removeLeadingZeros(char str[]) {
    int i = 0;
    while (str[i] == '0') {
        i++;
    }

    if (i == strlen(str)) {
        printf("0");
    } else {
        printf("%s", &str[i]);
    }
}

int main() {
    char str[100];
    printf("Enter a number with leading zeros: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 

    removeLeadingZeros(str);

    return 0;
}
