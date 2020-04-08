#include <stdio.h>
int main()
{
    int a=34;
    int* ptr=NULL;
    if (ptr != NULL)// ERROR HANDLING
    {
          printf("The address of a is %d\n",*ptr); // here the program crashes
    }
    else
    {
        printf("The pointer is a null pointer and cannot be derefernce\n");
    }
    return 0;
}
