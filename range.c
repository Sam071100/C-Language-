/*#include <stdio.h>
#include <limits.h>
int main()
{
    int a=INT_MIN;
    int b=INT_MAX;
    printf("The range of the signed integers is from %d to %d\n", a, b);
    
    return 0;
}*/

/*#include <stdio.h>
#include <limits.h>
int main()
{
    int a=0;        //4 BYTES
    int b=UINT_MAX;
    printf("The range of unsigned integer is from %u to %u\n", a,b);  // use %u in place of %d to print the unsigned character.
    
    return 0;
}*/

/*#include <stdio.h>
#include <limits.h>
int main()
{
    int a=SHRT_MIN;
    int b=SHRT_MAX;    // 2 BYTES
   printf("Range of short signed integer is from %d to %d\n",a,b);
    return 0;
}*/

#include <stdio.h>
#include <limits.h>
int main()
{
    int a=0;
    int b=USHRT_MAX;         // 2 BYTES
   printf("Range of short UNsigned integer is from %u to %u\n",a,b);
    return 0;
}


