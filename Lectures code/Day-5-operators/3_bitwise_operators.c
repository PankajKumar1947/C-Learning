//Bitwise operators are & , | , ^ , >> , << 
#include<stdio.h>

int main(){
    int x=25&57;// &--> AND operator
    printf("%d\n",x);
    int y=39|83;// |--> OR operator
    printf("%d\n",y);
    int z=60^29;// --> XOR operator
    printf("%d\n",z);
    int a=~5;// --> NOT operator
    printf("%d\n",a);
    int b=53>>2;// --> Right shift opertaor
    printf("%d\n",b);
    int c=12<<3;// --> Left shift operator
    printf("%d\n",c);
return 0;
}