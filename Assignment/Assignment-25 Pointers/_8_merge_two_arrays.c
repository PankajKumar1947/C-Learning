/*Q.8 Write a function to merge two arays in a given array.
[void merge(int *arr1,int size1, int *arr2,int size2, int *arr3)]
*/
#include<stdio.h>
void merge(int *arr1, int , int *arr2, int, int *arr3);
int main()
{
    int s1,s2;
    printf("Enter the size of an array-1 and array-2:\n");
    scanf("%d %d",&s1,&s2);
    int ar1[s1],ar2[s2],ar3[s1+s2];
    printf("Enter elements in array-1:\n");
    for(int i=0;i<=s1-1;i++)
      scanf("%d",&ar1[i]);
    printf("Enter elements in array-2:\n");
    for(int j=0;j<=s2-1;j++)
     scanf("%d",&ar2[j]);
    merge(ar1,s1,ar2,s2,ar3);
    return 0;
}
void merge(int *arr1, int size1, int *arr2, int size2, int *arr3)
{
    int i=0;
    for(int j=0;j<=size1-1;j++)
    {
      arr3[i]=arr1[j];
      i++;
    }
    for(int j=0;j<=size2-1;j++)
    {
      arr3[i]=arr2[j];
      i++;
    }
    printf("Merged array is:\n");
     for(i=0;i<=size1+size2-1;i++)
       printf("%d ",arr3[i]);
}
