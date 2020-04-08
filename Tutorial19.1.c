#include <stdio.h>
void printstar(int a)
{
    for (int i = 0; i <= a; i++)
    {
        printf("%c",'*');
    }
    
    
}
int main()
{
    int n;
    printf("Enter the number of stars to be printed\n");
    scanf("%d",&n);
    printstar(n);
    // With arguments and without return value
    return 0;
}
