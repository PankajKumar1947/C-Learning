// Q.7 Write a function to sort an array of int types values[void sort(int *ptr, int size)]
#include<stdio.h>
void sort(int *ptr, int );

int main()
{
    int s;
    printf("Enter size of an array:\n");
    scanf("%d",&s);
    int arr[s];
    printf("Enter elements in array\n");
    for(int i=0;i<=s-1;i++)
     scanf("%d",&arr[i]);
    sort(arr,s);
    return 0;
}
void sort(int *ptr, int size)
{
    int i,r;
    int c;
    for(r=1;r<=size-1;r++)
     for(i=0;i<=size-1-r;i++)
     {
        if(ptr[i]>ptr[i+1])
        {
            c=ptr[i+1];
            ptr[i+1]=ptr[i];
            ptr[i]=c;
        }
     }
     printf("Sorted array is:\n");
     for(i=0;i<=size-1;i++)
      printf("%d ",ptr[i]);
}