#include<stdio.h>

int main(){
   /* int x=-5,y=+4;
    printf("%d        %d",x,y);
    */
/*
//Increment operators
   int x=5;
   x++;//post increment operator.
   printf("%d\n",x);
   ++x;//pre increment operator.
   printf("%d",x);
   */

//sizeof() operator
/*int x;
x=sizeof(float);
printf("float - %d bytes\n",x);// 4(output will be in bytes bydefault) 
x=sizeof(double);
printf("double - %d\n",x);
x=sizeof(char);
printf("char - %d",x);
*/

int x;
x=sizeof(5);
printf("%d\n",x);
x=sizeof(5.6);// Real constants are by default of double type
printf("%d",x);
return 0;
}