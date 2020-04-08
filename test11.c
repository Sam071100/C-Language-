#include <stdio.h> // Coded by SHUBHAM SAMRAT 19155092
float sum_of_series(int n)
{
    int i,fact = 1;
    float sum = 0.0;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
        sum = sum + (fact / i);
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter Value of n:");
    scanf("%d", &n);

    printf("The value of series is %.4f",sum_of_series(n) );
}