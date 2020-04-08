#include <stdio.h>// asks the user to enter the information into the array
int main()
{
    int n,temp,l;
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
    printf("\nSorting the required array in the ascending order by Insertion sort................\n");
    for (int k = 1; k < n; k++)   // Insertion sorting algorithm....
    {
         temp=arr[k];
         l=k-1;
         while (l>=0 && arr[l]>temp)    
         {
             arr[l+1]=arr[l];
             l=l-1;
         }
         arr[l+1]=temp;
    }
    printf("Printing the sorted array\n");
    for (int m = 0; m < n; m++)
    {
        printf("%d\t",arr[m]);
    }
    return 0;
}
