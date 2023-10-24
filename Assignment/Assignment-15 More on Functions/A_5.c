//Write a function to print first N Prime numbers(TSRN)
#include<stdio.h>
void print_prime_numbers(int n);

int main(){
    int y;
    printf("Enter numbers:\n");
    scanf("%d",&y);
    print_prime_numbers(y);
return 0;
}

void print_prime_numbers(int n)
{
    int i;
    for(int x=2; ;x++)
    {
        for( i=2;i<=n ;i++)
        {
            if(x%i==0)
            break;
        }
        if(i==x)
            printf("%d\t",x);
    }
}