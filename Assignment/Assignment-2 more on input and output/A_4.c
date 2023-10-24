// Write a program to calculate volume of a cuboid.
#include<stdio.h>

int main(){
    int l,b,h;
    printf("Enter length, breadth and height of cuboid\n ");
    scanf("%d %d %d", &l ,&b ,&h);
    printf("Volume of Cuboid of length %d breadth %d height %d is %d ", l,b,h, l*b*h);
return 0;
}