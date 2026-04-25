#include <stdio.h>
/*
Q14. scan principle amount ,rate of interest and number of years from user.Calculate simple 
interest.

*/
int main()
{
	int amt;
	float years,sinterest;
	printf("Enter the amount:\n");
	scanf("%d",&amt);
	
	printf("Enter years:\n");
	scanf("%f",&years);
	
	sinterest=(amt*years*12)/100;
	
	
    printf("Simple interest is :%f",sinterest);
}
/*
Enter the amount:
40000
Enter years:
3.5
Simple interest is :16800.000000
--------------------------------
Process exited after 12.22 seconds with return value 32
Press any key to continue . . .



*/
