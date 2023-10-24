#include<stdio.h>
int main()
{
    int i, a[9]={1,8,6,2,5,4,8,3,7};
    int max,second_max;
    if(a[0]>a[1])
    {
        max=a[0];
        second_max=a[i];
    }
    else
    {
        max=a[1];
        second_max=a[0];
    }
    for(i=2;i<=8;i++)
    {
        if(a[i]>max)
        {
            second_max=max;
            max=a[i];
        }
        else
        {
            if(a[i]>second_max)
               second_max=a[i];
        }
    }
    printf("Second largest: %d",second_max);
    return 0;
}