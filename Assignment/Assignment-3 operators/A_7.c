// Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>

int main(){
    int x=10,y=23;
    x=x+y;
    y=x-y;
    x=x-y;
    printf("Swapped numbers are %d %d ",x,y);
return 0;
}