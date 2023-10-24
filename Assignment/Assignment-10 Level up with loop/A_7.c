// WAP to print all prime numbers between two given numbers.
#include<stdio.h>

int main(){
    int a , b, x, i;
    printf("Enter two numbers..\n");
    scanf("%d %d",&a,&b);
    for (x = a; x <= b; x++)
    {
        for (i = 2; i < x; i++)
        {
            if (x % i == 0)
                break;
        }
        if (i == x)
            printf("%d\t", x);
    }
return 0;
}