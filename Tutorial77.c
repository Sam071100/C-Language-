#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

char *replaceword(const char *str, const char *oldword, const char *newWord)
{
    char *resultString;
    int i, count = 0;
    int newWordLength = strlen(newWord);
    int oldWordLength = strlen(oldword);

    // Lets count the number times old word in the string
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldword) == &str[i])
        {
            count++;
            //    Jump over this word
            i = i + oldWordLength - 1;
        }
    }

    // Making a new string to fit in the replaced words
    resultString = (char *)malloc(i + count * (newWordLength - oldWordLength) + 1); // Dynamically allocating the memory to the resultString array as we don't know how much space the string array will take as the new word can be shorter or can be even longer.

    i = 0;
    while (*str)
    {
        // compare the substring with result
        if (strstr(str, oldword) == str)
        {
            strcpy(&resultString[i], newWord);
            i += newWordLength;
            str += oldWordLength;
        }
        else
        {
            resultString[i] = *str;
            i += 1;
            str += 1;
        }
    }
    resultString[i] = '\0';
    return resultString;

}
int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;
    FILE *ptr3 = NULL;
    ptr = fopen("sam.txt", "r");
    ptr2 = fopen("genbill.txt", "a");// Genbill.txt is the database of the soap .
    ptr3=fopen("Billgen.txt","w");  //Billgen.txt is the bill generated for the current customer.
    char str[500];
    char str1[200];
    char str2[200];
    char str3[200];
    fgets(str, 500, ptr);

    printf("Enter the Name of the Customer\n");
    gets(str2);
    printf("Enter the Name of the airlines\n");
    gets(str3);
    printf("Enter the Contact number of the Airlines\n");
    gets(str1);

    // call the replace word function and generate new Str

    char *newstr = str;
    newstr = replaceword(str, "{{airplane}}", str3);
    newstr = replaceword(newstr, "{{name}}", str2);
    newstr = replaceword(newstr, "{{contact}}", str1);

    printf("The actual bill generated is:- %s\n", newstr);
    fprintf(ptr2, "\n%s\n", newstr);
    fprintf(ptr3, "\n%s\n", newstr);
    fclose(ptr);
    fclose(ptr2);
    fclose(ptr3);
    getch();
    return 0;
}
