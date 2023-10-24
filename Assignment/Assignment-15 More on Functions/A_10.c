// Write a function to find the sum of first N terms of the series:
// 1!/1 +2!/2 +3!/3 +4!/4 + 5!/5 + ........+ n!/n
#include<stdio.h>
int factorial(int n);

int main(){
    int term;
    printf("Enter term  ");
    scanf("%d",&term);
    int s=0,j=1;
    while(j<=term)
    {
        s=s+(factorial(j)/j);
        j++;
    }
    printf("Sum up to %dth term is %d",term,s);
return 0;
}

int factorial(int n)
{
    int f=1,i=1;
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    return f;
}