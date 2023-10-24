// WAP to print all prime numbers under 100...
#include <stdio.h>

int main()
{
    int a = 2, b = 100, x, i;
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