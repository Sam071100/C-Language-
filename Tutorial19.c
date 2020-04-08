#include <stdio.h>
int sum(int* a, int* b)
{
    return *a+*b; // Function should be declared first then it should be called in main.
}
int difference(int* x, int* y)
{
    return (*x-(*y));// the difference is not working
}
int main()
{
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d %d",&a, &b);
    a=sum(&a, &b);
    b=difference(&a, &b);

    printf("The sum is %d\n", a);
    printf("The difference is %d\n", b);
    return 0;
    // With arguments and with return value
}
