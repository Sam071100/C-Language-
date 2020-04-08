#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main()
{
    printf("For entering the value of matrix 1:-\n");
    int matrix1[2][2];
 
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the value of the %d,%d element of the matrix 1\n",i,j);
            scanf("%d",&matrix1[i][j]);
        }
        
    }
      printf("Printing the Matrix 1 entered by the user:-\n");
     for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
        
        printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
      printf("For entering the value of matrix 2:-\n");
    int matrix2[2][2];
    for (int m = 0;  m < 2; m++)
    {
        for (int n = 0; n < 2; n++)
        {
            printf("Enter the value of the %d,%d element of the matrix 2\n",m,n);
            scanf("%d",&matrix2[m][n]);
        }
    }
    printf("Printing the Matrix 2 entered by the user:-\n");
     for (int m = 0; m < 2; m++)
    {
        for (int n = 0; n < 2; n++)
        {
        
        printf("%d ", matrix2[m][n]);
        }
        printf("\n");
    }
   printf("Multiplying the Matrix 1 with Matrix 2\n");
   int matrix[2][2];
   for (int i = 0; i < 2; i++)
   {
       for (int j = 0; j < 2; j++)
       {
           matrix[i][j]=0;
       }
       
   }
   for (int i = 0; i < 2; i++)
   {
       for (int j = 0; j < 2; j++)
       {
           for (int k = 0; k < 2; k++)
           {
               matrix[i][j]+=matrix1[i][k]*matrix2[k][j];
           }
           
       }
       
   }
   printf("PRINTING YOUR MATRIX AFTER MULTIPLICATION:-\n");
   for (int m = 0; m < 2; m++)
    {
        for (int n = 0; n < 2; n++)
        {
        
        printf("%d ", matrix[m][n]);
        }
        printf("\n");
    }
    getch();
   return 0;
}