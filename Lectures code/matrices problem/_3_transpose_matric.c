#include<stdio.h>

int main(){
    int m,n;
    printf("Enter order of a matrices\n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Enter numbers in matrices\n");
    for(int i=0;i<=m-1;i++)
    for(int j=0;j<=n-1;j++)
      scanf("%d",&a[i][j]);
    //Printing matrix
    printf("The matrix is \n");
    for(int i=0;i<=m-1;i++)
    {
    for(int j=0;j<=n-1;j++)
      printf("%d ",a[i][j]);
      printf("\n");
    }
    // Transpose of matrix
    printf("The Transpode of given matrix is \n");
    for(int i=0;i<=m-1;i++)
    {
    for(int j=0;j<=n-1;j++)
      printf("%d ",a[j][i]);
      printf("\n");
    }
return 0;
}