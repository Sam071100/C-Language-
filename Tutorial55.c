#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a=334;
    int* ptr;
    printf("%d\n",*ptr);
    *ptr=34;
    printf("%d\n",*ptr);
    ptr=&a;
    printf("%d\n",*ptr);
    return 0;
}
