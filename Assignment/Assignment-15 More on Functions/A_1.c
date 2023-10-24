// Write a function to calculate LCM of two numbers.(TSRS)
#include<stdio.h>
int find_lcm(int,int );

int main(){
    int x,y;
    printf("Enter two numbers\n");
    scanf("%d %d",&x,&y);
    int k=find_lcm(x,y);
    printf("LCM of %d and %d is %d",x,y,k);
return 0;
}
int find_lcm(int a,int b)
{
    int L;
    for(L=a>b?a:b;L<=a*b;L++)
    {
        if(L%a==0 && L%b==0)
        return L;
    }
    return 0;
}