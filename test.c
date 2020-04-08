#include <stdio.h>
int z=0;// here this z is global variable and can be used in any function
void sam()
{
    printf("The value of z is %d\n", z);
}
int main()
{
    int y=12;// Here 'y' is the local variable as it is defined and declared in a functon so it cannot be used outside this function.
    sam();
    printf("The value of y is %d\n",y);
    return 0;
}

