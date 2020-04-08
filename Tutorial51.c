#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int randnum(int n)
{
    srand(time(NULL)); //  srand takes seed  as an input and is defined inside the stdlib.h
    return rand() % n;
}
int main()
{
    int j=0,k=0;// j stores the score of the COMPUTER and k stores the score of the PLAYER.
    char str[56];
    printf("Welcome TO ~~~\n");
    printf("STONNEE PAPPERR SCISSORS\n");
    printf("Enter your Name\n");
    gets(str);
    printf("-----::::THE GAME IS BETWEEN::::----\n");
    puts(str);
    printf("\tVS \n");
    printf("\t\tCOMPUTER\n");
    printf("-----------The Game Starts---------\n ");
    while (j<5 && k<5 )
    {

        printf("%s TURN\n", strupr(str));
        int a, b,d=0;
        printf("please select one of the choice::\n1.STONE\n2.PAPER\n3.SCISSORS\n4.QUIT\n");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            b = 0;
            printf("%s Selected STONE\n", strupr(str));
            break;
        case 2:
            b = 1;
            printf("%s Selected PAPER\n", strupr(str));
            break;
        case 3:
            b = 2;
            printf("%s Selected SCISSORS\n", strupr(str));
            break;
        case 4:
        goto end;
        break;
        default:
            printf("Wrong Choice Selected\n");
            goto end;
            break;
        }
        printf("COMPUTER'S TURN\n");
        int c = randnum(3);
        switch (c)
        {
        case 0:
            printf("COMPUTER SELECTED STONE\n");
            break;
        case 1:
            printf("COMPUTER SELECTED PAPER\n");
            break;
        case 2:
            printf("COMPUTER SELECTED SCISSORS\n");
            break;
        default:
            printf("COMPUTER DID NOT SELECT ANYTHING\n");
            break;
        }
        if (b == c)
        {
            printf("~~~-!-!-TIE-!-!-~~~\n");
            printf("%s SCORE IS %d AND COMPUTER SCORE IS %d\n",strupr(str),k,j);
        }
        else if (c == b)
        {
            printf("~~~-!-!-TIE-!-!-~~~\n");
            printf("%s SCORE IS %d AND COMPUTER SCORE IS %d\n",strupr(str),k,j);
        }
        if (b == 0 && c == 2)
        {
            printf("%s WINS\n", strupr(str));
            k++;
            printf("%s SCORE IS %d AND COMPUTER SCORE IS %d\n",strupr(str),k,j);
        }
        else if (c == 0 && b == 2)
        {
            printf("COMPUTER WINS\n");
            j++;
            printf("%s SCORE IS %d AND COMPUTER SCORE IS %d\n",strupr(str),k,j);
        }
        if (b == 2 && c == 1)
        {
            printf("%s WINS\n", strupr(str));
            k++;
            printf("%s SCORE IS %d AND COMPUTER SCORE IS %d\n",strupr(str),k,j);
        }
        else if (c == 2 && b == 1)
        {
            printf("COMPUTER WINS\n");
            j++;
            printf("%s SCORE IS %d AND COMPUTER SCORE IS %d\n",strupr(str),k,j);
        }
        if (b == 0 && c == 1)
        {
             printf("COMPUTER WINS\n");
            j++;
            printf("%s SCORE IS %d AND COMPUTER SCORE IS %d\n",strupr(str),k,j);
        }
        else if (c == 0 && b == 1)
        {
            printf("%s WINS\n", strupr(str));
            k++;
            printf("%s SCORE IS %d AND COMPUTER SCORE IS %d\n",strupr(str),k,j);
        }
    }
    end:
    
    if (k>j)
    {
        printf("%s WINS THE GAME\n",strupr(str));
    }
    else if (j>k)
    {
        printf("COMPUTER WINS THE GAME\n");
    }
    else
    {
        printf("YOU LOST AS YOU HAVE SELECTED TO QUIT THE GAME\n");
    }
    printf("Thanks for playing the Game\n");
    printf("Hope to see you again........!\n");
    printf("CREDITS:- SHUBHAM SAMRAT\n");
    getch();
    return 0;
}
