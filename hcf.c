#include <stdio.h>// Euclidean concept
int hcf (int a, int b)
{
    if(a==0)
    {
        return b;
    }
    if(!b)
    {
        return a;
    }
    if (a>b)
    {
        return hcf(a%b, b);
    }
    return hcf(a, b%a);
}
int main()
{
    int a, b;
    printf("Enter the first and the second number\n");
    scanf("%d %d", &a, &b);
    printf("%d is your required LCM\n", a*b/hcf(a,b));
    printf("%d is your required HCF\n", hcf(a,b));
    return 0;
}
