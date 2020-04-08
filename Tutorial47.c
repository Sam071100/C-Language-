/*#include <stdio.h>
#include <stdlib.h> //
int main()
{
    // USE OF MALLOC()
    int n;
    int* ptr;
    printf("Enter the size of the array you want to create\n");
    scanf("%d",&n);
    ptr=(int*) malloc(n*sizeof(int));// TEN SIZE KA DYNAMIC ARRAY BAN JAYEGA
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of no %d of this array\n",i);
        scanf("%d",&ptr[i]);  // ptr[i]==*(ptr+i)
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array  is %d\n",i,ptr[i]);
        
    }
    
    return 0;
}*/
#include <stdio.h>
#include <stdlib.h> //
int main()
{
    // USE OF CALLOC()
    int n;
    int* ptr;
    printf("Enter the size of the array you want to create\n");
    scanf("%d",&n);
    ptr=(int*) calloc(n,sizeof(int));// TEN SIZE KA DYNAMIC ARRAY BAN JAYEGA
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of no %d of this array\n",i);
        scanf("%d",&ptr[i]);  // ptr[i]==*(ptr+i)
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array  is %d\n",i,ptr[i]);
        
    }
    
    // USE OF REALLOC()

    printf("Enter the size of the new array you want to create\n");
    scanf("%d",&n);
    ptr=(int*) realloc(ptr,n*sizeof(int));// TEN SIZE KA DYNAMIC ARRAY BAN JAYEGA
    for (int i = 0; i < n; i++)
    {
        printf("Enter the  new value of no %d of this array\n",i);
        scanf("%d",&ptr[i]);  // ptr[i]==*(ptr+i)
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array  is %d\n",i,ptr[i]);
        
    }
    free(ptr);// frees the memory in the heap
    return 0;
}
