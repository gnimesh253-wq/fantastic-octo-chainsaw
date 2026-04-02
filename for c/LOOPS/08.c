// Factorial using for loop
#include<stdio.h>

int main(){
    int i,n=7;
    int fact = 1;

    for(i = 1 ; i <= n ; i++){
        fact *= i;
    }

    printf("%d\n",fact);

    return 0;
}