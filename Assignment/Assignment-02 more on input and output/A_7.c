// Write a program to input an ASCII code from the user and display characters with their corresponding ASCII codes.
#include<stdio.h>

int main(){
    int a;
    printf("Enter an ASCII code\n");
    scanf("%d",&a);
    printf("Character of ASCII code %d is %c", a,a);
return 0;
}