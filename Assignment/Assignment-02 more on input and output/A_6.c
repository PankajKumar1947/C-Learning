// Write a program to input a character from the user and print its ASCII code.
#include<stdio.h>

int main(){
    char a;
    printf("Enter the character\n");
    scanf("%c",&a);
    printf("The ASCII code of %c is %d ",a,a);
return 0;
}