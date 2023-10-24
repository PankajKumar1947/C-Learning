/*
Write a menu driven program with the following options:
1.Calculate LCM of two numbers.
2.Calculate sum of the digits of a number.
3.Volume of a cuboid.
4.Check whether a given number is Prime or not.
5.Exit
*/
#include<stdio.h>

int main(){
    while(1)
    {
    int opt,a,b,L,n,sum=0,i=0,ln,br,ht,pn;
    printf("1.Calculate LCM of two numbers.\n");
    printf("2.Calculate sum of the digits of a number.\n");
    printf("3.Volume of a cuboid.\n");
    printf("4.Check whether a given number is Prime or not.\n");
    printf("5.Exit\n");
    printf("Choose an option\n");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:
        printf("Enter two numbers:");
        scanf("%d %d",&a,&b);
        for(L=a>b?a:b;L<=a*b;L++)
        {
            if(L%a==0 && L%b==0)
            {
                printf("LCM of %d and %d is %d\n\n",a,b,L);
                break;
            }
        }
        break;

        case 2:
        printf("Enter a number:\n");
        scanf("%d",&n);
        while(n)
        {
            sum=sum+n%10;
            n=n/10;
            i++;
        }
        printf("Sum of digits of a entered number is %d\n\n",sum);
        break;

        case 3:
        printf("Enter the length, breadth and height of a cuboid:");
        scanf("%d %d %d",&ln,&br,&ht);
        printf("Volume of a cuboid  is %d\n\n",ln*br*ht);
        break;

        case 4:
        printf("Enter a number:");
        scanf("%d",&pn);
        for(i=2;i<pn;i++)
        {
            if(pn%i==0)
            break;
        }
        if(pn==i)
        printf("Prime\n\n");
        else
        printf("Not Prime\n\n");
        break;

        case 5:
        printf("Exited Successfully\n Thank You\n Use again\n\n");
    }
    if(opt==5)
    break;
    }
return 0;
}