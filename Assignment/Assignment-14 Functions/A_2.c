// Write a function to calculate simple interest .(TSRS)
#include<stdio.h>
float simple_interest(int, int,int);

int main()
{
    float k,r,p;
    int t;
    printf("Enter principal, rate and interest\n");
    scanf("%f %f %d",&p,&r,&t);
    k=simple_interest(p,r,t);
    printf("Simple interest is %0.2f",k);
    return 0;
}

float simple_interest(int p, int r, int t)
{
    float si;
    si=p*r*t/100;
    return si;
}