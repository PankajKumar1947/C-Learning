// Write a program to check whether a given number is a three digit number or not.
#include<stdio.h>

int main(){
    int n;
    printf("Enter a number\t");
    scanf("%d",&n);
    if (n>99&& n<1000){
        printf("Entered number is three digit number");
    }
    else{
        printf("Entered number is not three digit number");
    }
return 0;
}