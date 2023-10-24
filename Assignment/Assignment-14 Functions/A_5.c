// Write a function to print first N odd natural numbers..(TSRN)
#include<stdio.h>
int odd_natural_numbers(int );

int main(){
    int k;
    odd_natural_numbers(k);
return 0;
}
int odd_natural_numbers(int n)
{
    int i;
    printf("Enter a number  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\t",2*i-1);
    }
    return 2*i-1;
}