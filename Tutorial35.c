#include <stdio.h>
#include <string.h>
int main()
{
  char s1[]="shubham";
  char s2[]="samrat";
  char s3[54];
  //puts(strcat(s1,s2));
     printf("The length of s1 is %d\n",strlen(s1));
     printf("The length of s2 is %d\n",strlen(s2));
     printf("The reversed string s1 is: ");
     puts(strrev(s1));
     puts(strrev(s2));
     //s3= strcat(s1, s2); this is an errror as s3 is an array.
     strcpy(s3, strcat(s1,s2)); // the string gets copied into s3 string.
     puts(s3);
     printf("The strcmp for s1, s2 returned %d",strcmp(s1, s2));// here bcoz 'm' of s1 comes first as compared to 't' of s2 so a -1 is returned
    return 0; 
}
