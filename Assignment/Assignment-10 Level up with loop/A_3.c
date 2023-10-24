// WAP to check whether a given number is there in the fibonacci series..
#include<stdio.h>

int main(){
    int a=-1,b=1,n,c;
    printf("Enter a number      ");
    scanf("%d",&n);
    for(int i=0; ;i++)
    {
        c=a+b;
        if(c==n)
        {
            printf("%d is %dth term of fibonacci series.",c,i);
            break;
        }
        if(c>n)
        {
            printf("%d is not in fibonacci series",n);
            break;
        }
        a=b;
        b=c;
    }
return 0;
}