//Write a function to find the greatest number from the given array of any size(TSRS)
#include<stdio.h>
int greatest_num(int ,int a[]);

int main()
{
    int x;
    printf("Enter how many numbers we have to enter in an array\n");
    scanf("%d",&x);
    printf("Enter n numbers\n");
    int a[x];
    for(int i=0;i<=x-1;i++)
       scanf("%d",&a[i]);
    printf("Greatest number of entered array is %d",greatest_num(x,a) );
    return 0;
}

int greatest_num(int n,int a[])
{
    int max=a[0];
    for(int i=0;i<=n-1;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
