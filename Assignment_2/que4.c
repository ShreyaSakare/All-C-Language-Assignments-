/*
Q4.A customer has deposited 10000 Rs in bank in the form of Fixed Deposit for 3 years
having rate of interest 5.00%.Find the total amount he will get after 3 years.
If total amount he will receive is greater than 12000/-,then suggest him
to invest them in mutual fund else suggest him to buy the gold.
*/
#include <stdio.h>
int main()
{
	int dep = 10000 ;
	float total= 10000+((10000*3*5)/100) ;
	printf("\ntotal = %f",total);
	if (total>12000)
	{
		printf("\nInvest your money in mutual funds.");
	}
	else
	{
		printf("\nInvest your money in gold.");
	}
	
	return 0;
	
}
/*
total = 11500.000000
Invest your money in gold.
--------------------------------
Process exited after 0.05586 seconds with return value 0
Press any key to continue . . .

*/
