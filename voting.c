#include <stdio.h>


int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("You have entered %d as your age\n", age);
    if (age>=18)
    {
    printf("You are eligible for voting. Hope to see you in next Elections.\n");
    }
    else if (age>=12)
    {
        printf("You are now only adolscent.Please go and prepare for IITJEE\n");
    }
    else if (age>=3)
    {
        printf("You are between 3 and 11 years of age so go and concentrate on your childhood and Please don't forget to vote after 18 years of age.....\n");
    }
    
    
    else
    {
        printf("You are too small for Voting.\n");
    }
  
    return 0;
    
     
}
