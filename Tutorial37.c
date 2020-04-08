#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[60];
};

int main()
{
    struct Student   shubham,harry, ravi;
    shubham.id=1;
    ravi.id=2;
    harry.id=3;
    ravi.marks=466;
    shubham.marks=500;
    harry.marks=250;
    shubham.fav_char='p';
    ravi.fav_char='p';
    harry.fav_char='p';
    strcpy(shubham.name, "Shubham samrat is the student of the Year");
    printf("Shubham got %d marks\n", shubham.marks);
    printf("Shubham's information is:  %s\n", shubham.name);
    printf("Shubham favourite character is %c\n", shubham.fav_char);
    return 0;
}
