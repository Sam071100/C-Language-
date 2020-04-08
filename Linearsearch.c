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
    int ele,found=0;
    printf("\nEnter the number you want to search in the array\n");
    scanf("%d",&ele);
    printf("Searching  the required element in the given array by linear search................\n");
    for (int k = 0; k <= n; k++)   // Linear search algorithm....
    {
        if (arr[k]==ele)
        {
            printf("Found at location %d\n",k);
            found=1;
            break;
        }
    }
    if (!found)
    {
        printf("Your number was not found in the array\n");
    }
    return 0;
}
