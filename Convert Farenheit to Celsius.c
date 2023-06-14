#include <stdio.h>
int main(){
    //WAP to input temperature in celcius and show output in fahrenite
    float C,F;
    printf("Input temperature in Celcius:");
    scanf("%f",&C);
    F=(C*9/5)+32;
    printf("Temperature in Fahrenite is %f \n",F);
    return 0;
}