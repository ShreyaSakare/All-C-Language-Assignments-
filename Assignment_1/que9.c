# include <stdio.h>
/*
Q9. scan 2 integers from user . print their addition without using + operator.

*/
int main()
{
	int num1,num2;
	printf("enter 2 intergers:\n");
	scanf("%d%d",&num1,&num2);
	printf("addition of 2 nos:- %d",num1-(-num2));
}
/*
enter 2 intergers:
12
34
addition of 2 nos:- 46
--------------------------------
Process exited after 4.889 seconds with return value 22

*/
