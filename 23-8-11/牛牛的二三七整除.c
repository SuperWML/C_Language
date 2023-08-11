#include <stdio.h>
int main (void)
{
	int number = 0;
	scanf("%d",&number);
	if(number % 2 == 0)
	{
		printf ("2 ");
	}
	if(number % 3 == 0)
	{
		printf ("3 ");
	}
	if(number % 7 == 0)
	{
		printf ("7 ");
	}
	if((number % 2 != 0) && (number % 3 != 0) && (number % 7 != 0))
	{
		printf ("n ");
	}
	return 0;
}
