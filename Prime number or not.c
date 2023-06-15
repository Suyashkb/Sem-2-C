#include <stdio.h>
//Check whether number is prime or not
int main(){
    int n;
    int check=0;
    printf("Enter no.:");
    scanf("%d",&n);
    
    for (int i=0;n/2;i++){
        if (n%i==0){
            break;
        }
        check=1;
    }
    if (check==1){
        printf("number is prime");
    }
    else{
        printf("No. is not prime");
    }
}