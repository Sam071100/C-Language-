#include <stdio.h>// firstly the structure was created then it was converted into union.
#include <string.h>
union Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main()
{
    union Student s1;// when it was made union only name was entact
    s1.id=1;
    s1.fav_char='p';
    s1.marks=45;
    strcpy(s1.name,"Shubham");// which is written last will be entact while other will show the garbage value.
    printf("The id is %d\n",s1.id);
    printf("The marks is %d\n",s1.marks);
    printf("The fav char is %c\n",s1.fav_char);
    printf("The name is %s\n",s1.name);
    return 0;
}
