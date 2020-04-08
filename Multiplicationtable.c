#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char name[56];
    int num, i;
    printf("Enter Your Name\n");
    gets(name);
    printf(" %s enter the Number you want Multiplication Table Off:-\n",name);
    scanf("%d", &num);

    for ( i = 1; i < 11; i++)
    {
       printf("%d X %d=%d\n",num,i,num*i);
    }
    getch();
    return 0;
}
