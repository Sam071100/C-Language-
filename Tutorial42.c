#include <stdio.h>
int b=34;// this is a global variable since it is declared outside main()
int func1(int b)// yaha wala b is formal parameter
{
    static int myvar=98;
   // printf("The address of b inside func1 is %d\n",&b);
    printf("The value of myvar is %d\n",myvar);
    myvar++;
    return b + myvar;
}
int main()
{
    int b = 344;// yaha wala 'b' is actual parameter
   // printf("The address of b inside main is %d\n",&b);// afetr running the code you will find the address of both the b to be different.
    int val = func1(b);
     val = func1(b);
    int *ptr = &val;
   // printf("The value of func1 is %d\n",val );
    return 0;
}
