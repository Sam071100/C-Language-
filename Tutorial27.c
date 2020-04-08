#include <stdio.h>
int main()
{
    char a='3';
    char* ptra= &a;  // char  is of 1 size int
    printf("%p\n", ptra);
    printf("The value of a is %c\n", *ptra);
    ptra++; // here we added 1 into ptra
    printf("%p\n", ptra); // the address of a
    printf("%p\n", ptra+1);
    return 0;
}
