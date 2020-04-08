#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *ptr;
    printf("   ABC Pvt Ltd.  ( Maintaining information since 100 years)\n");

    int n;
    printf("Employee 1\n");
    printf("Enter the No of characters in your Employee ID\n");
    scanf("%d", &n);
    getchar();
    ptr = (char *)calloc(n+1, sizeof(char));
    printf("Enter your Employee ID\n");
    gets(ptr);
    //scanf("%s", ptr);
    printf("Printing the Employee 1 ID\n");
    puts(ptr);

    int m;
    printf("Employee 2\n");
    printf("Enter the No of characters in your Employee ID\n");
    scanf("%d", &m);
    getchar();
    ptr = (char *)realloc(ptr, m * sizeof(char));
    printf("Enter your Employee ID\n");
    gets(ptr);
    //scanf("%s", ptr);
    printf("Printing the Employee 3 ID\n");
    puts(ptr);

    int o;
    printf("Employee 3\n");
    printf("Enter the No of characters in your Employee ID\n");
    scanf("%d", &o);
    getchar();
    ptr = (char *)realloc(ptr, o * sizeof(char));
    printf("Enter your Employee ID\n");
    gets(ptr);
    //scanf("%s", ptr);
    printf("Printing the Employee 3 ID\n");
    puts(ptr);

    free(ptr);
    return 0;
}
