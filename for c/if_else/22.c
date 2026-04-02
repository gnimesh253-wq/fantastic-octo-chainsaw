// Electricity Bill
#include<stdio.h>

int main()
{
    int units;
    float bill;

    printf("Enter units: ");
    scanf("%d", &units);

    if(units <= 100)
    {
        bill = units * 5;
    }
    else if(units <= 300)
    {
        bill = (100 * 5) + (units - 100) * 7;
    }
    else
    {
        bill = (100 * 5) + (200 * 7) + (units - 300) * 10;
    }


    if(bill > 1000)
    {
        bill = bill + (bill * 0.05);
    }

    printf("Total Bill = %.2f\n", bill);

    return 0;
}