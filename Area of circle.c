#include <stdio.h>
int main(){
    //WAP to print area of a circle when the radius of circle is input
    int r,ar;
    printf("Input the value of radius of circle:");
    scanf("%d",&r);
    ar=3.14159*r*r;
    printf("Area of the circle with radius %d is %d \n",r,ar);
    return 0;
}