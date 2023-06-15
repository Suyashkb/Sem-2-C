#include <stdio.h>
//Sum of digits
int main(){
    int n;
    int sum=0;
    printf("Enter number:");
    scanf("%d",&n);
    int Q=n;
    while(n!=0){
        sum=sum+n%10;
        n=n/10;
    }
    printf("Sum of digits of %d is %d",Q,sum);
}