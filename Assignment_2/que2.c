/*
Q2.Scan length and width of a rectangle , find area and perimeter of rectangle.
If area is greater than 100, print message "Big rectangle" else print message 
"Small Rectangle".
*/
#include <stdio.h>
int main()
{
	int len, wid;
	printf("enter length: ");
	scanf("%d",&len);
	printf("enter width: ");
	scanf("%d",&wid);
	float area = len*wid;
	float peri = 2*(len+wid);
	
	printf("area = %f \n perimeter = %f ",area,peri);
	if (area> 100)
	{
		printf("\nbig rectangle");
	}
	else
	{
		printf("\nsmall rectangle");
	}
	return 0;
	
}
/*
enter length: 45
enter width: 44
area = 1980.000000
 perimeter = 178.000000
  big rectangle
--------------------------------
Process exited after 9.337 seconds with return value 0
Press any key to continue . . .

*/
