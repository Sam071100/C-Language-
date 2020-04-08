//%p gives the address.....
#include <stdio.h>
int main()
{
    printf("Lets learn about Pointer::::::\n");
    int a=76;
    int* ptra= &a;
    int* ptra2=NULL; // This is a NULL POINTER
    printf("The value of a is %d\n",a);// correct
    printf("The value of a is %d\n",*ptra); // Correct
    printf("The address of ptra is %p\n",&ptra);  
    printf("The address of ptra is %x\n",&ptra);  // Number in Hexa decimal is printed by this format specifiers: %x
    printf("The value of a converted into hexadecimal is  %x\n",a);// here 76 is getting converted into hexadecimal
    // below each line is expressing the address of a in some different manner
    printf("The value of a converted into hexadecimal is %x\n", *ptra);
    printf("the address of a is %p\n",&a );
    printf("the address of a is %x\n",&a ); 
    printf("The address of a is %p\n", ptra);
    printf("The address of a is %x\n", ptra);

    printf("The NULL pointer is: %p\n", ptra2);
    printf("The NULL pointer is: %x\n", ptra2);// in hexadecimal number
    return 0;
}
// ptra mai a ka address stored hai
