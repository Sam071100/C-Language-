#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char c = '6';
    int a;
    if (c >= '0' && c <= '9') //to confirm it's a digit
    {
        a = c - '0';// This is done to convert the character into string and this is used for single character.
    }
    printf("%d\n",a);

    return 0;
}
