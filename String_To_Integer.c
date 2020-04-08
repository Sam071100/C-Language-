#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int n;
	printf("Enter the number of digits u want to enter\n");
	scanf("%d", &n);
	getchar();
	char arr[n];
	printf("Enter your String\n");
    gets(arr);
	printf("The String taken by the User\n");
	puts(arr);
	char c;
	int i, digit, number = 0;
	for (i = 0; i < n; i++)
	{
		c = arr[i];
		if (c >= '0' && c <= '9') //to confirm it's a digit
		{
			digit = c - '0';
			number = number * 10 + digit;
		}
	}
	printf("the digit Taken from string is  %d", number);
	return 0;
}
