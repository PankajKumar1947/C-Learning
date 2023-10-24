#include<stdio.h>

int main(){
    int x=345;
    printf("Given number is %d\n",x);
    // for divisibilty test we should use modulus operator %
    //for printing the number without last digit we should use division operator by 10. Eg:-num/10
    printf("The number without last digit is %d\n",x/10);
    // for printing the last digit of number we will use modulus uperator by 10. Eg:- num%10
    printf("The last digit of given number is %d\n",x%10);
    //  num1%num2 :- If num1<num2 then Smaller of them will be printed 
    printf("%d\n",3%4);
    // modulus operator can't applied on real numbers. It will give error.
return 0;
}