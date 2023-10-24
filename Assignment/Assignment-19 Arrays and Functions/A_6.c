//Wrie a function to swap two elements of given array with specidied indices.
#include<stdio.h>
void swap(int a[],int,int ,int );

int main()
{
    int x,p,q;
    printf("Enter size of an array\n");
    scanf("%d",&x);
    printf("Enter n numbers\n");
    int a[x];
    for(int i=0;i<=x-1;i++)
       scanf("%d",&a[i]);
    printf("Enter indices numbers\n");
    scanf("%d %d",&p,&q);
    swap(a,x,p,q);
    return 0;
}
void swap(int a[],int n, int t, int s)
{
    int temp;
    temp=a[t];
    a[t]=a[s];
    a[s]=temp;
    for(int i=0;i<=n-1;i++)
     printf("%d    ",a[i]);
}