/*
km to miles
inches to foot
kms to inches
pounds to kgs
inches to m
*/
#include <stdio.h>
int main()
{
    char input;
    float kmstoMiles=0.621371;
    float inchestoFoot=0.0833333;
    float cmstoInches=0.393701;
    float poundtoKgs=0.453592;
    float inchestoMetres=0.0254;
    float first, second;

    while(1) // infinite loop and goes on till someone breaks it
    {
       printf("Enter the input Character, q to quit\n  1.kms to miles\n  2.inches to foot\n  3.kms to inches\n  4.pounds to kgs\n  5.inches to m \n ");  
       
       scanf(" %c", &input); // find %c se phele space kyon lagaya gya?????????
      
       switch (input)
       {
       case 'q':
       printf("Quiting the Program...........!");
           goto end;
           break;
           case '1':
            printf("Enter the quantity in terms of First unit\n");
           scanf("%f", &first);
           second=first*kmstoMiles;
           printf("%.2f Kms is equal to %.2f Miles \n\n\n", first, second);
           break;
            case '2':
             printf("Enter the quantity in terms of First unit\n");
           scanf("%f", &first);
            second=first*inchestoFoot;
            printf("%.2f Inches is equal to %.2f Foot \n\n\n", first, second);
           break;
            case '3':
             printf("Enter the quantity in terms of First unit\n");
           scanf("%f", &first);
            second=first*cmstoInches;
            printf("%.2f Cms is equal to %.2f Inches \n\n\n", first, second);
           break;
            case '4':
             printf("Enter the quantity in terms of First unit\n");
           scanf("%f", &first);
            second=first*poundtoKgs;
            printf("%.2f Pounds is equal to %.2f Kgs \n\n\n", first, second);
           break;
            case '5':
             printf("Enter the quantity in terms of First unit\n");
           scanf("%f", &first);
            second=first*inchestoMetres;
            printf("%.2f inches is equal to %.2f metres \n\n\n", first, second);
           break;
       
       default:
           break;
       }
    }
    end:
    return 0;
}
          
           