#include <stdio.h>
#include <stdlib.h>
#define ll long long int
int main()
{
    ll t, p, n, tem, d, size, var;
    size=0;
    tem=0;
    p=0;
    printf("Enter the Population of the City\n");
    scanf("%lli",&n);  // Takes input the number of people
    char* s;
    s= (char*)malloc(sizeof(char)*10000);
    ll a[n];
    printf("Enter the Information of Your People\n");
    scanf("%s",s);
    printf("Enter the Days of the LockDown\n");
    scanf("%lli",&d);
    for (int i = 0; i < n; i++)
    {
       if (s[i] =='1')
       {
           a[size]=i;
           size++;
       }
    }
    for (int j = 0; j < d; j++)
    {
        printf("Enter the Sequence in which the people got seprated from the Previous People\n");
        scanf("%lli",&var);
        var=var-1;
        s[var]=s[var]+2;
        for (int i = tem; i < size; i++)
        {
            if (a[i]>0 && s[a[i]]=='1' && (s[a[i]-1]=='0'|| s[a[i]-1]=='2'))
            {
                s[a[i]-1]=s[a[i]-1]+1;
                a[size+p]=a[i]+1;
                p++;
            }
            if (a[i]< n-1 && s[a[i]+1]=='0')
            {
                s[a[i]+1]='1';
                a[size+p]=a[i]+1;
                p++;
            }
        }
        tem= size;
        size= size+ p;
        p=0;
    }
    printf("The Number of People That got affected by this Virus is %d\n",size+2);
    return 0;
}
