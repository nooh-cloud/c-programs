#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool isPangram(char str[]) {
    bool alphabet[26] = {false};
    int index;

    for (int i = 0; str[i]; i++) {
        if (isalpha(str[i])) {
            index = tolower(str[i]) - 'a';
            alphabet[index] = true;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (!alphabet[i]) return false;
    }
    return true;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 

    if (isPangram(str)) {
        printf("The string is a pangram.\n");
    } else {
        printf("The string is not a pangram.\n");
    }

    return 0;
}
