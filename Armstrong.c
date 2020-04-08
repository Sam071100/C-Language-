#include <stdio.h>
int main()
{
    int r, c,n, sum=0;
    printf("ENTER YOUR NUMBER YOU WANT TO CHECK FOR ARMSTRONG NUMBER\n");
    scanf("%d",&n);
    int temp=n;
    while(n>0)
    {
        r=n%10;
        c=r*r*r;
        sum=sum+c;
        n=n/10;
    }

    if (sum==temp)
    {
        printf("Your input is a ARMSTRONG NUMBER\n");
    }
    else
    {
        printf("Your number is not a Armstrong number\n");
    }
    
    
    return 0;
}
