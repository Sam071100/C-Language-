#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE* ptr=NULL;
    ptr=fopen("myfile.txt","a+");
    // ******************************************
    char c= fgetc(ptr);
    printf("The character that I read was %c\n",c);
    c= fgetc(ptr);
    printf("The character that I read was %c\n",c);
    c= fgetc(ptr);
    printf("The character that I read was %c\n",c);
    // fclose(ptr);
    // **********************************************


    // char str[56];
    // fgets(str,10, ptr); //It has printed only 9 characters as it is also counting the null character.
    // printf("Printing the string fetched from the File\n");
    // puts(str);
    // ***************************************************
//    fputc('o',ptr);
//    fputs("This is shubham samrat and he is coding in c language\n",ptr);
// *********************************************************************
    return 0;
}
