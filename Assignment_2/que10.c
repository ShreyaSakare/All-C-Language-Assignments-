/*
Q10.Scan 3 integers from user.Find the smallest of those 3 integers.
*/
#include <stdio.h>
int main()
{
	int num1,num2,num3;
	printf("\nEnter 3 integers: ");
	scanf("%d%d%d",&num1,&num2,&num3);
	if (num1<num2 && num1<num3)
	{
		printf("\nsmallest value is num1 = %d",num1);
	}
	else if (num2<num1 && num2<num3)
	{
		printf("\nsmallest value is num2 = %d",num2);
	}
	else
	{
		printf("\nsmallest value is num3 = %d",num3);
	}
	return 0;
	
}
/*
Enter 3 integers: 10
20
30

smallest value is num1 = 10
--------------------------------
Process exited after 6.659 seconds with return value 0
Press any key to continue . . .

Enter 3 integers: 20
10
30

smallest value is num2 = 10
--------------------------------
Process exited after 5.564 seconds with return value 0
Press any key to continue . . .

Enter 3 integers: 100
200
50

smallest value is num3 = 50
--------------------------------
Process exited after 7.295 seconds with return value 0
Press any key to continue . . .


*/
