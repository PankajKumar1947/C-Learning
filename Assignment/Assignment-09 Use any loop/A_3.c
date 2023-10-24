// WAP to calculate sum of first odd N natural numbers....
#include<stdio.h>

int main(){
    int i, N,s=0;
    printf("Enter number N");
    scanf("%d",&N);
    for (i=1;i<=N;i++)
    {
        s=s+2*i-1;
    }
    printf("Sum of first %d odd natural numbers is %d",N,s);
return 0;
}