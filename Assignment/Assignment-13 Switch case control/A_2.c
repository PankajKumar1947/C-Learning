/*
Write a menu driven program with the following options:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit
*/
#include<stdio.h>

int main(){
    int n,a,b;
    while(1)
    {
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
    printf("Please Enter an option number from above\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("Enter two numbers:\n");
        scanf("%d %d",&a,&b);
        printf("Addition of %d and %d is %d\n\n",a,b,a+b);
        break;

         case 2:
        printf("Enter two numbers:\n");
        scanf("%d %d",&a,&b);
        printf("Difference of %d and %d is %d\n\n",a,b,a-b);
        break;

         case 3:
        printf("Enter two numbers:\n");
        scanf("%d %d",&a,&b);
        printf("Product of %d and %d is %d\n\n",a,b,a*b);
        break;

         case 4:
        printf("Enter two numbers:\n");
        scanf("%d %d",&a,&b);
        printf("Quotient of %d and %d is %d\n\n",a,b,a/b);
        break;

        case 5:
        printf("Program exited successfully\n Thank You for using me\n");
         break;
    }
    if (n==5)
    break;
    }
return 0;
}