/*
q8. scan a four digit no. forn user and print its ascii value.
*/
#include <stdio.h>
int main()
{
	int num;
	printf("\nenter 4 digit no.:- ");
	scanf("%d",&num);
	num%1000?printf("num = %d",num):printf("enter valid 4 digit no.");
	return 0;
}
