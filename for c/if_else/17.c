// Calculator using Operator
#include<stdio.h>

int main()
{
    float num1, num2;
    char op;


    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);


    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);


    if(op == '+')
    {
        printf("Answer = %.2f\n", num1 + num2);
    }
    else if(op == '-')
    {
        printf("Answer = %.2f\n", num1 - num2);
    }
    else if(op == '*')
    {
        printf("Answer = %.2f\n", num1 * num2);
    }
    else if(op == '/')
    {
        if(num2 != 0)
            printf("Answer = %.2f\n", num1 / num2);
        else
            printf("Cannot divide by zero\n");
    }
    else
    {
        printf("Wrong operator\n");
    }

    return 0;
}