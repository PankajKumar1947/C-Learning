// Write a function to check whether a given number is Prime or not.(TSRS)
#include<stdio.h>
int  check_prime(int);

int main(){
    int x;
    printf("Enter a number  ");
    scanf("%d",&x);
    int y=check_prime(x);
    if(y==0)
    printf("Not Prime");
    else 
    printf("Prime");
    
    
return 0;
}

int check_prime(int n)
{
    int i;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return 0;
    }
return 1;
}