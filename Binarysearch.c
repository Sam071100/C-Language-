#include <stdio.h>// For binary search the array should be sorted so here we are sorting the array with the help of bubble sort.
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
    int low=0, high=n-1,key,mid;
    printf("\n Enter the number you want to search in the array\n");
    scanf("%d",&key);
    mid=(low+high)/2;
    while (low<=high)
    {
        if(key< arr[mid])
        {
            high=mid-1;
        }
        else if (key>arr[mid])
        {
            low=mid+1;
        }
        else if (key==arr[mid])
        {
          printf("Found your number at %d location\n starting from 0 index",mid);
          break;
        }
    }
    return 0;
}

