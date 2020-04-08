#include <stdio.h>
void swap(int*x, int* y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main()
{
    int a=34,b=74;
    printf("%d and  %d\n",a,b);
    swap(&a,&b);
    printf("%d and  %d\n ",a,b);// so by call by reference the value of the actual parameters was also changed by changing the value of the formal parameters.
    return 0;
}
