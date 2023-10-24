// Write a function to print N natural numbers(TSRN)..
#include<stdio.h>
int natural(int);

int main(){
    int k;
    natural(k);
return 0;
}
int natural(int n)
{
    int i;
    printf("Enter a natural number\t");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
    return i; 
}