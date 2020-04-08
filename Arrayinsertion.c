#include <stdio.h>// asks the user to enter the information into the array
void arrayinsertion()
{
   int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
    {
      printf("Enter the value of the %dth element of the array\n",i);
      scanf("%d",&arr[i]);
    }
    printf("Printing the array entered by the user\n");
    for (int j = 0; j < n; j++)
    {
        printf("%d\t",arr[j]);
    }
}
int main()
{
    arrayinsertion();
    return 0;
}
