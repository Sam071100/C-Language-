#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    printf("File name is %s\n",__FILE__);// Predefined Macro
    printf("Today's date is %s\n",__DATE__);// Predefined Macro
    printf("Time now  is %s\n",__TIME__);// Predefined Macro
    printf("Line Number is %d\n",__LINE__);// Predefined Macro
    printf("ANSI: is %d\n",__STDC__);//here we can see that our compiler is compiling according to the standards of ANSI:  
    return 0;
}
