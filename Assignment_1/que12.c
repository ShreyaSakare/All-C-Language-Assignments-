#include <stdio.h>
/*
Q12. scan 2 integers from user. check which one is grater and which one is smaller.

*/
int main()
{
	int num1,num2;
	printf("enter 2 integers:\n");
	scanf("%d%d",&num1,&num2);
	
	num1>num2 ? printf("num1 is greater than num 2"): printf("num2 is greater than num1");
}
/*
enter 2 integers:
45 76
num2 is greater than num1
--------------------------------
Process exited after 5.949 seconds with return value 25
Press any key to continue . . .

enter 2 integers:
76 34
num1 is greater than num 2
--------------------------------
Process exited after 8.863 seconds with return value 26
Press any key to continue . . .



*/
