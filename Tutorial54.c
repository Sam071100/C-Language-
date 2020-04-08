#include <stdio.h>
#include <stdlib.h>
int* myFunc()
{
    int a=34,b=364,sum=a+b;
    return &sum;
}
int main()
{
  /*  // Case 1: De allocation of a memory block
    int* ptr=(int*)malloc(7*sizeof(int));
    ptr[0]=34;
    ptr[1]=36;
    ptr[2]=64;
    ptr[3]=5;
    printf("%d\n",ptr[1]);
    free(ptr); // ptr is now a danngling pointer.

    printf("%d\n",ptr[1]);
*/
// Case 2: Function returning local variable address
int*dangptr=myFunc(); // ptr is now a danngling pointer.
printf("%d\n", *dangptr);
    return 0;
}
