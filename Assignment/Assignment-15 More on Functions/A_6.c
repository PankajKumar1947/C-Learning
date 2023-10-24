// Write a function to print all Prime numbers between two given numbers.(TSRN)
#include<stdio.h>
void print_prime_numbers(int a, int n);

int main(){
    int z,y;
    printf("Enter two prime numbers:\n");
    scanf("%d %d",&z,&y);
    print_prime_numbers(z,y);
return 0;
}

void print_prime_numbers(int a, int n)
{
    int i;
    for(int x=a;x<n;x++)
    {
        for( i=2;i<x;i++)
        {
            if(x%i==0)
            break;
        }
        if(i==x)
            printf("%d\t",x);
    }
}