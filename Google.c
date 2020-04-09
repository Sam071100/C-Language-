#include <stdio.h>// FAULT  IS IN  PRINTING THE SECOND RECCURSING CHARACTER abccb and abcbc
#include <string.h>
void recur(char* str)
{
    int i,j, index=0;
    char temp;
    for ( i = 0; i < strlen(str); i++)
    {
        for ( j = i+1; j < strlen(str); j++)
        {
            if (str[i]==str[j])
            {
                index++;
                temp=str[j];
                goto end;
            }
        }
    }
    end:
    if (index>=1)
    {
        printf("The reccursing character is %c\n",temp);
    }
    else
    {
        printf("There is no reccursing character present.\n");
    }
    
}
int main()
{
    char str[56];
    printf("Enter your string\n");
    gets(str);
    recur(str);
    printf("Please help in making this code which takes in input the string and returns the first recurring character.\n");
    return 0;
}
