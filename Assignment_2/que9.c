/*
Q9.Scan salary of a person.If salary is greater than 10000, add 5% bonus in the salary.
Else add 8% bonus in the salary.Print final salary.
*/
#include <stdio.h>
int main()
{
	float salary;
	printf("\nEnter your salary: ");
	scanf("%f",&salary);
	
	if(salary>10000)
	{
		salary = salary+((salary*5)/100);
		printf("\n Salary = %f",salary);
	}
	else
	{
		salary = salary+((salary*8)/100);
		printf("\n Salary = %f",salary);
	}
	return 0;
	
}
/*
Enter your salary: 11000

 Salary = 11550.000000
--------------------------------
Process exited after 8.22 seconds with return value 0
Press any key to continue . . .

Enter your salary: 9000

 Salary = 9720.000000
--------------------------------
Process exited after 4.532 seconds with return value 0
Press any key to continue . . .
*/
