// Write a function to check whether a given number contains a given digit or not.(TSRS)
#include<stdio.h>
int is_number_contains_digit(int,int);

int main(){
    int n,r;
    printf("Enter a number and digit:\n");
    scanf("%d %d",&n,&r);
    if(is_number_contains_digit(n,r))
      printf("Yes, %d contains %d",n,r);
    else
    printf("No, %d doesn't contains %d",n,r);
return 0;
}

int is_number_contains_digit(int num,int digit)
{
    while (num)
    {
        if(num%10==digit)
        {
            return 1;
        }
        num=num/10;
    }
    return 0;
    
}