// Student Pass or Fail 
#include<stdio.h>

int main()
{
    float s1, s2, s3, total, per;

    printf("Enter marks of 3 subjects:\n");
    scanf("%f %f %f", &s1, &s2, &s3);


    total = s1 + s2 + s3;
    per = total / 3;


    printf("\n------ MARKSHEET ------\n");
    printf("Subject 1 = %.2f\n", s1);
    printf("Subject 2 = %.2f\n", s2);
    printf("Subject 3 = %.2f\n", s3);
    printf("Total = %.2f\n", total);
    printf("Percentage = %.2f\n", per);

    
    if(s1 < 33 || s2 < 33 || s3 < 33)
    {
        printf("Result = FAIL (Less than 33 in a subject)\n");
    }
    else if(per < 40)
    {
        printf("Result = FAIL (Percentage less than 40)\n");
    }
    else
    {
        printf("Result = PASS\n");

    
        if(per >= 90)
            printf("Grade = A\n");
        else if(per >= 75)
            printf("Grade = B\n");
        else if(per >= 60)
            printf("Grade = C\n");
        else
            printf("Grade = D\n");
    }

    return 0;
}