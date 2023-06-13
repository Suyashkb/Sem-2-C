#include <stdio.h>
int main(){
    int n;
    printf("Input a number:");
    scanf("%d",&n);
    if (n%2==0){
        printf("Number %d is an even no.",n);
    }
    else{
        printf("Number %d is an odd no.",n);
    }
    return 0;
}