// Write a program to print size of an int, a float, a char and a double type variables.
#include<stdio.h>

int main(){
    int x,y,z,w;
    int a;
    float b;
    char ch;
    double d1;
    x=sizeof (a);
    y=sizeof (b);
    z=sizeof (ch);
    w=sizeof (d1);
    printf("Size of an int, a float, a char and a double type are respectively %d %d %d %d",x,y,z,w);
return 0;
}