//check number is positive , negative , zero
#include<stdio.h>

int main(){

    int a;

    printf("Enter number:");
    scanf("%d",&a);

    if(a > 0){
        printf("a is positive numebre");
    }
    if (a < 0)
    {
        printf("a is negative numebr ");
    }
    else{
        printf("a is zero");
    }
    return 0;
    
}