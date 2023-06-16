#include <stdio.h>
#include <string.h>
//Reverse of a string
void reverseString(char *str) {
    int length = strlen(str);
    int i, j;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}