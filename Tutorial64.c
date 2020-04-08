#include <stdio.h>
#include <string.h>
int main()
{
    FILE* ptr=NULL;
    char string[123];
    char str[100];  
    printf("Enter the name of the Candidate\n");
    gets(string);
    printf("Enter the information about the Candidate\n");
    gets(str);

//**************READING THE FILE***************
   /* ptr=fopen("myfile.txt","r");
    fscanf(ptr, "%s",string);
    printf("The content of this File has %s\n",string);
    */
//***************WRITING THE FILE***************
    ptr=fopen("myfile.txt","a");
    fprintf(ptr, "%s\n", string);
    fprintf(ptr, "%s\n", str);
    return 0;
}
