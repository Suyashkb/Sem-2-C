#include <stdio.h>
#include <math.h>
//evaluate e^x
int main(){
    float x, ans;
    printf("Enter x:");
    scanf("%f",&x);
    ans=exp(x);
    printf("e^%f=%f",x,ans);
}