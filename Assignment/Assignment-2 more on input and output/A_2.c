// Write a program to calculate circumference of a circle.
#include<stdio.h>

int main(){
    int r;
    printf("Enter the radius of a circle\n");
    scanf("%d",&r);
    float c=2*3.14*r;
    printf("Circumference of circle of given radius %d is %0.2f",r,c);
return 0;
}