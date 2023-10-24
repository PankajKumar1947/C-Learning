// Write a function to find the next prime numbers of a given numbers(TSRS)
#include<stdio.h>
int next_prime(int );

int main(){
    int num;
    printf("Enter a number  ");
    scanf("%d",&num);
    int y=next_prime(num);
    printf("%d ",y);
return 0;
}

int next_prime(int n)
{
    int i,x;
    for( x=n+1; ;x++)
    {
        for( i=2;i<x;i++)
        {
            if(x%i==0)
            break;
        }
        if(i==x)
        return x;
    }   
}