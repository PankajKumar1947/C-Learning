// Write a program to calculate the number of combinations  one can make from n items and r selected at a time(TSRS)..
#include<stdio.h>
int combinations(int );

int main(){
    int n,r,k;
    printf("Enter total and selected items\n");
    scanf("%d %d",&n,&r);
    k=combinations(n)/combinations(r)/combinations(n-r);
    printf("%d",k);
return 0;
}
int combinations(int n)
{
    int f=1;
    while(n)
    {
        f=f*n;
        n--;
    }
    return f;
}