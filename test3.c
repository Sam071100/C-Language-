#include <stdio.h>// this is the case of stack overflow
void data()
{
       printf("This is stack overflow\n");
    data();
}
int main()
{
    data();
 
    return 0;
}
