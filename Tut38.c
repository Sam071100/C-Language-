#include <stdio.h>
int main()
{
   //int* a,b;// here only a was made pointer and not b. b became normal integer variable.
    typedef int* intPointer;
    intPointer a,b;
    int c=89;
    a=&c;
    b=&c;// normal variable cannot take the address of the other variable. only pointers can store the address of the other variable.
    return 0;
}
