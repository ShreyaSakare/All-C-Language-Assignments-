/*
Q3.Scan radius of a circle from user.Find area and circumference of circle.
If area of circle is greater than 50,print how much it is greater than 50.
If area is smaller than 50,print how much it is smalller than 50.
Print every message properly.
*/
#include <stdio.h>
int main()
{
	int rad;
	printf("\nenter radius: ");
	scanf("%d",&rad);
	float area = 3.14*rad*rad;
	float crcm = 2*3.14*rad;
	printf("\narea = %f\n circumference = %f ",area,crcm);
	if (area<50)
	{
		printf("\narea is %f smaller than 50",50-area);
	}
	else if (area>50)
	{
		printf("\narea is %f greater than 50",area-50);
	}
	
	
	return 0;
	
}
/*
enter radius: 10

area = 314.000000
 circumference = 62.799999
area is 264.000000 greater than 50
--------------------------------
Process exited after 3.158 seconds with return value 0
Press any key to continue . . .


enter radius: 1

area = 3.140000
 circumference = 6.280000
area is 46.860001 smaller than 50
--------------------------------
Process exited after 1.349 seconds with return value 0
Press any key to continue . . .

*/
