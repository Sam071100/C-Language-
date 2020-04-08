#include <stdio.h>
int main()
{ 
    int n,r,sum=0,weight=1;
    printf("Enter the binary Number\n");
    scanf("%d",&n);
    while (n!=0)
    {
        r=n%10;
        sum=sum+r*weight;
        n=n/10;
        weight=weight*2;
    }
    printf("The Decimal Equivalent of the Binary Number is %d\n ",sum);
    printf("CREDITS:-SHUBHAM SAMRAT\n");
    return 0;
}
