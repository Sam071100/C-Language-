#include <stdio.h>
int takenumber()
{
    int i;
    printf("Enter a number\n");
    scanf("%d", &i);
    return i;
}
int main()
{
    int c;
    c=takenumber();
    printf("The number entered is %d\n", c);
    // Without arguments and with return value
    return 0;
}
