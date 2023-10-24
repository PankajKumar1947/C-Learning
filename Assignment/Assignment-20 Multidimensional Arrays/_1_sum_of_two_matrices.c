// write a program to calculate the sum of two matrices each of order 3*3..
#include<stdio.h>

int main(){
    int m,n;
    printf("Enter order of matrices A and B\t");
    scanf("%d %d",&m,&n);
    int A[m][n],B[m][n];
    // Taking input in matrices A
    printf("Enter elements in Matrices A\n");
    for(int i=0;i<=m-1;i++)
    for(int j=0;j<=n-1;j++)
      scanf("%d",&A[i][j]);
    //Taking input in matrices B
    printf("Enter elements in Matrices B\n");
    for(int i=0;i<=m-1;i++)
    for(int j=0;j<=n-1;j++)
      scanf("%d",&B[i][j]);
    // Printing first matrix 
    printf("Matrix A is \n");
    for(int i=0;i<=m-1;i++)
    {
    for(int j=0;j<=n-1;j++)
      printf("%d ",A[i][j]);
    printf("\n");
     }
    // Printing second matrix
    printf("Matrix B is \n");
     for(int i=0;i<=m-1;i++)
     {
    for(int j=0;j<=n-1;j++)
      printf("%d ",B[i][j]);
      printf("\n");
     }
     // Printing Added matrix
     printf("The Added matrix A+B is\n");
     for(int i=0;i<=m-1;i++)
     {
    for(int j=0;j<=n-1;j++)
      printf("%d ",A[i][j]+B[i][j]);
      printf("\n");
     }
return 0;
}