#include <stdio.h>
int func1(int array[])// By declaring array as a parameter in the function.
{
    for (int  i = 0; i < 4 ; i++)
    {
        printf("The value at %d is %d\n",i, array[i]);
    }
    array[0]=382;// here if we change the formal parameter the actual parameter was also changed bcoz not the copy of the array is passed from the actual parameter to formal parameter but it is converted into pointer.based on the principle of call by reference.
    
    return 0;// if we don't want the output from the function. in place of int void can also be used if this we don't want the return value from the function.
}
void func2(int* ptr)// By passing array's  base address to the fuction
{
     for (int  i = 0; i < 4 ; i++)
    {
        printf("The value at %d is %d\n",i,*(ptr+i));
    }
     *(ptr+2)=6534;  // here also by changing the value in the func2, the same change is getting reflected in the main function that is the actual parameter is getting changed.
}
int main()
{
    int arr[]={23,13,3,4};
    printf("The value at index 0 is %d\n",arr[0]);
    func1(arr);
    printf("The value at index 0 is %d\n",arr[0]);
    func2(arr);
    func2(arr);
    return 0;
}
