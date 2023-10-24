// Write a program to check whether a given number is a four digit number or not..
#include<stdio.h>

int main(){
    int n;
    printf("Enter a number\t");
    scanf("%d",&n);
    if (n>999 && n<10000)
    printf("Four digit number");
    else
    printf("Not four digit number ");

    n>999 && n<10000 ? printf("Four digit number") : printf("Not four digit number"); 
return 0;
}