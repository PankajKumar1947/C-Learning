// Write a function to calculate the factorial of a number(TSRS).
#include<stdio.h>
int factorial(int );

int main(){
    int k;
    printf("%d",factorial(k));
return 0;
}
int factorial(int n)
{
    int i;
    printf("Enter a number  ");
    scanf("%d",&n);
    int f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    
    return f;
}