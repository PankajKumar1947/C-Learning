// Write a program to calculate area of a rectange. Input appropriate data from the user.
#include<stdio.h>

int main(){
    int l,b;
    printf("Enter length and breadth of a rectangle\n");
    scanf("%d %d",&l,&b);
    printf("Area of rectangle whose length and breadth are %d , %d is %d", l,b,l*b);
return 0;
}