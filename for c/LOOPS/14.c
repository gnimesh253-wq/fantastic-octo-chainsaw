// Numbers from 1 to 50 divisible by both 3 and 5
#include<stdio.h>

int main(){
    int i;

    for ( i = 1; i <= 50; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%d\n",i);
        }
        
    }
    
    return 0;
}