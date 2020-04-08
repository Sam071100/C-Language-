#include <stdio.h>
#include <string.h>


int main()
{
    char str[1000];
    char stri[1000];
    printf("Enter the string in the lower case\n");
    gets(str);
    printf("Printing the string entered by the user\n");
    printf("%s\n",str);
    printf("%s\n",strupr(str));
    printf("Enter the string in the Upper case\n");
    gets(stri);
    printf("%s",strlwr(stri));
    return 0;
}
