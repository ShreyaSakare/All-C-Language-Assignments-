
#include<stdio.h> 
int main()
{
	char ch;
	int num;
	float frac;
	
	printf("\nenter an integer: ");
	scanf("%d",&num);
	
	printf("\nenter an character: ");
	scanf("%c",&ch);
		
		printf("\nenter an fraction: ");
	scanf("%f",&frac);
		printf("\nnumber = %d\ncharacter = %c\nfraction= %f",num,ch,frac);
	
	return 0;
}
/*
enter an integer: 12

enter an character:
enter an fraction: 23.5

number = 12
character =

fraction= 23.500000
--------------------------------
Process exited after 13.37 seconds with return value 0
Press any key to continue . . .
*/
