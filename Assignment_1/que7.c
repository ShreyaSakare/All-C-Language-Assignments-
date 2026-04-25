/*
q7. WAP to scan any character from user and print its ascci value.
check ascii value for 'a','A','Z','z','\n','\t','0','1','9'.
*/
#include<stdio.h>
int main()
{
	char ch='\n';
	char ch1='\t';
	char ch3;
	printf("ascii value of ch =  %d \nascii value of ch1 = %d ",ch,ch1);
	printf("\nenter an character: ");
	scanf("%c",&ch3);
	printf("\nascii value of ch3 =%d",ch3);
	return 0;
}
/*
ascii value of ch =  10
ascii value of ch1 = 9
enter an character: a

ascii value of ch3 =97
--------------------------------
Process exited after 2.225 seconds with return value 0
Press any key to continue . . .


ascii value of ch =  10
ascii value of ch1 = 9
enter an character: A

ascii value of ch3 =65
--------------------------------
Process exited after 2.307 seconds with return value 0
Press any key to continue . . .

ascii value of ch =  10
ascii value of ch1 = 9
enter an character: Z

ascii value of ch3 =90
--------------------------------
Process exited after 3.812 seconds with return value 0
Press any key to continue . . .


ascii value of ch =  10
ascii value of ch1 = 9
enter an character: z

ascii value of ch3 =122
--------------------------------
Process exited after 2.002 seconds with return value 0
Press any key to continue . . .


ascii value of ch =  10
ascii value of ch1 = 9
enter an character: 0

ascii value of ch3 =48
--------------------------------
Process exited after 3.604 seconds with return value 0
Press any key to continue . . .

ascii value of ch =  10
ascii value of ch1 = 9
enter an character: 1

ascii value of ch3 =49
--------------------------------
Process exited after 2.925 seconds with return value 0
Press any key to continue . . .

ascii value of ch =  10
ascii value of ch1 = 9
enter an character: 9

ascii value of ch3 =57
--------------------------------
Process exited after 2.798 seconds with return value 0
Press any key to continue . . .


*/
