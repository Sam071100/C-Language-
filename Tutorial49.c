#include <stdio.h>
int myvar=2420;// Global variable or external variable
int myfunc(int a, int b)
{
  extern int myvar; // Extern keyword takes the value of the Global variable
  
  //myvar= a +b;
      printf("The myvar is %d\n",myvar);
      myvar++;
  return myvar;
}
int main()
{
    // Declaration - Telling the compiler about the variable (No space reserved)
    // Definition -  Declaration + Space reservation
   int myvar= myfunc(3,5);// Here myvar is auto variable or local variable
    myvar= myfunc(3,5);// Here myvar is auto variable or local variable
    myvar= myfunc(3,5);// Here myvar is auto variable or local variable
   myvar= myfunc(3,5);// Here myvar is auto variable or local variable
    myvar= myfunc(3,5);// Here myvar is auto variable or local variable

    return 0;
}
