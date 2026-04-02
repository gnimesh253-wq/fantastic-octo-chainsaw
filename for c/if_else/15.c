// check if it is triangle is Equiltateral,isoscales and scalene
#include<stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three angles: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a + b + c == 180)
    {
        printf("Valid Triangle\n");

        if(a == b && b == c)
            printf("Equilateral Triangle\n");
        else if(a == b || b == c || a == c)
            printf("Isosceles Triangle\n");
        else
            printf("Scalene Triangle\n");
    }
    else
    {
        printf("Invalid Triangle\n");
    }

    return 0;
}