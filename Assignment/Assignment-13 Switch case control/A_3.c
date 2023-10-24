// WAP which takes the day number of week and displays a unique greeting message for the day...
#include<stdio.h>

int main(){
    int n;
    printf("Enter week number:\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("It's Sunday!  Enjoy it with your Family");
        break;

        case 2:
        printf("It's Monday!  Let's again dive into work");
        break;

        case 3:
        printf("It's Tuesday!  God Hanuman will blessed us");
        break;

        case 4:
        printf("It's Wednesday!  ");
        break;

        case 5:
        printf("It's Thursday!  ");
        break;

        case 6:
        printf("It'a Friday!  ");
        break;

        case 7:
        printf("It's Saturday!  It's time for enjoyment with friends\n");
        break;

    }
return 0;
}