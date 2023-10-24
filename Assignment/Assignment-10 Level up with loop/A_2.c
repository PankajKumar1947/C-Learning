// Write a print first N terms of fibonacci series..
#include<stdio.h>

int main(){
    int n,a=-1,b=1,c;
    printf("Enter number of terms of fibonacci series  ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        c=a+b;
        printf("%d     ",c);
        a=b;
        b=c;
    }
return 0;
}