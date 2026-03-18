//checks odd or enen number
#include<stdio.h>

int main(){
    int num;

    printf("Enter a number :");
    scanf("%d",&num);

    if(num % 2 == 0){
        printf("Enter number is Even");
    }
    else
    {
        printf("Enter number is odd");
    }
}