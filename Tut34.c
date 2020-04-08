#include <stdio.h>
void printstr(char str[])
{
    int i=0;
    while (str[i]!='\0')
    {
       printf("%c",str[i]);// %c prints character by character
       i++;
    }
    printf("\n");
    
}
int main()
{
    char str[34];
    gets(str);
    printf("This output is  via printf function %s\n",str);
    puts(str);
    printstr(str);
    return 0;// scanf is not recommended to take the string as the input as it does not take white spaces. so gets() is more preferable as compared to scanf()
}
