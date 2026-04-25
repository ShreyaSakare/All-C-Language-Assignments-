/*
q3. scan a character , an integer , and a fraction value from user 
Scan the following sequence.
1. char, int , float
2. int char , float
*/
#include<stdio.h>
int main()
{
	char ch;
	int num;
	float frac;
	printf("\nenter an character: ");
	scanf("%c",&ch);
		printf("\nenter an integer: ");
	scanf("%d",&num);
		printf("\nenter an fraction: ");
	scanf("%f",&frac);
		printf("\ncharacter = %c\nnumber = %d\nfraction= %f",ch,num,frac);
	
	return 0;
}
/*
enter an character: q

enter an integer: 12

enter an fraction: 23.5

character = q
number = 12
fraction= 23.500000
--------------------------------
Process exited after 11.94 seconds with return value 0
Press any key to continue . . .
*/
