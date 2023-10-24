// WAP to check whether two given numbers are co-prime numbers or not..
#include<stdio.h>

int main(){
    int a,b,H;
    printf("Enter two numbers.\n");
    scanf("%d %d",&a,&b);
    for(H=a<b?a:b;H>=1;H--)
    {
        if(a%H==0 && b%H==0)
        break;
    }
    if(H==1)
     printf("%d and %d are co-prime numbers",a,b);
    else
    printf("%d and %d are not co-prime numbers",a,b);
return 0;
}