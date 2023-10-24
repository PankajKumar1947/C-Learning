// Write a function to calculate HCF of two numbers.(TSRS)
#include<stdio.h>
int find_hcf(int,int );

int main(){
    int x,y;
    printf("Enter two numbers\n");
    scanf("%d %d",&x,&y);
    int k=find_hcf(x,y);
    printf("HCF of %d and %d is %d",x,y,k);
return 0;
}
int find_hcf(int a,int b)
{
    int H;
    for (H=a<b?a:b;H>=1;H--)
    {
        if (a%H==0 && b%H==0)
        return H;
    }
    return 0;
}