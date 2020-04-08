#include <stdio.h>
#define PI 3.14
int main()
{
  int a=8;
  const float b=7.333;
  //PI=7.333;//wrong, cannot do this since b is a constant. 
  //b=7.22; // wrong, cannot do this since b is a constant. 
  //printf("The value of a is %d and the value of b is %0.40f\n ",a, b);
  // printf("%19.4f this is\n", b); 
  printf( " tab character \t\t\t\t\t my backslash \a %f\n", PI); // sound of my window is not coming by using \a.
    return 0;
}
