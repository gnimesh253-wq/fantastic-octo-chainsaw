// Employee Bonus
#include<stdio.h>

int main()
{
    float salary, bonus;
    int years;

    
    printf("Enter salary: ");
    scanf("%f", &salary);

    printf("Enter years of service: ");
    scanf("%d", &years);

    
    if(years > 10)
    {
        bonus = salary * 0.10;
    }
    else if(years > 5)
    {
        bonus = salary * 0.05;
    }
    else
    {
        bonus = salary * 0.02;
    }

    
    printf("Bonus = %.2f\n", bonus);

    return 0;
}