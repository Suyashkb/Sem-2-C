#include <stdio.h>
int main(){
    //Input three sides of triangle and check whether triangle is scalene,isoceles, equilatral
    int a,b,c;
    printf("Enter 1st side of triangle");
    scanf("%d",&a); 
    printf("Enter 2st side of triangle");
    scanf("%d",&b); 
    printf("Enter 3st side of triangle");
    scanf("%d",&c); 

    if(a==b && a==c){
        printf("Triangle is equilatral");
    }
    else if (a==b||b==c||c==a){
        printf("Triangle is isoceles");
    }
    else{
        printf("Triangle is scalene");
    }    

    return 0;
}