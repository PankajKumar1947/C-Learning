#include<stdio.h>
void add(int,int);

int main()
{
    int x=10,y=20;
    add(x,y);// actual arguments
    return 0;
}
void add(int a,int b)// formal arguments
{
    int c;
    c=a+b;
    printf("Sum is %d",c);
}