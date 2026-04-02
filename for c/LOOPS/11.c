// Check prime using while loop
#include <stdio.h>

int main() {
    int n, i = 2, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n <= 1) {
        flag = 0;
    } else {
        while(i <= n / 2) {
            if(n % i == 0) {
                flag = 0;
                break;
            }
            i++;
        }
    }

    if(flag == 1)
        printf("Prime Number");
    else
        printf("Not Prime Number");

    return 0;
}