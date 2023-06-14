#include <stdio.h>
int main()
{
    //WAP to check whether the input is vowel or consonent
    char ch;
    printf("Enter a character:");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("Character is an vowel");
    }
    else
    {
        printf("Character is an consonant");
    }
    return 0;
}