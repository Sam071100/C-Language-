#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// here it is a command line Calculator and input will be taken in the terminal and not from scanf() Function.
int main(int argc, char  *argv[])
{
    char * operation;
    int num1, num2;

    operation = argv[1];
    num1 = atoi(argv[2]); // Returns the integer from the String this Function atoi().
    num2 = atoi(argv[3]);

    printf("Operation is %s\n",operation);
    printf("NUM1 is %d\n",num1);
    printf("NUM2 is %d\n",num2);

   if (strcmp(operation,"add")==0)
    {
        printf("%d\n",num1+num2);
    } 
   else if (strcmp(operation,"subtract")==0)
   {
       printf("%d\n",num1-num2);
   }
    else if (strcmp(operation,"multiply")==0)
   {
       printf("%d\n",num1*num2);
   } else if (strcmp(operation,"divide")==0)
   {
       printf("%d\n",num1/num2);
   }
   else
   {
       printf("Wrong Operation Entered\n");
   }
    printf("The input was taken by the command line arguments\n");
    return 0;
}
