// Write a program to calculate the sum of numbers stored in an array of size 10. Take arrays values from the user...
#include<stdio.h>

int main(){
    int a[10];
    int sum=0;
    printf("Enter 10 numbers\n");
    for(int i=0;i<=9;i++)
       scanf("%d",&a[i]);
    for(int i=0;i<=9;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
return 0;
}