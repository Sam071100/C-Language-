#include <stdio.h>
int main()
{
    int n,r,i,j;
    printf("Number of rows to be Printed\n");
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {
        for(i=n-r;i>=1;i--)
        {
            printf(" ");
        }
        for(j=1;j<=r;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
