//WAP to calculate sum of first N natural numbers...
#include<stdio.h>

int main(){
    int i=1,n,s=0;
    printf("Enter numbers N\n");
    scanf("%d",&n);
    while(i<=n)//for (i=1;i<=n;i++)
    {
        
        s=s+i;
        i++;
    }
    printf("Sum of first %d natural numbers is %d",n,s);
return 0;
}