// write a program which takes the length of the sides of a triangle as an input .
// Display whether the triangle is valid or not.
#include<stdio.h>

int main(){
    float a,b,c;
    printf("Enter sides of a triangle\n");
    scanf("%d %d %d",&a,&b,&c);
    if (a+b>c && a+c>b && b+c>a)
     printf("Valid triangle");
    else 
     printf("Not valid triangle");
return 0;
}