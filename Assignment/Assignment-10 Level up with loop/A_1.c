// Write a program to print Nth term of Fibonacci Series.
#include<stdio.h>

int main(){
    int n,a=-1,b=1,c;
    printf("Enter a number  ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("%dth term of fibonacci series is %d",n,c);
return 0;
}