#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#include <math.h>
float Edistance(int x1, int y1, int x2, int y2)
{

    return sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
}
float areaofcircle(int x1, int y1, int x2, int y2, float (*distance)(int, int, int, int))
{
    float a;
    a = distance(x1, y1, x2, y2);
    return PI * a * a;
}
int main()
{
    float (*fptr)(int, int, int, int);
    fptr = &Edistance;
    int x1, y1, x2, y2;
    float d, e;
    printf("The Euclidean Distance between (x1,y1) and (x2,y2) will be treated as the Radius of the circle whose area is to be calculated\n");
    printf("\n");
    printf("Enter the value of x1 \n");
    scanf("%d", &x1);
    printf("Enter the value of y1\n");
    scanf("%d", &y1);
    printf("Enter the value of x2\n");
    scanf("%d", &x2);
    printf("Enter the value of y2\n");
    scanf("%d", &y2);
    printf("The value of x1, y1, x2, y2 entered by you is %d, %d, %d, %d;\n", x1, y1, x2, y2);
    e = Edistance(x1, y1, x2, y2);
    d = areaofcircle(x1, y1, x2, y2, fptr);
    printf("The area of the Circle of Radius %0.2f is %0.2f\n", e, d);
    printf("By solving these I have completed the course of C language with Code With Harry On Youtube\n");
    return 0;
}
