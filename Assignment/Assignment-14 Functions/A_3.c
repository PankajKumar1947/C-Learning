// Write a function to check whether a given number is even or odd. Return 1 if the number is even,  otherwise return 0(TSRS)
#include<stdio.h>
int even_odd(int);

int main(){
    int n;
    printf("Enter a number\t");
    scanf("%d",&n);
    printf("%d",even_odd(n));
return 0;
}
int even_odd(int n)
{
    if(n%2==0)
    return 0;
    else
    return 1;
}