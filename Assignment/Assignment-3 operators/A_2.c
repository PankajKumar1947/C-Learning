// Write a program to calculate size of a real constant.
#include<stdio.h>

int main(){
    float x;
    printf("Enter a real constant\t");
    scanf("%f",&x);
    int y=sizeof (x);
    printf("Size of real constant %f is %d", x,y);
return 0;
}