// fahrenheit to centigrade
#include<stdio.h>

int main() {
    float f=98;
    float c;

    c = (f - 32) * 5 / 9;

    printf("Fahrenheit = %.2f\n",f);
    printf("Centigrade = %.2f\n",c);

    return 0;
}