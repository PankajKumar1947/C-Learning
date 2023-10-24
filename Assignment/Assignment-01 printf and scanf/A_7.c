// Write a program to calculate sum of two integers. Numbers are taken from user through keyboard.
#include<stdio.h>

int main(){
    int a,b;
    printf("Enters two numbers \n");
    scanf("%d %d", &a, &b);
    printf("Sum of two numbers %d and %d is %d", a,b, a+b);
return 0;
}