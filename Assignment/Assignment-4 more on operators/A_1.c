// Write a program to input a three digit numbers and display the sum of the digits.
#include<stdio.h>

int main(){
    int x;
    printf("Enter three digits numbers\n");
    scanf("%d",&x);
    int d1=x%10;
    int n=x/10;
    int d2=n%10;
    int d3=x/100;
    printf("Sum of digits of number %d is %d",x,d1+d2+d3);
return 0;
}