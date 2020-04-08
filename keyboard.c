#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    while (1)
    {
     if (kbhit()) // Helps in breaking from the infinite loop if anything is pressed from the keyboard.
     {
         ch= getch(); // GETCH() IS USED TO CAPTURE THE KEYWORD ENTERED FROM THE KEYBOARD.
         printf("The character Entered from the Keyboard is %c\n",ch);
         
         break;
     }
     printf("PLEASE PRESS ANY KEY FROM THE KEYBOARD\n");
    }
    
    return 0;
}
