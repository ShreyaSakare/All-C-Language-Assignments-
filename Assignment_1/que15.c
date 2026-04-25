#include <stdio.h>
/*
Q15. scan a num from user print correct input if lies between 5 and 10 otherwise print wrong input
*/
int main()
{
	int num1;
	printf("enter integer:\n");
	scanf("%d",&num1);
	
	(num1>5 && num1<10) ? printf("correct input"): printf("wrong input");

}
/*
enter integer:
6
correct input
--------------------------------
Process exited after 2.568 seconds with return value 13
Press any key to continue . . .

enter integer:
18
wrong input
--------------------------------
Process exited after 3.518 seconds with return value 11
Press any key to continue . . .




*/
