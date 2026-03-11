// to find multiplication for three number
#include <stdio.h>

int main()
{
    int a=5, b=5, c=5, result;
    float avg;

    result = a * b * c;
    avg = result/3;

    printf("Multiplication of three numbers = %d\n", result);
    printf("Avg of three numbers = %.2f", avg);

    return 0;
}