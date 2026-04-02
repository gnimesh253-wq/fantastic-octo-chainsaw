// Factorial using while loop
#include<stdio.h>

int main(){
    int i =1 , n=7;
    int fact =1;

    while (i <= n)
    {
        fact *= i;
        i++;
    }
    printf("%d\n",fact);

    return 0;
}