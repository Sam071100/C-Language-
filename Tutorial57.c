#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int m,n,j,k;
    printf("For entering the value of matrix 1:-\n");
    printf("Enter the ROWS and COLUM of Matrix 1\n");
    scanf("%d %d",&m,&n);
    int matrix1[m][n];
 
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j <n; j++)
        {
            printf("Enter the value of the %d,%d element of the matrix 1\n",i,j);
            scanf("%d",&matrix1[i][j]);
        }
        
    }
      printf("Printing the Matrix 1 entered by the user:-\n");
     for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
        
        printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
      printf("For entering the value of matrix 2:-\n");
    printf("Enter the ROWS and COLUM of Matrix 2\n");
     scanf("%d %d",&j,&k);
    int matrix2[j][k];
    for (int m = 0;  m < j; m++)
    {
        for (int n = 0; n < k; n++)
        {
            printf("Enter the value of the %d,%d element of the matrix 2\n",m,n);
            scanf("%d",&matrix2[m][n]);
        }
    }
    printf("Printing the Matrix 2 entered by the user:-\n");
     for (int m = 0; m < j; m++)
    {
        for (int n = 0; n < k; n++)
        {
        
        printf("%d ", matrix2[m][n]);
        }
        printf("\n");
    }
    if (n==j)
    { 

   printf("Multiplying the Matrix 1 with Matrix 2\n");
   int matrix[m][k];
   for (int i = 0; i < m; i++)
   {
       for (int j = 0; j < k; j++)
       {
           matrix[i][j]=0;
       }
       
   }
   for (int i = 0; i < m; i++)
   {
       for (int j = 0; j <k; j++)
       {
           for (int k = 0; k < n; k++)
           {
               matrix[i][j]+=matrix1[i][k]*matrix2[k][j];
           }
           
       }
       
   }
   printf("PRINTING YOUR MATRIX AFTER MULTIPLICATION:-\n");
   for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < k; j++)
        {
        
        printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    }
else
{
    printf("Correct The  order of Matrix 2 for its multiplication\n");
}
    getch();
   return 0;
}