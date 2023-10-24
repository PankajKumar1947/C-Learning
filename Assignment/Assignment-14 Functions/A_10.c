// Write a function to print all prime factors of a given numbers.
// for example, if the number is 36 then your results should be 2,2,3,3(TSRN)
#include<stdio.h>
void prime_factors(int);

int main(){
    int n;
    printf("Enter a number  ");
    scanf("%d",&n);
    prime_factors(n);

return 0;
}

void prime_factors(int n)
{
    int i=2;
    while(n>2)
    {
        while(n%i==0)
        {
        printf("%d  ",i);
        n/=i;
        }
    i++;
    }
    
}