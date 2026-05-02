/*
Q5.Scan a gender from user.If user enters m OR M , print male.
If user enter f OR F, print female.Otherwise print wrong input.

*/
#include <stdio.h>
int main()
{
	char gen;
	printf("\n enter gender: ");
	scanf("%c",&gen);
	if (gen=='m')
	{
		printf("gender = male");
	}
 	else if(gen=='M')
	  {
	  	printf("gender = male");
	  }
	 else if (gen=='f')
	{
		printf("gender = female");
	}
 	else if(gen=='F')
	  {
	  	printf("gender = female");
	  }
	  else 
	  {
	  	printf("invalid input");
	  	
	  }
	return 0;
	
}
/*
enter gender: f
gender = female
--------------------------------
Process exited after 3.939 seconds with return value 0
Press any key to continue . . .

enter gender: F
gender = female
--------------------------------
Process exited after 3.329 seconds with return value 0
Press any key to continue . . .

enter gender: m
gender = male
--------------------------------
Process exited after 3.322 seconds with return value 0
Press any key to continue . . .

 enter gender: M
gender = male
--------------------------------
Process exited after 2.496 seconds with return value 0
Press any key to continue . . .

enter gender: a
invalid input
--------------------------------
Process exited after 1.954 seconds with return value 0
Press any key to continue . . .
*/
