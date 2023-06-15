#include <stdio.h>
#include <ctype.h>
// Number of vowel in a string
int countVowels(const char *str) {
    int count = 0;
    char ch;

    // Iterate through each character of the string
    while (*str) {
        ch = tolower(*str);

        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }

        str++;
    }

    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character from fgets
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    int vowelCount = countVowels(str);

    printf("Number of vowels in the string: %d\n", vowelCount);

    return 0;
}