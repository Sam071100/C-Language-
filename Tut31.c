#include <stdio.h>
void swap(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("The value of a and b after changing the formal parameter is: %d and %d\n",x,y);
    return;
}
int main()
{
    int a=34,b=74;
    printf( "The value of a and b is :%d and  %d\n",a,b);
    swap(a,b);
    printf("The value of a and b after changing the formal parameter is: %d and  %d\n ",a,b);//so here by call by value the value of the actual parameters(i.e. a and b) did not change even after changing the value of the formal Parameters.
    return 0;
}
