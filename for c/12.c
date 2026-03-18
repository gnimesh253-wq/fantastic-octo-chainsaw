//find largest number 
#include<stdio.h>

int main(){
    int a , b;

    printf("Enter number a:");
    scanf("%d",&a);

    printf("Enter number b:");
    scanf("%d",&b);

    if (a > b)
    {
        printf("largest number is %d\n",a);
    }
    else{
        printf("largest number is %d",b);
    }
    return 0;
    
}