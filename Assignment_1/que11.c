# include <stdio.h>
/*
Q11. scan radius of circle from user print area and circumference.

*/
int main()
{
	int rad;
	printf("enter radius of circle:\n");
	scanf("%d",&rad);
	float area= 3.14*rad*rad;
	float circm = 2*3.14*rad;
	printf("area = %f\n circumference = %f",area,circm);
}
/*
enter radius of circle:
12
area = 452.160004
 circumference = 75.360001
--------------------------------
Process exited after 3.057 seconds with return value 44
Press any key to continue . . .


*/
