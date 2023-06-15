#include <stdio.h>
#include <ctype.h>
int main(){
    //WAP to print whether the character is alphabet, number or special character
    char ch;
    printf("Input character:");
    scanf("%c",ch);
    if(isalpha(ch)){
        printf("Character is an alphabet");
    }
    else if(isdigit(ch)){
        printf("Character is number ");
    }
    else{
        printf("Character is a special character");
    }
    return 0;
}