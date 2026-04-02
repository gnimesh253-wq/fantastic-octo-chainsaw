// Admission Eligibility
#include<stdio.h>

int main()
{
    int phy, chem, math, total;

    
    printf("Enter marks (Physics Chemistry Maths): ");
    scanf("%d %d %d", &phy, &chem, &math);


    total = phy + chem + math;


    if(phy >= 50 && math >= 50 && total >= 150)
    {
        if(total > 200)
        {
            printf("Admission Granted (High Merit)\n");
        }
        else
        {
            printf("Admission Granted\n");
        }
    }
    else
    {
        printf("Admission Not Granted\n");
    }

    return 0;
}