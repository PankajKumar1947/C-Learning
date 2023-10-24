// Write a function to calculate the area of a circle(TSRS)
#include<stdio.h>
float area_of_circle(float);

int main()
{
    float k, r;
    printf("Enter radius of a circle\t");
    scanf("%f",&r);
    k=area_of_circle(r);
    printf("Area is %0.2f",k);
}

float area_of_circle(float r)
{
    float a;
    a=3.14*r*r;
    return a;
}