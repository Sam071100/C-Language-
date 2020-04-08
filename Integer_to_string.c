#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    long int n;
    printf("Enter the size of the Array\n");
    scanf("%ld",&n);

    char arr[n+1];
   long int num;
    char r;
    printf("Enter the value of integer which you Want to Convert back into String\n");
    scanf("%ld",&num);
    for (int i = 0; i < n && num >=0; i++)
    {
        r = num%10;
        r= r+'0';
        arr[n-1-i]=r;
        num =num/10;
    }
    arr[n]='\0'; // Assinging character array's last element to null so that it can represent the String.
    printf("Printing the String back\n");
    puts(arr);
    return 0;
}
