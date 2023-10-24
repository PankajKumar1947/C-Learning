// Write a program to check whether roots of a given quadratic equation are real and distinct, real and equal or imaginary roots.
#include<stdio.h>

int main(){
    float a,b,c;
    printf("Enter the coffiecient of x^2 ,x and constant term of quadratic equation ax^2+bx+c=0 \n");
    scanf("%f %f %f",&a,&b,&c);
    float d=b*b-4*a*c;
    if(d==0)
      printf("Roots are real and equal");
    else if (d>0)
      printf("Roots are real and distinct");
    else if (d<0)
      printf("Roots are imaginary");

return 0;
}