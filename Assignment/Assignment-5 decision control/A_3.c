// Write a program to check whether a given number is an even number or an odd number..
#include<stdio.h>

int main(){
    int n;
    printf("Enter a number \t");
    scanf("%d",&n);
    if(n%2==0){
        printf("Given number is even");
    }
    else{
        printf("Given number is odd");
    }
return 0;
}