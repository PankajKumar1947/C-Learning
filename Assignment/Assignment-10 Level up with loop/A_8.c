// WAP to find next prime numbers of given numbers..
#include<stdio.h>

int main(){
    int a,x,i;
    printf("Enter a number  ");
    scanf("%d",&a);
    for(x=a+1; ; x++)
    {
        for(i=2;i<x;i++)
            if(x%i==0)
            break;
            if(i==x)
            {
             printf("Next prime no of %d is %d",a,x);
            break;
            }
    }
return 0;
}