# include <stdio.h>
/*
Q10. scan length and width of rectangle from user . print area and perimeter.

*/
int main()
{
	int len,wid;
	printf("enter lenghth of rectangle:\n");
	scanf("%d",&len);
	printf("enter width of rectangle:\n");
	scanf("%d",&wid);
	printf("area = %d\n perimeter = %d",len*wid,2*(len+wid));
}
/*
enter lenghth of rectangle:
12
enter width of rectangle:
23
area = 276
 perimeter = 70
--------------------------------
Process exited after 9.018 seconds with return value 26
Press any key to continue . . .

*/
