#include<stdio.h>

int main(){
    int a=3;
    float b=3.5;
    char c='A';
    printf("%d     %.2f      %c  ", a,b,c);//%d>>> denotes int, %f>>> denotes float, and %c>>> denotes char
    printf("\n");
    printf("%d",c);// It will print ASCII code of charachter assigned in c.
return 0;
}