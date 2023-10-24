// Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number.
// Example- number=234 and digit =9 then the resulting number is 2349
#include<stdio.h>

int main(){
    int x,y;
    printf("Enter a number and digit respectively\n");
    scanf("%d %d",&x,&y);
    int z=x*10+y;
    printf("Appended number is %d",z);
return 0;
}