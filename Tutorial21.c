// Use of Recurssive functions
#include <stdio.h>
int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;                        // implementation of the function........
    }
    else
    {
        return (n * factorial(n - 1));
    }
}
int main()
{
    int num;
    printf("Enter the Number you want Factorial oFF:\n");      
    scanf("%d", &num);                                                // use of this function factorial........
    printf("The Value of %d! is %d\n ", num, factorial(num));
    return 0;
}
