#include <stdio.h>
int main(){
    //WAP to print ASCII value of character
    char c;
    printf("Input a character:");
    scanf("%c",&c);
    int asc=(int)c;
    printf("%c:%d",c,asc);
    return 0;
}