#include <stdio.h>
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 67}; // here an array is declared with the name of arr
  int *arrayptr = arr;                // arr is used in the position of &arr[0] and has the same job and arrayptr pointer is declared pointing to array
  printf("Value at position 4 of the array is %d\n", arr[3]);
  printf("The address of the first element of the array is %d\n", &arr[0]);
  printf("The address of the first element of the array is %d\n", arr); // same as taught in the notes
  printf("The address of the second element of the array is %d\n", &arr[1]);
  printf("The address of the second element of the array is %d\n", arr + 1);
  printf("The value at address of the first element of the array is %d\n", *(&arr[0])); //'*' is used to get the value stored at that particular address
  printf("The value at address of the first element of the array is %d\n", arr[0]);
  printf("The value at address of the first element of the array is %d\n", *(arr));
  printf("The value at address of the second element of the array is %d\n", *(&arr[1]));
  printf("The value at address of the second element of the array is %d\n", *(arr + 1));
  printf("The value at address of the second element of the array is %d\n", arr[1]);
  // arr++; This line will throw error as the arr array is const and cannot be incremented but the pointer can be incremented
  arrayptr++; // Here we can use it as we have declared it as variable.
  return 0;
}
