// Write a function to sort an array of any size(TSRN)..
#include<stdio.h>
void sorting_array(int a[],int );

int main()
{
    int x;
    printf("Enter size of an array");
    scanf("%d",&x);
    int a[x];
    printf("Enter numbers for sorting\n");
    for(int i=0;i<=x-1;i++)
      scanf("%d",&a[i]);
    sorting_array(a,x);
    return 0;
}

void sorting_array(int a[],int n)
{
    for(int r=0;r<=n;r++)
    for(int i=0;i<=n-1+r;i++)
    {
        if(a[i]>a[i+1])
        {
            int t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
    }
    for(int i=0;i<=n-1;i++)
    printf("%d      ",a[i]);
}