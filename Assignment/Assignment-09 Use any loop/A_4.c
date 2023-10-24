// WAP to calculate sum of square of first N natural numbers....
#include<stdio.h>

int main(){
    int i, N,s=0;
    printf("Enter number N");
    scanf("%d",&N);
    for (i=1;i<=N;i++)
    {
        s=s+i*i;
    }
    printf("Sum of square of first %d natural numbers is %d",N,s);
return 0;
}