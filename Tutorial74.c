#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int sum(int a, int b)
{
    return a+b;
}
void greethello(int(*fptr)(int, int))
{
    printf("Hello\n");
    printf("The sum of 5 and 7 is %d\n",fptr(5,7));
}
void greetgm(int(*fptr)(int, int))
{
    printf("Good Morning USER\n");
    printf("The sum of 5 and 7 is %d\n",fptr(5,7));
}
int main()
{
    int(*ptr)(int,int);
    ptr=&sum;
    greetgm(ptr);
    greethello(ptr);
    return 0;
}
