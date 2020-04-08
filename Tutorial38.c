#include <stdio.h>
typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[60];
}std ;
int main()
{
   std s1,s2;// here whole struct Student got converted into std by typedef keyword in c.
    s1.id=13;
    s2.id=14;
    printf("The value of s1 id is %d\n",s1.id);
    typedef unsigned long ul;// typedef changed the name of the keyword
    typedef int integer;// changed the name of the keyword.
    ul l1,l2,l3;
    integer a=24;
    printf("The value of a is %d\n", a);
    return 0;
}
