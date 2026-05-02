/*
Q6.Scan length and width of a rectangle from user.Check if it is square or rectangle.
*/
#include <stdio.h>
int main()
{
		int len, wid;
	printf("enter length: ");
	scanf("%d",&len);
	printf("enter width: ");
	scanf("%d",&wid);
	 
	 if (len==wid)
	 {
	 	printf("It is a square.");
	 }
	 else 
	 {
	 	printf("It is a rectangle.");
	 }
	return 0;
	
}
/*
enter length: 12
enter width: 56
It is a rectangle.
--------------------------------
Process exited after 5.789 seconds with return value 0
Press any key to continue . . .


enter length: 12
enter width: 12
It is a square.
--------------------------------
Process exited after 2.804 seconds with return value 0
Press any key to continue . . .


*/
