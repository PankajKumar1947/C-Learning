//Write a function to find the first occurrence ofadjacent duplicate values i the array. Function has to return the value of the element..
#include<stdio.h>
int adjacent_duplicate_elements(int a[],int);

int main()
{
    int n;
    printf("Enter size of an array");
    scanf("%d",&n);
    int a[n];
    printf("Enter numbers\n");
    for(int i=0;i<=n-1;i++)
    scanf("%d",&a[i]);
    if(adjacent_duplicate_elements(a,n)==0)
    printf("No any duplicate elements");
    else
     printf("First adjacent duplicate element is %d",adjacent_duplicate_elements(a,n));
    return 0;
}

int adjacent_duplicate_elements(int a[],int x)
{
    for(int i=0;i<=x-1;i++)
    {
        if(a[i+1]==a[i])
        return a[i];
    }
    return 0;
}