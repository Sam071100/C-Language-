#include <stdio.h>
void printstr(char str[])
{
    int i=0;
    while (str[i]!='\0')
    {
       printf("%c",str[i]);// %c prints character by character
       i++;
    }
    
}
int main()
{
    //char str[]={'s','a','m','r','a','t'}; // if there will be no \0 character then the garbage value will also be printed.
    //char str[]={'s','a','m','r','a','t','\0'}; 
    char str[]="samrat"; // can be written like this without writing the null character
    printstr(str);
    return 0;
}
