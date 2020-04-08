#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Value of Ingridients Required\n");
    scanf("%d", &n);

    int arr1[n];   // Quantity required to make Powerpuff girls
    int arr2[n];   // Quantity available in the Lab
    int arr3[n]; // To find the minimum element of the array

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d element that is ingridient required to make powerpuff girls\n", i + 1);
        scanf("%d", &arr1[i]);
        printf("Enter the value of %d element that is ingridient available in the lab\n", i + 1);
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n; i++)
    {
        arr3[i] = arr2[i] / arr1[i];
        printf("The value of %d element of arr3 is %d\n", i, arr3[i]);
    }
    // Now we have to find the minimum element of the arr3

    int min;
    min = arr3[0];
    for (int i = 0; i < n; i++)
    {
        if (arr3[i] < min)
        {
          min = arr3[i];
        }
    }
    
    printf("Minimum PowerPuff Girls that can be made is %d\n",min);
    return 0;
}
