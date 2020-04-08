#include <stdio.h>// asks the user to enter the information into the array
int main()
{
    int n,temp;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
    {
      printf("Enter the value of the %dth element of the array\n",i);
      scanf("%d",&arr[i]);
    }
    printf("Printing the entered array by the user\n");
    for (int j = 0; j < n; j++)
    {
        printf("%d\t",arr[j]);
    }
    printf("\nSorting the required array in the ascending order by bubble sort................\n");
    for (int k = 0; k < n-1; k++)   // Bubble sorting algorithm....
    {
        for (int l = 0; l < n-1; l++)
        {
            if (arr[l]>arr[l+1])
            {
               temp= arr[l];
               arr[l]=arr[l+1];
               arr[l+1]=temp;
            }
            
        }
        
    }
    printf("Printing the sorted array\n");
    for (int m = 0; m < n; m++)
    {
        printf("%d\t",arr[m]);
    }
    return 0;
}
