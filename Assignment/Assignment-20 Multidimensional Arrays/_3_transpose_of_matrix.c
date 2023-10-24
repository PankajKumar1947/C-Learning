// Write a program to print transpose of a matrix..
#include<stdio.h>

int main(){
    int m,n;
    printf("Enter rows and columns of a matrix:\n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Enter elements of a matrix\n");
    for(int i=0;i<=m-1;i++)
    for(int j=0;j<=n-1;j++)
      scanf("%d",&a[i][j]);

    //Printing matirx.
    printf("Entered matrix is :\n");
    for(int i=0;i<=m-1;i++)
    {
    for(int j=0;j<=n-1;j++)
      printf("%d ",a[i][j]);
      printf("\n");
    }

    //Printing Transpose of a matirx.
    printf("Transpose of a entered matrix is :\n");
    for(int i=0;i<=m-1;i++)
    {
    for(int j=0;j<=n-1;j++)
      printf("%d ",a[j][i]);
      printf("\n");
    }
return 0;
}