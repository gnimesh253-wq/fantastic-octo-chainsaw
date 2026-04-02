/* Area and Circumference of Circle
Area = πr²
Circumference = 2πr
*/
#include<stdio.h>

int main()
{
    float r = 5;
    float area;
    float circumference;
    float pi = 3.14159;

    area = pi * r * r;
    circumference = 2 * pi * r;

    printf("Area of Circle = %.2f\n", area);
    printf("Circumference of Circle = %.2f\n", circumference);

    return 0;
}