// Write a program to check whether a given number is positve or non positive.
#include<stdio.h>

int main(){
    int n;
    printf("Enter a number \t");
    scanf("%d",&n);
    if (n>0){
        printf("Given number is positive");
    }
    else{
        printf("Given number is non positive");
    }
return 0;
}