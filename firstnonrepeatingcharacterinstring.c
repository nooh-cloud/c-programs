#include <stdio.h>
#include <string.h>

char getNonRepeatingChar(char str[]) {
    int count[256] = {0}; 
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        count[(unsigned char)str[i]]++;
    }

    for (int i = 0; i < length; i++) {
        if (count[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }

    return '\0'; 
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 

    char result = getNonRepeatingChar(str);

    if (result != '\0') {
        printf("First non-repeating character: %c\n", result);
    } else {
        printf("No non-repeating character found.\n");
    }

    return 0;
}
