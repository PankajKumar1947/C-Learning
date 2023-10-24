/*
Write a menu driven program with the following options.
1.Factorial of a number.
2.Check Even and number.
3.Area of circle.
4.Sum of first N natural numbers
5.Exit
*/
#include<stdio.h>

int main(){
    while(1)
    {
    int n,a,b,s,i=1,sum=0,fact=1;
    float c;
    printf("1.Factorial of a number.\n");
    printf("2.Check Even and number.\n");
    printf("3.Area of circle.\n");
    printf("4.Sum of first N natural numbers\n");
    printf("5.Exit\n");
    printf("Choose an option from above\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("Enter a number\n");
        scanf("%d",&a);
        while(i<=a)
        {
            fact=fact*i;
            i++;
        }
        printf("Factorial of %d is %d\n\n",a,fact);
        break;

        case 2:
        printf("Enter a number\n");
        scanf("%d",&b);
        if(b%2==0)
        printf("%d is an even number\n\n",b);
        else
        printf("%d is odd number\n\n",b);
        break;

        case 3:
        printf("Enter radius of a circle\n");
        scanf("%f",&c);
        printf("Area of circle of radius %0.2f is %0.2f\n\n",c,3.14*c*c);
        break;

        case 4:
        printf("Enter a natural number\n");
        scanf("%d",&s);
        while(i<=s)
        {
            sum=sum+i;
            i++;
        }
        printf("Sum of first %d natural numbers is %d\n\n",s,sum);
        break;

        case 5:
        printf("Thank for using.\n Have a nice day\n\n");
        break;
    }
    if(n==5)
    break;
    }
return 0;
}