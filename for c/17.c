// Calculator using Operator
#include<stdio.h>

int main()
{
    float a, b, result;
    char op;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    printf("Enter operator (+ - * /): ");
    scanf(" %c", &op);

    if(op == '+')
    {
        result = a + b;
        printf("Result = %f", result);
    }
    else if(op == '-')
    {
        result = a - b;
        printf("Result = %f", result);
    }
    else if(op == '*')
    {
        result = a * b;
        printf("Result = %f", result);
    }
    else if(op == '/')
    {
        if(b != 0)
        {
            result = a / b;
            printf("Result = %f", result);
        }
        else
        {
            printf("Error: divide by zero");
        }
    }
    else
    {
        printf("Invalid operator");
    }

    return 0;
}