// Write a program to input three characters froim the user and display characters with their corresponding ASCII codes.
#include<stdio.h>

int main(){
    char a,b,c;
    printf("Enter three characters\n");
    scanf("%c %c %c", &a,&b,&c);
    printf("%c - %d\n", a,a);
    printf("%c - %d\n", b,b);
    printf("%c - %d\n", c,c);
return 0;
}