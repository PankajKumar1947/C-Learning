// Write a program to swap values of two int variables
#include<stdio.h>

int main(){
    int x=10,y=23,z;
    z=x;
    x=y;
    y=z;
    printf("Swapped value of given number is %d %d", x,y);
return 0;
}