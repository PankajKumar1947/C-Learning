/*
Write a menu driven program with the following options:
1. Check whether a given set of three numbers are lengths of an isosceles triangle or not.
2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not..
3. Check whether a given set of three numbers are equilateral triangle or not ..
4. Exit.
*/
#include<stdio.h>

int main(){
    int n,a,b,c;
    while(1)
    {
    printf("1. Check whether a given set of three numbers are lengths of an isosceles triangle or not.\n");
    printf("2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not..\n");
    printf("3. Check whether a given set of three numbers are equilateral triangle or not ..\n");
    printf("4. Exit.\n");
    printf("Choose an option from above\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1: 
        printf("Enters three numbers\n");
        scanf("%d %d %d",&a,&b,&c);
        if(a==b|| b==c || c==a)
        printf("Given set of numbers are length of an isosceles triangle\n\n");
        else
         printf("Given set of numbers are not length of an isosceles triangle\n\n");
         break;

       case 2: 
        printf("Enters three numbers\n");
        scanf("%d %d %d",&a,&b,&c);
        if(a*a +b*b==c*c|| c*c+a*a==b*b || b*b+c*c==a*a)
        printf("Given set of numbers are length of an right angled triangle\n\n");
        else
         printf("Given set of numbers are not length of an right angled triangle\n\n");
         break;

      case 3: 
        printf("Enters three numbers\n");
        scanf("%d %d %d",&a,&b,&c);
        if(a==b&& b==c&& c==a)
        printf("Given set of numbers are length of an equilateral triangle\n\n");
        else
         printf("Given set of numbers are not length of an equilateral triangle\n\n");
         break;

        case 4:
        printf("Thank you for using me\n");
        break;
  
    }
    if(n==4)
    break;
    }

return 0;
}