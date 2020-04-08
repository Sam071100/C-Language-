# include <stdio.h>
# define PI 3.14// Defining a preprocessor variable or constant
#define SQUARE(r)r*r // Defining a Macro
int main()
{
    int r=4;
 float var= PI;
  printf("The value is %0.2f\n",var);
  printf("The area of the circle  is %0.2f\n",PI*SQUARE(r));// use of macro and constant
  return 0;
}
