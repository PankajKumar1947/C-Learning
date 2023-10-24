/* Q.6 Write a function to swap strings of two char arrays.*/
#include<stdio.h>
#include<string.h>
void swap(char *str1, char *str2);
int main()
{
    char string1[50],string2[50];
    printf("Enter two string :\n");
    fgets(string1,50,stdin);
    fgets(string2,50,stdin);
    swap(string1,string2);
    return 0;
}
void swap(char *str1, char *str2)
{
    str1[strlen(str1)-1]='\0';
    str2[strlen(str2)-2]='\0';
    char temp[20];
    for(int i=0;str1[i] || str2[i];i++)
    {
        temp[i]=str1[i];
        str1[i]=str2[i];
        str2[i]=temp[i];
    }
    
    printf("After swapping %s and %s",str1,str2);
}