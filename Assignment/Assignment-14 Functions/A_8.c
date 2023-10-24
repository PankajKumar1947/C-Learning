// Write a function to calculate the number of arrangements one can make from n items and r selected at a time (TSRS)
#include<stdio.h>
int arrangements(int );

int main(){
    int n,r,k;
    printf("Enter total and selected items\n");
    scanf("%d %d",&n,&r);
    k=arrangements(n)/arrangements(n-r);
    printf("%d",k);
return 0;
}
int arrangements(int n)
{
    int f=1;
    while(n)
    {
        f=f*n;
        n--;
    }
    return f;
}