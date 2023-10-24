// Write a program to calculate the average of numbers stored in array of size 10. Take array from the user...
#include<stdio.h>

int main(){
    int a[10];
    int sum=0;
    float avg;
    printf("Enter 10 numbers\n");
    for(int i=0;i<=9;i++)
       scanf("%d",&a[i]);
    for(int i=0;i<=9;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/10.0;
    printf("%f",avg);
return 0;
}