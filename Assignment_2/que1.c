/*
Q1.Scan 3 integers from user.Print their average.
*/
#include <stdio.h>
int main()
{
	int num1,num2,num3;
	printf("enter 3 integers: ");
	scanf("%d%d%d",&num1,&num2,&num3);
	float avg = (num1+num2+num3)/3.0;
	printf("average = %f",avg);
	
	return 0;
	
}
/*
enter 3 integers: 12
23
34
average = 23.000000
--------------------------------
Process exited after 4.486 seconds with return value 0
Press any key to continue . . .
*/
