#include <stdio.h>
#include <ctype.h>
#include <string.h>
// Converting string into upper or lower

void convertToUpper(char *str) {
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        str[i] = toupper(str[i]);
    }
}

void convertToLower(char *str) {
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character from fgets
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    printf("Original string: %s\n", str);

    // Convert to uppercase
    convertToUpper(str);
    printf("Uppercase string: %s\n", str);

    // Convert to lowercase
    convertToLower(str);
    printf("Lowercase string: %s\n", str);

    return 0;
}