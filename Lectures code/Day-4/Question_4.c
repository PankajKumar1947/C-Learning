// Write print statements to print following on the screen. Consider int a=5, b=6
#include<stdio.h>

int main(){
    int a =5, b=6;
    printf("%d %d",a,b);//Output>>> 5 6
    printf("\n");
    printf("a=%d and b=%d",a,b); // Output>>> a=5 and b=6
    printf("\n");
    printf("a=%d & b=%d",a,b); // Output>>> a=5 & b=6
    printf("\n");
    printf("Value of a is %d and Value of b is %d",a,b);// Output>>> Value of a is 5 and Value of b is 6
    printf("\n");
    printf("Sum of %d and %d is %d",a,b,a+b);// Output>>> Sum of 5 and 6 is 11
    printf("\n");
    printf("%d + %d = %d", a, b ,a+b);// Output>>> 5 + 6 = 11
return 0;
}