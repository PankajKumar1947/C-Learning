// Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right..
// For example, if array of size 5 is [32,29,40,12,70]; n is 2 and d is left, then resulting array after left rotation 2 times is [40,12,70,32,29]
#include<stdio.h>
void rotaing_array();

int main()
{
    rotaing_array();
}

void rotaing_array()
{
    int a[10],n;
    printf("Enter numbers");
    for(int i=0;i<=9;i++)
      scanf("%d",&a[i]);
    printf("Enter number of rotation");
    scanf("%d",&n);
    for(int j=1;j<=n;j++)
    for(int i=0;i<=n-1;i++)
    {
        a[i+1]=a[i];
        a[i]=a[9];
    }
    for(int i=0;i<=9;i++)
    printf("%d",a[i]);
}