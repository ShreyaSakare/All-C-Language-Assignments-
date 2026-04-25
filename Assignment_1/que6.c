/*
q6. scan temperature from the user in celcius . convert it in farhenite. 
*/
#include<stdio.h>
int main()
{
	float temp;
	printf("\nenter the temperature in celcius: ");
	scanf("%f",&temp);
	printf("\ntemperature in celcius:%f ",temp);
	float far;
	far = ((9*temp)/8)+32;
	printf("\ntemperature in farhenite:%f ",far);
	return 0;
}
/*
enter the temperature in celcius: 37

temperature in celcius:37.000000
temperature in farhenite:73.625000
--------------------------------
Process exited after 4.255 seconds with return value 0
Press any key to continue . . .

*/
