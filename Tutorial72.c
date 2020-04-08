#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int sum(int a, int b)
{
    return a +b;
}
void greet()
{
    printf("Hello world my user Good Morning\n");
}
int main()
{

    greet();
    printf("The sum of 1 and 2 is %d\n",sum(1,2));// Testing the Function
    int(*fptr)(int,int);// Declaring  a Function pointer
    fptr=&sum;// Creating a Function pointer    
    int d=(*fptr)(4,6);// Dereferencing the Function pointer
    printf("The value of d is %d\n",d);
    return 0;
}
