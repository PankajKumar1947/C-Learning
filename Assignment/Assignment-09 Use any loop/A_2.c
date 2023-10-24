// WAP to calculate sum of first even N natural numbers....
#include<stdio.h>

int main(){
    int i, N,s=0;
    printf("Enter number N");
    scanf("%d",&N);
    for (i=1;i<=N;i++)
    {
        s=s+2*i;
    }
    printf("Sum of first %d even natural numbers is %d",N,s);
return 0;
}