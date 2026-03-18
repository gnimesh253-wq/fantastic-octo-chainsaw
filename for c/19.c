// Greatest of Four Numbers
#include<stdio.h>

int main()
{
    int a, b, c, d;
    int max;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    printf("Enter fourth number: ");
    scanf("%d", &d);

    max = a;

    if(b > max)
    {
        max = b;
    }

    if(c > max)
    {
        max = c;
    }

    if(d > max)
    {
        max = d;
    }

    printf("Greatest number = %d", max);

    return 0;
}