#include <stdio.h>
#include <conio.h>
int main()
{
    int n,r,sum=0;
    printf("Enter the number you want reverse of\n");
    scanf("%d",&n);
    int temp=n;
    while (n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    printf("The reverse of the number is %d\n",sum);
    if (temp==sum)
    {
        printf("It is a Palindrome Number\n");
    }
    else
    {
        printf("It is not a Palindrome Number\n");
    }
    getch();
    
    return 0;
}
