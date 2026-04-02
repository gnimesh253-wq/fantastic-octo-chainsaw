// Greatest of Four Numbers
#include<stdio.h>

int main()
{
    int a, b, c, d, max;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    max = a;   // assume first number is greatest

    if(b > max)
        max = b;

    if(c > max)
        max = c;

    if(d > max)
        max = d;

    printf("Greatest number = %d\n", max);

    return 0;
}