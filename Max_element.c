#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element of the array\n",i+1);
        scanf("%d",&arr[i]);
    }
    int max;
    max=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max=arr[i];
        }
    }
    printf("The max value of the array is %d\n",max);
    return 0;
}
