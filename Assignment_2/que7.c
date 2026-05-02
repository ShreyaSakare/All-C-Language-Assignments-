/*
Q7.Scan marks of 4 subjects of a student.If average of 4 subjects is greater than 75,
print message DISTINCTION,else print message "STUDY MORE".
*/
#include <stdio.h>
int main()
{
	int sub1,sub2,sub3,sub4;
	printf("\nEnter marks of subject 1: ");
	scanf("%d",&sub1);
	printf("\nEnter marks of subject 2: ");
	scanf("%d",&sub2);
	printf("\nEnter marks of subject 3: ");
	scanf("%d",&sub3);
	printf("\nEnter marks of subject 4: ");
	scanf("%d",&sub4);
	float avg = (sub1+sub2+sub3+ sub4)/4;
	
	if (avg > 75)
	{
		printf("\nGrade =  DISTINCTION");
	}
	else
	{
		printf("\nSTUDY MORE");
	}
	return 0;
	
}
/*
Enter marks of subject 1: 30

Enter marks of subject 2: 40

Enter marks of subject 3: 50

Enter marks of subject 4: 60

STUDY MORE
--------------------------------
Process exited after 8.909 seconds with return value 0
Press any key to continue . . .

Enter marks of subject 1: 90

Enter marks of subject 2: 90

Enter marks of subject 3: 90

Enter marks of subject 4: 90

Grade =  DISTINCTION
--------------------------------
Process exited after 10.17 seconds with return value 0
Press any key to continue . . .Enter marks of subject 1: 90

Enter marks of subject 2: 90

Enter marks of subject 3: 90

Enter marks of subject 4: 90

Grade =  DISTINCTION
--------------------------------
Process exited after 10.17 seconds with return value 0
Press any key to continue . . .

*/
