#include <stdio.h>

 int  main(void) 
 {
    int am;
    float bal;
	printf("Enter the Amount you want to take , Total Balance\n");
	scanf("%d %f",&am,&bal);
	if(bal>am+0.5&&am%5==0)
	    {
	        printf("YOUR TRANSACTIONS WAS SUCCESSFUL.YOUR NEW BALANCE IS %.2f\n",bal-am-0.5);
	    }
	else
	    {
	        
	        printf("YOUR TRANSACTION WAS UNSUCCESSFULL.YOUR NEW BALANCE IS %.2f\n",bal);
	    }
    
	return 0;
}
