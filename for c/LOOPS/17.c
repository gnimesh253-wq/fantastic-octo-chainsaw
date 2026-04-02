// First even number using break
#include <stdio.h>

int main() {
    int num;

    while(1) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if(num % 2 == 0) {
            printf("First even number is: %d", num);
            break;
        }
    }

    return 0;
}