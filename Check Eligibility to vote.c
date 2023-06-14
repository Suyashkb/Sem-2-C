#include <stdio.h>
int main(){
    //WAP to check eligiblity to vote
    int age;
    printf("Enter age of the candidate:");
    scanf("%d",&age);
    if (age>=18){
        printf("Elgible to vote");
    }
    else{
        printf("Not Eligible to vote");
    }
    return 0;
}