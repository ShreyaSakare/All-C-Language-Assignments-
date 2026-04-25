/*
q4. Scan marks of 3 subs of a student . print their avg.
*/

#include<stdio.h> 
int main()
{
	int sub1;
	int sub2;
	int sub3;
	float avg;
	printf("\nenter the marks of subject 1 :");
	scanf("%d",&sub1);
	printf("\nenter the marks of subject 2 :");
	scanf("%d",&sub2);
	printf("\nenter the marks of subject 3 :");
	scanf("%d",&sub3);
	
		printf("\nenter the marks of subject 1 :%d\nenter the marks of subject 2 :%d\nenter the marks of subject 3 :%d",sub1,sub2,sub3);
	avg= (sub1+sub2+sub3)/3.0;
	printf("\navg of three sub is :%f",avg);
	return 0;
}
/*
enter the marks of subject 1 :36

enter the marks of subject 2 :46

enter the marks of subject 3 :55

enter the marks of subject 1 :36
enter the marks of subject 2 :46
enter the marks of subject 3 :55
avg of three sub is :45.666668
--------------------------------
Process exited after 11.5 seconds with return value 0
Press any key to continue . . .
*/
