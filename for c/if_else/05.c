// minimum number of three numbers
#include<stdio.h>

int main() {
    int a = 10 , b = 5 , c = 8 , min;

    min = a;
    if (b < min){
        min = b;
    }
     if (c < min)
     {
        min = c;
     }

     printf("Numbers : %d %d %d\n", a,b,c);
     printf("Minimum number is  : %d", min);
     return 0;
}