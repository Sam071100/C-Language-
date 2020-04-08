#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    int count=0;
    char sam[100]="My name is Shubham Samrat";
    char str[100];
    printf("Enter the word which you want to find common\n");
    gets(str);
    for (int i = 0; sam[i] != '\0'; i++)// here sam is not a pointer
    {
        if (strstr(&sam[i],str)==&sam[i])
    {
         count++;

        printf("Here we got the common Bingo....\n");
         printf("the value of i is %d\n",i);
        
    }
        else
        {
            printf("We don't have anything in common\n");
            printf("the value of i is %d\n",i);
        }
        
    }
    printf("The value of count is %d\n",count);
    
    getch();
    return 0;
}
