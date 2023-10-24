// Assume price of 1 USD is INR 84.23. Write a program to take the amount in INR and convert it into USD.
#include<stdio.h>

int main(){
    int a;
    printf("Enter amount in INR\t");
    scanf("%d",&a);
    printf("%d INR = %0.2f USD",a,a/84.23);
return 0;
}