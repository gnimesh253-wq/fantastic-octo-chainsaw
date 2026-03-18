// even or odd number
#include<stdio.h>

int main()
{
    int num = 7;

    if(num % 2 == 0)
    {
        printf("Number = %d\n", num);
        printf("It is Even");
    }
    else
    {
        printf("Number = %d\n", num);
        printf("It is Odd");
    }

    return 0;
}