#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    char *resultstring;
    char str1[100];
    printf("Enter the string for which u want to check\n");
    gets(str1);
    char *sam = str1;
    char str[100];    // Here str contains the old word.
    char string[100]; // Here string contains the new word.
    int count = 0, i = 0;
    printf("Enter the word which you want to find common\n");
    gets(str);
    printf("Enter the new word which you want to replace in place of old word\n");
    gets(string);
    int oldWordLength = strlen(str);
    int newWordLength = strlen(string);
    while (*sam)
    {
        if (strstr(sam, str) == sam) // Here sam is a pointer.
        {
            strcpy(&resultstring[i], string);
            count++;
            printf("Here we got the common Bingo....\n");
            printf("the value of i is %d\n", i);
            i += newWordLength;
            sam = sam + oldWordLength;
        }
        else
        {

            resultstring[i] = *sam;
            printf("We don't have anything in common\n");
            printf("the value of i is %d\n", i);
            i += 1;
            sam += 1;
        }
    }
    resultstring[i] = '\0';
    printf("The value of count is %d\n", count);
    printf("The new string after updation is\n");
    puts(resultstring);

    getch();
    return 0;
}
