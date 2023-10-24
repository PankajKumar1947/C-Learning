// Write a funtion to find the smallest number from the given array of any size..(TSRS)
#include<stdio.h>
int smallest_number(int a[],int);

int main()
{
    int x;
    printf("Enter size of an array");
    scanf("%d",&x);
    int a[x];
    printf("Enter numbers\n");
    for(int i=0;i<=x-1;i++)
       scanf("%d",&a[i]);
    printf("Smallest number from entered array is %d",smallest_number(a,x));
    return 0;
}

int smallest_number(int a[],int n)
{
    int small=a[0];
    for(int i=0;i<=n-1;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
        }
    }
    return small;
}