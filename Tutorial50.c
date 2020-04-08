#include <stdio.h>
#include <stdlib.h>
int main()
{
    int chars,i=0;
    char a, b;
    char*ptr;
    while (i<3)
    {
        printf(" Employee %d: Enter the number of characters in your Employee Id\n",i+1);
        scanf("%d",&chars);
        printf("Enter the value of a\n");
        scanf("%c",&a);
         printf("Enter the value of b\n");
        scanf("%c",&b);
        ptr=(char*)malloc((chars+1)*sizeof(char));
        printf("Enter your Employee Id\n");
        scanf("%s",ptr); // here '&' was not used as ptr is itself holding the address of the array and we cannot use gets().
        printf("Your Employee Id is %s\n",ptr);
        free(ptr);
        i+=1;
    }
    
    
    return 0;
}
