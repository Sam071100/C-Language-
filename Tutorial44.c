#include <stdio.h>
#include <conio.h>
#include <string.h>
struct Driver
{
    char drivername[56];
    char Liscenceno[25];
    char route[56];
    int kms;
};

int main()
{
    FILE* ptr=NULL;
    struct Driver driv1, driv2, driv3;
    printf("Choose which driver wants to enter the details\n");
    printf("1. Driver1\n");
    printf("2. Driver2\n");
    printf("3. Driver3\n");
    int a;
    scanf("%d", &a);
    getchar();
    switch (a)
    {
    case 1:
        printf("Enter the Driver1 name\n"); // Names ke beech mai space dene se problem aa raha hai. please rectify it.
        gets(driv1.drivername);
        printf("Enter the Driver1 Liscence number\n");
        scanf("%s", &driv1.Liscenceno);
        printf("Enter the Route\n");
        getchar();
        gets(driv1.route);
        printf("Enter the Kms travelled\n");
        scanf("%d", &driv1.kms);
        break;
    case 2:
        printf("Enter the Driver2 name\n");
        gets(driv2.drivername);
        printf("Enter the Driver2 Liscence number\n");
        scanf("%s", &driv2.Liscenceno);
        printf("Enter the Driver2 Route\n");
        getchar();
        gets(driv2.route);
        printf("Enter the Driver2 Kms travelled\n");
        scanf("%d", &driv2.kms);
        break;
    case 3:
        printf("Enter the Driver3 name\n");
        gets(driv3.drivername);
        printf("Enter the Driver3 Liscence number\n");
        scanf("%s", &driv3.Liscenceno);
        printf("Enter the Driver3 Route\n");
        getchar();
        gets(driv3.route);
        printf("Enter the Driver3 Kms travelled\n");
        scanf("%d", &driv3.kms);
        break;
    default:
        printf(" You Entered a wrong choice\n");
        break;
    }
    printf("******Printing information Entered by these Drivers*******\n");
    switch (a)
    {
    case 1:
        printf("Name:- %s\n", driv1.drivername);
        printf("Liscence Number:- %s\n", driv1.Liscenceno);
        printf("Route:- %s\n", driv1.route);
        printf("Kms Travelled:- %d\n", driv1.kms);
        break;
    case 2:
        printf("Name:- %s\n", driv2.drivername);
        printf("Liscence Number:- %s\n", driv2.Liscenceno);
        printf("Route:- %s\n", driv2.route);
        printf("Kms Travelled:- %d\n", driv2.kms);
        break;
    case 3:
        printf("Name:- %s\n", driv3.drivername);
        printf("Liscence Number:- %s\n", driv3.Liscenceno);
        printf("Route:- %s\n", driv3.route);
        printf("Kms Travelled:- %d\n", driv3.kms);
        break;
    default:
        printf("SORRY BRO WRONG INPUT. PLEASE TRY AGAIN\n");
        break;
    }
    // File mai Likha nahi raha hai 
      ptr=fopen("driver.txt","a");
      fprintf(ptr, "%s\n", driv1.drivername);
      fprintf(ptr, "%s\n", driv1.Liscenceno);
      fprintf(ptr, "%s\n", driv1.route);
      fprintf(ptr, "%s\n", driv1.kms);
    return 0;
}
