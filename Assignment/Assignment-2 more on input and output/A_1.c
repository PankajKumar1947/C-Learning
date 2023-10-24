// Write a program to calculate average of three integers. Numbers are given by the user.
#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter three numbers \n");
    scanf("%d %d %d", &a, &b, &c);
    float avg=(a+b+c)/3.0;
    printf("Average of %d, %d and %d is %.2f", a, b, c, avg);
return 0;
}