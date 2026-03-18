//student grade 
#include<stdio.h>

int main(){
    int marks;

    printf("Enter marks:");
    scanf("%d",&marks);

    if (marks >= 100 && marks <= 90)
    {
        printf("grade A");
    }
    else if (marks >=89  && marks <=80 )
    {
        printf("grade B");
    }
    else if ((marks >= 79 && marks <= 70))
    {
        printf("grade C");
    }
    else if (marks >= 69 && marks <=60)
    {
        printf("grade D");
    }
    else{
        printf("fail");
    }
    return 0;
}