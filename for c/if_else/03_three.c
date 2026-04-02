// calculate the simple intrest
#include<stdio.h>

int main(){
    int p=1000 , r=5 , t=2;
    float si;

    si = (p*r*t)/100;

    printf("Principal = %d\n",p);
    printf("Rate = %d\n",r);
    printf("Time = %d\n",t);
    printf("Simple Interest = %.2f\n",si);

    return 0;

}