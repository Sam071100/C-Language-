#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a, i=0;
    int* i2;
    while (i<4555555)
    {
        printf("Welcome to code with Samrat\n");
        i2 = malloc(34444*sizeof(int));
        if (i%100==0)
        {
            getchar();
        }
        
        i++;
    }
    free(i2);// Without this we will encounter a memory leak.
    return 0;
}
