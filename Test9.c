#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
int randnum(int n)
{
    srand(time(NULL)); //  srand takes seed  as an input and is defined inside the stdlib.h
    return rand() % n;
}

int width = 20, height = 20, gameOver;
int x, y, fruitX, fruitY, score, flag; // here x and y denotes the intial position of the snake and fruitx and y denotes the position of the food.
// x denotes the intial position of the snake along width and y denotes the snake position of the snake along height.
void setup()
{
    gameOver = 0;
    x = width / 2; //  intial position of the snake
    y = height / 2;

    fruitX = randnum(19) + 1; // Here we did not include 0 as we don't want the fruit to be generated on the boundary.
    fruitY = randnum(19) + 1; // So the output of this function will be from 1 to 19.
    score = 0;                // Intially the score is set to 0.
}

void draw() // Function to make the game boundary.
{
    system("cls"); // Clears the previous screen.
    int i, j;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
            {
                printf("*");
            }

            else if (i == y && j == x) // To print the snake in the blank space.
            {
                printf("O"); // Snake starting position.
            }
            else if (i == fruitX && j == fruitY)
            {
                printf("F"); // For denoting the fruit.
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void input()
{
    if (kbhit())
    {
        switch (getch())
        {
        case 'a': // User wants to go left
            flag = 1;
            break;

        case 'd': // User wants to go right
            flag = 2;
            break;

        case 'w': // User wants to go up
            flag = 3;
            break;

        case 's': //// User wants to go down
            flag = 4;
            break;

        case 'x': //// User wants to go quit the game
            gameOver = 1;
            break;

        default:
            printf("Wrong key pressed\n");
            break;
        }
    }
}

void makeLogic()
{
    switch (flag)
    {
    case 1:
        x--;
        break;

    case 2:
        x++;
        break;

    case 3:
        y--;
        break;

    case 4:
        y++;
        break;

    default:
        break;
    }
    if (x < 0|| x > width||y < 0||y > height) // To control the movement of the snake to be inside the boundary.
    {
        gameOver=1;
    }
    
}

int main()
{
    setup(); // Here we have to repeat the down functions in an infinite loop so they are called everytime and the change is noticed.
    while (!gameOver)
    {
        draw();
        input();
        makeLogic();
        if (gameOver==1)
        {
            break;
        }
    }

    getch();
    return 0;
}
