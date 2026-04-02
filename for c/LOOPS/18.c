// Ignore negative numbers using continue
#include <stdio.h>

int main() {
    int num;

    while(1) {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &num);

        if(num == 0) {
            printf("Program stopped.");
            break;
        }

        if(num < 0) {
            continue;
        }

        printf("You entered: %d\n", num);
    }

    return 0;
}